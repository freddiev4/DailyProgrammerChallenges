# Array languages 

Array languages include J, APL and OpenCL.  The only criteria is that function in and out parameters are arrays.  

In our array language, every function has 2 parameters (each arrays) called y and x.  (Optional rule)

In every function, the x parameter is optional, and your function should create a default value to fill in if missing.  (Somewhat Optional rule)



#rank and items
more theory wil come in part 2 but,   
Math functions are rank 0, which means they operate on scalars at a time inside the array.

scalar -- for our purposes is the same as a singleton array.  A 0D array.  
list -- A 1 dimensional array.  Each item is a scalar.  
table-- A 2 dimensional array. Each item is a list.  
brick-- A 3 dimensional array.  Each item is a table.  

#1. iota function
In J, the iota function takes just 1 rank 1 parameter (y is processed "list-at-a-time").   
The iota function returns an array whose dimensions is equal to the scalar items of y.
The total number of scalars in the returned array is the product of y.  
The ravelled (if the returned items were flattened to a 1 dimensional list) items of the return value is the range from (0) to (the product of y - 1)

examples:

        iota 4 NB. 1d
    0 1 2 3

      iota 2 3  NB. 2d
    0 1 2
    3 4 5

      iota 2 2 3  NB. 3d
    0 1 2  
    3 4 5  

    6 7 8  
    9 10 11

J's input and display for arrays does not need brackets around them.  3d arrays are displayed with a blank line between table items.

**the 2nd x parameter to iota**  
Though not part of J or APL, we can add a 2nd optional parameter x to iota.  This parameter will add an offset to iota results.  Its default value is 0.  You may ignore testing it until you make the add function below, but basics:

      1 iota  4
    1 2 3 4
     10 iota  2 3
    10 11 12
    13 14 15

a python definition for iota would be  
iota(y,x=0): 

implement the details of iota in any language.

# add function
addition of arrays is `rank 0 0`.  It operates at a scalar level (for both x and y).  Its default x value is 0.

       5 add 1 2 3 
    6 7 8
      10 10 10 add 1 2 3 
    11 12 13
       1 2 3 add 1 2 3 
    2 4 6

       10 add iota 2 3
    10 11 12
    13 14 15
       0 10 add iota 2 3
    0 1 2   
    13 14 15

The last case may seem a bit tricky.
J/Array functions are implemented such that 

if both of its parameters are larger shape than its rank (ie. lists instead of scalars for add) then the function is called recursively for each item of its parameters.

if one of its parameters is the correct rank (scalar for add), but its other parameter is too large (list or higher), then the correct rank item is copied the number of items of the too large parameter.  and then called recursively.  So, `10 + 1 2 3` is the same as `10 10 10 + 1 2 3` (ie, the 10 is copied 3 times, then the recursive call does `10 + 1` `10+2` `10 +3` and the results accumulated into a list of 3 items.

So in ` 0 10 add iota 2 3`  the result of iota has 2 items, and one of the recursive calls in add will be:  `0 + 0 1 2` `10 + 3 4 5` and the expansion rule above applies.

implement add function. (in python, signature would look like)  
add(y,x=0):  

#bonus

       iota (1 + iota 2 2)
    0 1 0 0  
    0 0 0 0  
    0 0 0 0  

    0 1 2 3  
    4 5 6 7  
    8 9 10 11

(**edit:** note iota is `rank _ 1` (x is scalar rank, y is list rank).   Above is same result as  `iota 1 iota 2 2`)
rank _ means rank infinity (take whole array/argument).  iota internally uses the add function which has `rank 0 0`  which groups the number of recursive calls down to `rank 0 0` after iota has generated its high dimension array.

**detail for what is going on here**  

      1 + iota 2 2
    1 2
    3 4

which will call iota twice (it is rank 1)

       iota 1 2  NB. product is 2.  J "official" result is a table with 1 list of 2 items.
    0 1

       iota 3 4   NB. table with 3 lists of 4 items.
    0 1 2 3  
    4 5 6 7  
    8 9 10 11

When the results of a recursive function application do not have the same shape, then 0s (default) are filled in before returning (accumulating) the array.  So when the above 2 results are combined, the 0 1 (first) result is padded with 0s.

       2 3  + (iota (1 + iota 2 2))  NB. parens clarify J's right to left parsing order.  NB. is a comment.
    2 3 2 2    
    2 2 2 2    
    2 2 2 2    

    3 4 5 6    
    7 8 9 10   
    11 12 13 14

       (iota 2 3 4 )  + (iota (1 + iota 2 2))  NB. These parens are not needed in J.  But you may not know that.
    0 2 2 3    
    4 5 6 7    
    8 9 10 11  

    12 14 16 18
    20 22 24 26
    28 30 32 34