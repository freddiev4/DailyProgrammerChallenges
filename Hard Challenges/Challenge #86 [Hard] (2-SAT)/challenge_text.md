Boolean Satisfiability problems are problems where we wish to find solutions to boolean equations such as 

    (x_1 or not x_3) and (x_2 or x_3) and (x_1 or not x_2) = true

These problems are notoriously difficult, and k-SAT where k (the number of variables in an or expression) is 3 or higher is known to be 
NP-complete.

However, [2-SAT](http://en.wikipedia.org/wiki/2-satisfiability) instances (like the problem above) are NOT NP-complete (if P!=NP), and even have linear time solutions.

You can encode an instance of 2-SAT as a list of pairs of integers by letting the integer represent which variable is in the expression, with a negative integer representing the negation of that variable.  For example, the problem above could be represented in list of pair of ints form as 

    [(1,-3),(2,3),(1,-2)]

Write a function that can take in an instance of 2-SAT encoded as a list of pairs of integers and return a boolean for whether or not there are any true solutions to the formula.  