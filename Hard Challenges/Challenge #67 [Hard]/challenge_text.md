Let the s(N) be a random number generator defined as follows (at this point, this should probably be anointed the Offical Random Number Generator of /r/dailyprogrammer): 

    s(0) = 123456789
    s(N) = (22695477 * s(N-1) + 12345) mod 1073741824
    
Let Q(N) be an NxN two-dimensional matrix of the first N^2 values of this random number generator. That is, Q(5) would be:

    123456789   752880530   826085747  576968456   721429729
    173957326   1031077599  407299684  67656429    96549194
    1048156299  663035648   604085049  1017819398  325233271
    942914780   664359365   770319362  52838563    720059384
    472459921   662187582   163882767  987977812   394465693

Now, the task is to select exactly one element from each row and each column (so that no column or row has more than one element selected) in such a way that the sum of those elements is at a minimum. For instance, for Q(5) above, we would select the following elements (the selected elements marked with asterisks):

    *123456789* 752880530   826085747   576968456   721429729
    173957326   1031077599  407299684   67656429    *96549194*
    1048156299  *663035648* 604085049   1017819398  325233271
    942914780   664359365   770319362   *52838563*  720059384
    472459921   662187582   *163882767* 987977812   394465693

The sum of those elements is 123456789 + 663035648 + 163882767 + 52838563 + 96549194 = 1099762961 which is the smallest we can do with this matrix. Lets call this number M(X), i.e. M(X) is the smallest sum of elements selected from a square matrix X such that each row and each column has exactly one element selected. Then M(Q(5)) = 1099762961

Write a program that finds M(Q(20)).