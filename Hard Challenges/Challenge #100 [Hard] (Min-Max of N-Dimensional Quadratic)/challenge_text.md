A quadratic form in mathematics is any polynomial in N-Dimensions which has no exponent greater than 2.  For example, the equations

    f(x)=x^2+1
    f(x,y,z)=xy+10x-2z^2
    f(x,y,z,w)=x^2+y^2+z^2-w^2
   
Are all quadratic forms in 1,3,and 4, dimensions, respectively.  It is a part of linear algebra, that ANY quadratic in dimension N can be fully specified by an (N+1)x(N+1) symmetric matrix A of coefficients.  The quadratic f(x) is then defined as  

    f(v) = v' A v
   
(where x' denotes x transposed), and v is a homogenous vector of length N+1 with a 1 in the last position.

This would imply that any constant term is always in the lower left, the coefficients of the squared terms are along the diagonal, and the coefficients of the products are split half and half on the off-diagonal parts.

For example, to represent the quadratic 

    f(y)=y^2+1,
   
We can use a 2-dimensional matrix

    A= [1 0;
        0 1]
    f(y)=[y 1]*[1 0;0 1][y;1]
    Doing out the matrix multiplication gives us the original f(y).
    
Another example, to represent the quadratic

    f(x,y,z)=xy+10x-2z^2+9

could be the 4x4 matrix A

    A=[0  .5  0 5;
       .5  0  0 0;
       0   0 -2 0;
       5   0  0 9;]
       


Every quadratic form has at least one point where the quadratic is an extrema: that is, where it is a global minimum or maximum or 'saddle point' in N dimensions.

Write a function that will take in a quadratic form defined as a (N+1)x(N+1) symmetric matrix, and output one of the extrema points of that quadratic. either the global min,max,or a saddle point.