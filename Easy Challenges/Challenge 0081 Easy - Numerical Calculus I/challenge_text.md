For a lot of the questions today we are going to be doing some simple numerical calculus.  Don't worry, its not too terrifying.

For the easy problem, write a function that can take in a list of y-values that represents a function sampled on some domain.  The domain can be specified as a list of x-values or two values for the x-minimum and x-maximum (the x-coordinates of the endpoints)

This function should output another list of values that represents the derivative of that function over the same domain.

Python example:

	print derivative(xmin=-1,xmax=1,y=[-1.0,-.5,0,.5,1.0])

outputs:
	
	[1.0,1.0,1.0,1.0,1.0]
	

Bonus 1)  Write the same function but for the indefinite integral.

Bonus 2)  This is sort-of an alternate version of the problem... if your language supports first-order functions (that is, functions as data), then write a function that takes a function A as an argument and returns a function A'.
When A' is evaluated at x, it computes an approximation of the derivative at x


EDIT:  devil's assassin gave a decently good explaination of the problem, I'm stealing it here and modifying it a bit.

>for those of you who don't know, the derivative can be defined as the slope of the tangent line at a particular point. I'm assuming he wants a numerical derivative, making this a programming exercise and not a math one. We need to interpolate those values into a derivative. If you have some set of numbers N = {a1,a2,a3,a4,...,an} and some domain set S={b1,b2,...,bn} you can find the slope between two points on this line. Now this is a /bad/ approximation, but it can be made better through limiting the step size.

>Basically, here is the formula:

>f'(x) = lim h->0(f(x+h) - f(x))/h

>the "lim" part, means that this only works when h is REALLY small (pretty much 0, but without being exactly 0 so there is no dividing by 0). So you can modify this:

>f'(x) ~= f(x+h)-f(x)/h


Basically, what you do here is use compute the slope between the current point and the next point for each point.   Use the slope equation from two points.