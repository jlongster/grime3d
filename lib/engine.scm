
(load (resource object-path "util/srfi-1"))
(load (resource object-path "ffi/arrays"))
(load (resource object-path "ffi/gl/gl"))
(load (resource object-path "ffi/gl/glu"))
(load (resource object-path "obj-loader2"))

(define (render-mesh mesh)
  (glVertexPointer 3 GL_FLOAT 0 (->void-array (obj-vertices mesh)))
  (glEnableClientState GL_VERTEX_ARRAY)
  (glNormalPointer GL_FLOAT 0 (->void-array (obj-normals mesh)))
  (glEnableClientState GL_NORMAL_ARRAY)

  (for-each (lambda (chunk)
              (if (obj-chunk-mat chunk)
                  (let* ((mat (obj-chunk-mat chunk))
                         (d (material-diffuse mat)))
                    (glMaterialfv GL_FRONT_AND_BACK
                                  GL_DIFFUSE
                                  (vector->float-array
                                   (vector
                                    (vec3d-x d) (vec3d-y d) (vec3d-z d)
                                    1.)))))
              (if (not (null? (obj-chunk-indices chunk)))
                  (glDrawElements GL_TRIANGLES
                                  (obj-chunk-num-indices chunk)
                                  GL_UNSIGNED_SHORT
                                  (->void-array (obj-chunk-indices chunk)))))
            (obj-chunks mesh))

  (glDisableClientState GL_NORMAL_ARRAY))

(define (init-opengl width height)
  (glMatrixMode GL_PROJECTION)
  (glLoadIdentity)
  (gluPerspective 60.0
                  (/ (exact->inexact width)
                     (exact->inexact height))
                  1.0
                  10000.0)
  (gluLookAt 0.0 0.0 0.0
             0.0 0.0 1.0
             0.0 1.0 0.0)
  (glMatrixMode GL_MODELVIEW)
  (glLoadIdentity))

(define dragon #f)
(define x 0.)

(define (init-engine)
  (set! dragon (obj-load (resource "resources/medium"))))

(define (run-frame)
  (glClearColor 0.2 0.3 0.4 1.0)
  (glClear GL_COLOR_BUFFER_BIT)
  (glLoadIdentity)

  (set! x (+ x 1.5))

  (glTranslatef 0.0 0.0 30.0)
  (glRotatef x 0.0 0.0 1.0)
  (glRotatef x 1.0 0.0 0.0)
  (glScalef 5. 5. 5.)
  
  (render-mesh dragon))
