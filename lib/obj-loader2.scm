
(declare (block)
         (standard-bindings)
         (extended-bindings))

;;;; util

(define (read-map #!optional f)
  (unfold (lambda (x) (eof-object? x))
          (lambda (x) (if f (f x) x))
          (lambda (x) (read))
          (read)))

(define (enforce-length name len lst)
  (if (eq? (length lst) len)
      lst
      (error name "assert-length failed")))

;;;; materials

(define-type material
  id: 7A56AB3B-C6D4-4C8C-9BB8-9845CFE1CF07
  constructor: really-make-material
  ambient
  diffuse
  specular)

(define (make-material)
  (really-make-material #f #f #f))

(define (mtl-parse-ambient)
  (apply make-vec3d
         (enforce-length "ambient" 3 (read-map exact->inexact))))

(define (mtl-parse-diffuse)
  (apply make-vec3d
         (enforce-length "diffuse" 3 (read-map exact->inexact))))

(define (mtl-parse-specular)
  (apply make-vec3d
         (enforce-length "specular" 3 (read-map exact->inexact))))

(define (mtl-parse-line mtls mtl-name line)
  (with-input-from-string line
    (lambda ()
      (let* ((type (read))
             (name mtl-name)
             (mtl (table-ref mtls name #f)))
        (case type
          ((newmtl)
           (let ((new-name (read)))
             (table-set! mtls new-name (make-material))
             (set! name new-name)))
          ((Ka) (material-ambient-set! mtl (mtl-parse-ambient)))
          ((Kd) (material-diffuse-set! mtl (mtl-parse-diffuse)))
          ((Ks) (material-specular-set! mtl (mtl-parse-specular))))
        name))))

(define (mtl-load file)
  (let ((file (string-append file ".mtl")))
    (if (file-exists? file)
        (with-input-from-file file
          (lambda ()
            (let ((mtls (make-table)))
              (let loop ((current-mat #f))
                (let ((line (read-line)))
                  (if (not (eof-object? line))
                      (begin
                        (loop (mtl-parse-line mtls
                                              current-mat
                                              line))))))
              mtls)))
        (make-table))))

;;;; objects

(define-type bounding-box
  id: 5F2D3F2A-BCE3-40B0-992C-F665CBA4B68F
  constructor: really-make-bounding-box
  min-x
  max-x
  min-y
  max-y
  min-z
  max-z)

(define-type obj-chunk
  id: 9B813D93-5965-432C-AF69-31955C9D9506
  constructor: really-make-obj-chunk
  num-indices
  indices
  mat)

(define-type obj
  id: 8E600AD2-9106-405C-82DF-0D700BE0E5D9
  constructor: really-make-obj
  num-vertices
  vertices
  normals
  chunks
  bounding-box)

(define (make-bounding-box)
  (really-make-bounding-box 0. 0. 0. 0. 0. 0.))

(define (make-chunk mat)
  (really-make-obj-chunk #f '() mat))

(define (make-obj)
  (really-make-obj #f '() '() '() (make-bounding-box)))

(define (obj-parse-vertex)
  (enforce-length "vertex" 3 (read-map exact->inexact)))

(define (obj-parse-normal)
  (let ((v (vec3d-unit
            (apply make-vec3d
                   (enforce-length "normal" 3
                                   (read-map exact->inexact))))))
    (list (vec3d-x v) (vec3d-y v) (vec3d-z v))))

(define (obj-parse-face)
  (enforce-length "face" 3 (read-map (lambda (n) (- n 1)))))

(define (update-bounding-box obj x y z)
  (let ((box (obj-bounding-box obj)))
    (if (< x (bounding-box-min-x box))
        (bounding-box-min-x-set! box x)
        (if (> x (bounding-box-max-x box))
            (bounding-box-max-x-set! box x)))

    (if (< y (bounding-box-min-y box))
        (bounding-box-min-y-set! box y)
        (if (> y (bounding-box-max-y box))
            (bounding-box-max-y-set! box y)))

    (if (< z (bounding-box-min-z box))
        (bounding-box-min-z-set! box z)
        (if (> z (bounding-box-max-x box))
            (bounding-box-max-z-set! box z)))))

(define (obj-parse-line obj chunk mtls line)
  (define (appendd lst lst2)
    (append (reverse lst) lst2))

  (with-input-from-string line
    (lambda ()
      (let ((type (read)))
        (case type
          ((v)
           (let ((v (obj-parse-vertex)))
             (apply update-bounding-box (cons obj v))
             (obj-vertices-set!
              obj
              (appendd v (obj-vertices obj)))))
          ((vn)
           (obj-normals-set!
            obj
            (appendd (obj-parse-normal)
                     (obj-normals obj))))
          ((f)
           (obj-chunk-indices-set!
            chunk
            (appendd (obj-parse-face)
                     (obj-chunk-indices chunk))))
          ((usemtl)
           (let ((name (read)))
             (table-ref mtls name #f))))))))

(define (flip-and-vectorize data)
    (list->vector (reverse data)))

(define (obj-finalize obj avoid-c-vectors?)
  (if (not avoid-c-vectors?)
      (begin
        (obj-num-vertices-set! obj (length (obj-vertices obj)))
        (obj-vertices-set! obj (flip-and-vectorize (obj-vertices obj)))
        (obj-normals-set! obj (flip-and-vectorize (obj-normals obj)))
        (obj-vertices-set! obj
                           (vector->float-array (obj-vertices obj)))
        (obj-normals-set! obj
                          (vector->float-array (obj-normals obj))))))

(define (obj-chunk-finalize chunk avoid-c-vectors?)
  (if (not avoid-c-vectors?)
      (begin
        (obj-chunk-num-indices-set! chunk (length (obj-chunk-indices chunk)))
        (obj-chunk-indices-set! chunk (flip-and-vectorize
                                       (obj-chunk-indices chunk)))
        (obj-chunk-indices-set! chunk
                                (vector->unsigned-int16-array (obj-chunk-indices chunk))))))

(define (obj-load file #!optional compressed? avoid-c-vectors?)
  (if compressed?
      (let ((mesh (decompress (string-append file ".obj.gso"))))
        (for-each (lambda (el)
                    (obj-chunk-finalize el avoid-c-vectors?))
                  (obj-chunks mesh))
        (obj-finalize mesh avoid-c-vectors?)
        mesh)
      (with-input-from-file (string-append file ".obj")
        (lambda ()
          (let ((mesh (make-obj))
                (mtls (mtl-load file)))
            (let loop ((acc '())
                       (chunk (make-chunk #f)))
              (let ((line (read-line)))
                (if (not (eof-object? line))
                    (let ((res (obj-parse-line mesh chunk mtls line)))
                      (if (material? res)
                          (begin
                            (obj-chunk-finalize chunk avoid-c-vectors?)
                            (loop (cons chunk acc)
                                  (make-chunk res)))
                          (loop acc chunk)))
                    (begin
                      (obj-chunk-finalize chunk avoid-c-vectors?)
                      (obj-chunks-set! mesh (cons chunk acc))))))
            (obj-finalize mesh avoid-c-vectors?)
            mesh)))))

;;;; compressor

(define (compress filename mesh)
  (with-output-to-file filename
    (lambda ()
      (let* ((v (object->u8vector mesh))
             (len (u8vector-length v))
             (len-u8 (object->u8vector len))
             (boot (u8vector-length len-u8)))
        (write-u8 boot)
        (write-subu8vector len-u8 0 boot)
        (write-subu8vector v 0 (u8vector-length v))))))

(define (decompress filename)
  (with-input-from-file filename
    (lambda ()
      (let* ((boot (read-u8))
             (len-u8 (make-u8vector boot)))
        (read-subu8vector len-u8 0 boot)
        (let* ((len (u8vector->object len-u8))
               (v (make-u8vector len)))
          (read-subu8vector v 0 len)
          (u8vector->object v))))))
