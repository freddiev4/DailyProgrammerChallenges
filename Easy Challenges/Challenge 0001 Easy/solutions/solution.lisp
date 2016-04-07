;;;; Solution to /r/dailyprogrammer challenge #0001 by Kabir Goel (/u/kbrgl)

(defun prompt-read (q)
  (format *query-io* q)
  (force-output *query-io*)
  (read-line *query-io*))


(defvar name (prompt-read "name: "))
(defvar age (prompt-read "age: "))
(defvar username (prompt-read "username: "))
(defvar result (format nil "your name is ~a, you're ~a years old and your username is ~a" name age username))

(format t result)
(with-open-file (out "output.txt"
                     :direction :output
                     :if-exists :supersede)
	(format out result))
