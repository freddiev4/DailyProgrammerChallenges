Write a program that implements the following encryption scheme:

It reads in some string of data of length N.  Then, lay out that string in the smallest possible perfect power of two square that can fit the data.

For example, "My country, tis of thee" is 23 characters long.  Therefore, it fits into a 5x5 square 25 characters long like this:

    My co
    untry
    , tis
     of t
    hee

However, when we constrain it to be a power of two, instead we end up with an 8x8 square, and laying it out looks like

    My count
    ry, tis 
    of thee
    
    
    
    
    
    
However, the encrytion part happens when, instead of laying out letters of the square from left to right as above, you lay out 
the square using a [Z-order code](http://en.wikipedia.org/wiki/Z-order_curve) instead, like so.

    Myouofhe
     cnt te 
    ryti
    , s 


Write a program that reads a string from standard input and can encrypt to a z-order square, and vice-versa