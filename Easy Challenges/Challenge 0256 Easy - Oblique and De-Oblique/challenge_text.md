The oblique function slices a matrix (2d array) into diagonals.

The de-oblique function takes diagonals of a matrix, and reassembles the original rectangular one.


#input for oblique
     0  1  2  3  4  5
     6  7  8  9 10 11
    12 13 14 15 16 17
    18 19 20 21 22 23
    24 25 26 27 28 29
    30 31 32 33 34 35

(and the output to de-oblique)


#output for oblique

    0               
    1 6             
    2 7 12          
    3 8 13 18       
    4 9 14 19 24    
    5 10 15 20 25 30
    11 16 21 26 31  
    17 22 27 32     
    23 28 33        
    29 34           
    35              

(and the input to de-oblique)

# bonus deambiguated de-oblique matrices

There's only one de-oblique solution for a square matrix, but when the result is not square, another input is needed to indicate whether the output should be **tall** or **wide** or provide specific dimentsions of output:

# rectangular oblique data input
    0      
    1 6    
    2 7 12 
    3 8 13 
    4 9 14 
    5 10 15
    11 16  
    17   

# output for (wide) `deoblique (3 6,  INPUT)` or `deoblique (WIDE,  INPUT)`
     
     0  1  2  3  4  5
     6  7  8  9 10 11
    12 13 14 15 16 17

# output for (tall) `deoblique (6 3,  INPUT)` or `deoblique (TALL,  INPUT)`

     0  1  2
     6  7  3
    12  8  4
    13  9  5
    14 10 11
    15 16 17


# Note

The main use of these functions in computer science is to operate on the diagonals of a matrix, and then revert it back to a rectangular form.  Usually the rectangular dimensions are known. 