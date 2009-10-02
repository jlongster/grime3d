
;; Include standard modules here
;;(include "util/remote-debugger/debuggee.scm")

(include "util/remote-debugger/grime3d.scm")
(include "resources.scm")

(set! grime3d-handle-message
      (lambda (msg)
        (cond
         ((eq? msg 'show) (window-show))
         ((eq? msg 'hide) (window-hide))
         ((eq? msg 'close) (window-close))
         ((pair? msg) (apply window-resize msg))
         (else (error "received unknown message")))))

;; (rdi-set-host! "localhost:20000")
;; (thread-start!
;;  (make-thread
;;   (lambda () (##repl-debug-main))))

;; Load in the engine and define its interface
(load (resource "lib/engine"))

(c-define (init-opengl-c width height) (unsigned-int unsigned-int) void "init_opengl" ""
  (init-opengl width height))

(c-define (init-engine-c) () void "init_engine" ""
  (grime3d-set-host! "localhost:35000")
  (grime3d-connect)
  (init-engine))

(c-define (run-frame-c) () void "run_frame" ""
  (run-frame))

(define window-resize
  (c-lambda (int int int int) void "window_resize"))

(define window-show
  (c-lambda () void "window_show"))

(define window-hide
  (c-lambda () void "window_hide"))

(define window-close
  (c-lambda () void "window_close"))

