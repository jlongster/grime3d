
(define grime3d-host #f)
(define grime3d-connection #f)

(define (grime3d-set-host! host)
  (set! grime3d-host host))

(define (grime3d-connect)
  (let ((proc (open-tcp-client grime3d-host)))
    (thread-start!
     (make-thread
      (lambda ()
        (let loop ()
          (let ((msg (read proc)))
            (if (not (eof-object? msg))
                (begin
                  (grime3d-handle-message msg)
                  (loop))))))))))

(define (grime3d-handle-message msg)
  #!void)
