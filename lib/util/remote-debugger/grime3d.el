
(setq grime3d-server nil)

(defun grime3d-display-msg (proc str)
  (with-current-buffer (process-buffer proc)
    (let ((move (= (point) (process-mark proc))))
      (save-excursion
        (goto-char (process-mark proc))
        (insert (concat str "\n"))
        (set-marker (process-mark proc) (point)))
      (if move (goto-char (process-mark proc))))))

(defun grime3d-client-filter (proc string)
  (grime3d-display-msg proc (concat "MESSAGE: " string)))

(defun grime3d-client-sentinel (proc msg)
  (if (string-match "open from" msg)
      (grime3d-init-client proc)))

(defun grime3d-open-client ()
  (interactive)
  
  ;; Make sure everything has started (harmless)
  (grime3d-start)
  
  ;; Start the client
  (start-process "grime3d-client"
                 nil
                 "open"
                 "-n"
                 "-g"
                 "/Applications/grime3d.app"))

(defun grime3d-init-client (proc)
  (let ((buf (get-buffer-create (grime3d-client-buffer-name proc))))
    (switch-to-buffer buf)
    (set-process-buffer proc buf)
    (set-marker (process-mark proc) (point))
    (grime3d-send-resize (get-buffer-window buf))
    (grime3d-display-msg
     proc
     (concat "canvas RUNNING on port..."
             (number-to-string (process-contact proc :service))))))

(defun grime3d-close-client ()
  (let ((buffer (current-buffer)))
    (if (grime3d-buffer-p buffer)
        (progn
          (grime3d-display-msg (get-buffer-process buffer) "canvas CLOSED.")
          (grime3d-send-close buffer)))))

(defun grime3d-client-buffer-name (proc)
  (concat "*grime3d-"
          (number-to-string (process-contact proc :service))
          "*"))

(defun grime3d-buffer-p (buf)
  (and (string-match
        "\*grime3d-.*\*" (buffer-name buf))
       (get-buffer-process buf)))

(defun grime3d-foreach-buffer (func)
  (dolist (buf (buffer-list))
    (if (grime3d-buffer-p buf)
        (funcall func buf))))

(defun grime3d-start ()
  (interactive)

  ;; Init grime
  (grime-start)
  
  ;; Start the server if not started
  (if (not grime3d-server)
      (progn
        (setq grime3d-server
              (make-network-process :name "grime3d"
                                    :buffer "*grime3d*"
                                    :family 'ipv4
                                    :server t
                                    :service 35000
                                    :filter 'grime3d-client-filter
                                    :sentinel 'grime3d-client-sentinel))

        ;; Activate all the hooks
        (add-hook 'window-configuration-change-hook
                  'grime3d-broadcast-updates)

        (add-hook 'kill-buffer-hook
                  'grime3d-close-client))))

(defun grime3d-force-restart ()
  (interactive)
  (grime3d-kill)
  (grime-kill)
  (grime3d-start))

(defun grime3d-kill ()
  (interactive)
  (grime-kill)

  (grime3d-cleanup)
  
  (if grime3d-server
      (progn
        (delete-process grime3d-server)
        (remove-hook 'window-configuration-change-hook
                     'grime3d-broadcast-updates)
        (remove-hook 'kill-buffer-hook
                     'grime3d-close-client)
        (setq grime3d-server nil))))

(defun grime3d-cleanup ()
  (interactive)
  (grime3d-foreach-buffer
   (lambda (buf)
     (let ((proc (get-buffer-process buf)))
       (grime3d-send-close proc)
       (kill-buffer buf)))))

;;; Catch all of the events that could bury a grime3d buffer. There
;;; might be a better way to do this. Unfortunately, Emacs doesn't
;;; provide canonical hooks for when buffers are shown or hidden.

;; (defadvice bury-buffer (before
;;                         grime3d-bury-buffer)
;;   (grime3d-send-hide (current-buffer)))

;; (defadvice switch-to-buffer (before
;;                              grime3d-switch-to-buffer-before)
;;   (grime3d-send-hide (current-buffer)))

;; ;; (defadvice switch-to-buffer (after
;; ;;                              grime3d-switch-to-buffer-after)
;; ;;   (grime3d-send-show (current-buffer)))

;; (defun grime3d-enable-advices ()
;;   (ad-activate 'bury-buffer)
;;   (ad-activate 'switch-to-buffer))

;; (defun grime3d-disable-advices ()
;;   (ad-deactivate 'bury-buffer)
;;   (ad-deactivate 'switch-to-buffer))

;;; Communication with clients

;; (defun grime3d-send-show (buffer)
;;   (let ((proc (get-buffer-process buffer)))
;;     (if proc
;;         (process-send-string proc "show\n"))))

(defun grime3d-send-close (buffer-or-process)
  (let ((proc (if (processp buffer-or-process)
                  buffer-or-process
                (get-buffer-process buffer-or-process))))
    (if proc
        (process-send-string proc "close\n"))))

(defun grime3d-send-hide (buffer-or-process)
    (let ((proc (if (processp buffer-or-process)
                  buffer-or-process
                (get-buffer-process buffer-or-process))))
    (if proc
        (process-send-string proc "hide\n"))))

(defun grime3d-send-resize (window)
  (let ((proc (get-buffer-process (window-buffer window)))
        (pos (grime3d-get-window-space window)))
    (process-send-string proc
                         (concat "("
                                 (mapconcat 'number-to-string
                                            pos
                                            " ")
                                 ")"))))

(defun grime3d-broadcast-updates ()
  (grime3d-foreach-buffer
   (lambda (buf)
     (if (get-buffer-window buf)
         (grime3d-send-resize (get-buffer-window buf))
       (grime3d-send-hide buf)))))

(defun grime3d-get-window-space (window)
  (let* ((coords (window-inside-pixel-edges window))
         (left (car coords))
         (top (cadr coords))
         (right (caddr coords))
         (bottom (cadddr coords))
         (frame-top (frame-parameter (window-frame window) 'top))
         (frame-left (frame-parameter (window-frame window) 'left)))
    ;; (x, y, width, height)
    (list (+ frame-left left)
          (+ frame-top top)
          (- right left)
          (- bottom top))))

