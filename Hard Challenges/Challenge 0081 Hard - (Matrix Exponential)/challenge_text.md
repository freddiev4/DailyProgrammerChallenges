For a lot of the questions today we are going to be doing some simple numerical calculus.  Don't worry, its not too terrifying.

Write a function that can calculate the [Matrix Exponential](http://en.wikipedia.org/wiki/Matrix_exponential) for a 4x4 (or nxn) matrix.  This function is extremely valuable for lots of different scientific areas.

There are [LOTS of ways to do it!](http://www.cs.cornell.edu/cv/researchpdf/19ways+.pdf)

For testing, here is a matrix.
		
	0.00000  -1.00000   3.00000   0.50000
	1.00000   0.00000   0.45000   0.10000
	-3.00000  -0.45000   0.00000   0.40000
	-0.50000  -0.10000  -0.40000   0.00000
	
And the resulting matrix exponential (as computed by GNU Octave)

	-0.9276446  -0.2437849  -0.2285533   0.1667568
	-0.2809791   0.7661246   0.5148905   0.2626626
	-0.0150871   0.5946104  -0.7613132  -0.2580951
	 0.2455577  -0.0077772  -0.3210194   0.9146516