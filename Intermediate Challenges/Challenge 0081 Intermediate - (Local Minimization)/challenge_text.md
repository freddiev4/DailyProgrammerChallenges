For a lot of the questions today we are going to be doing some simple numerical calculus.  Don't worry, its not too terrifying.

Write a function fmin that can take in a real-valued function f(x) where x is a vector in 3D space (bonus points for N-D).

xout=fmin(f,x0) should return a local minimum of f close to x0.

Example in Python

	%f is a function with 1 3-vector
    def f(x):
	    return x[0]**2+x[1]**2+x[2]**2

	%find the local minimum of f, starting at (1,1,1)
    print fmin(f,[1.0,1.0,1.0])
	
should print out

	[0.0,0.0,0.0]  %because (0,0,0) is the global minimum of f(x,y,z)=x^2+y^2+z^2

EDIT:  To make this a little easier, I decided that it is acceptable for your implementation to require that fmin have additional arguments for the derivatives of f