Monday's challenge is a prerequisite.  Sorry.

# J theory

Adverbs and Conjunctions in J (modifiers as a shorter group name) are primarily used to implement higher order functions.

An adverb takes 1 parameter (that may be a function ) and may return a function (for today, assume it can only return a function).  Adverb  parameter name is u.

A conjunction takes 2 parameters and may (does today) return a function.  Conjunction  parameter names are u and v.

From Monday, the function parameters in our array language all have 2 parameters x and y.

In J, adverbs appear to the right of their u function parameter, and x ( if not missing) and y appear to the left and right of the group (called verb phase).  More adverbs and conjunctions can appear to the right of the verb phrase, and the evaluation order inside a verb phrase is left to right.  ie.  function returned by first adverb, is an input the to next adverb on its right.

In J, Conjunctions have their u parameter (can be a verb phrase without parentheses) on the left, and their v parameter on the right.  If v is not parenthesized, then only one token (function or array or variable) is the v conjunction parameter.  More adverbs and conjunctions can be added to the right of the verb phrase.

You can use your language's natural parsing rules instead.

# 1.  an insert adverb

This is actually easy and already implemented as `reduce` and `foldright` in most languages.  It is `/` in J

        +/ 1 2 3 4   NB. +/ is the whole verb phrase
    10
       1 + 2 + 3 + 4
    10

an adverb in general takes one parameter (that may be a verb/function), and may return a function.  The insert adverb does take a function as parameter (add in above example), and the result is a monad function (a function that ignores its 2nd x parameter).  It may be easier, to model the insert function as the complete chain:

Insert(u, y):

where u is the function parameter, and y is an array where u is applied between items of y.  But an ideal model is:

     Insert(u):  NB. find a function to return without needing to look at y parameters.  

The result of Insert ignores any x parameter.

The definition of item in J:  
A list (1d array) is a list of "scalar items"  
A table (2d array) is a list of "list items"  
A brick (3d array) is a list of "table items"  

so, 

       iota 2 3
    0 1 2
    3 4 5
      +/ iota 2 3                  NB. or:   (add insert) (iota 2 3)
    3 5 7
      0 1 2 + 3 4 5
    3 5 7
        +/ iota 10 5              NB. or:   insert(add) iota ([2, 3])
225 235 245 255 265

          iota 3 2 4                NB. result has 3 items
    0 1 2 3    
    4 5 6 7    

    8 9 10 11  
    12 13 14 15

    16 17 18 19
    20 21 22 23

       +/ iota 3 2 4              NB. remember insert applies between items.
    24 27 30 33
    36 39 42 45


       +/ +/ iota 3 2 4
    60 66 72 78

Implement an insert adverb in your favorite language.

J definition of insert (variation from builtin to ignore x parameter) :  `insert =: 1 : 'u/@:]'`

# 2. a swap adverb

swap is an adverb that reverses the x and y parameters to its function parameter such that y is passed x, and x is passed y.  If there is no x, parameter, then the function is passed (y,y)

a perhaps easy model is: the signature  `swap(u, x, y=x):`  but a better signature would be `swap(u):` and return a composition of u and the swapping mechanics needed.

swap is ~ in J.  iota is from Monday's challenge.

       2 3 iota~ 1  NB. 1 + iota 2 3
    1 2 3
    4 5 6
       iota~ 4      NB. 4 + iota 4
    4 5 6 7

       iota~/ 2 2 4   NB. insert swap iota between items of 2 2 4
    4 6
       iota~/ 2 4
    4 5

       iota insert~   2 2 3     NB. swap (insert iota) between items of 3 2 3.  
    2 3 4 5    
    6 7 8 9    
    10 11 12 13

    14 15 16 17
    18 19 20 21
    22 23 24 25
    
last result is same as if swap is ommitted, because insert has been defined to ignore x parameter, and swap duplicates y as x.  swap applies to the function after insert (result of insert)

       swap(add) ([1, 2, 3])   NB. y is copied into x parameter
    2 4 6


    implement a swap adverb.

# 3.  Compose conjunction.

Composition of functions u and v should be familiar.  An easy model is:

`compose(u,v,y,x):`  creating equivalent result to `u(v(y, x))`

note that the u function ignores its x parameter (x default value will be passed to it)

An ideal signature for compose, is compose(u,v):  (In J, compose is `@:`)

       2 3 iota@:+ 1 2         NB.  compose(iota, add)([2,3],[1,2])
    0 1 2 3 4     
    5 6 7 8 9     
    10 11 12 13 14

# 4.  append itemize, and joincells functions

In Monday's bonus and iota function, the request was to make a recursive function that would then `joincells` of its recursive calls to make one large array.

if you `append` 2 lists together, you get 1 larger list.  A scalar appended with a list or scalar is also a list.

The `itemize` function takes an array and increases its dimensions by 1, creating a single item in a higher dimension.  itemize on a scalar creates a list of 1 item.  itemize on a list creates a table with 1 record (that contains the original list).  itemize on a table creates a 3d array with 1 item that is a table.

If you `append` 2 items of the same dimensions, the result is 2 items.  1 record appended to 3 records is 4 items of records (a table with 4 items).  (the difference between a record and a list is that a record is a table with 1 row (item).  A list is a collection of scalar (items))

If you `append` a smaller-dimensioned item (list) with a larger-dimensioned item (record), the smaller-dimensioned item is `itemize`d until it is the same dimension as the larger item.  `append` of an item with empty item (empty can still be high dimensioned) results in 1 item of the largest-dimensioned-parameter.

       3 4 5 , iota 0 0 0  NB. append list with empty 3d array.
    3 4 5

above result looks like a list, but is a brick (3d) with 1 table item, that has 1 record item.

the `joincells` function is something that was used by iota (whether you realized it or not) on the bonus applications of Monday's challenge.

`cells` are an internal list of arrays.  The algorithm is:  
Find the largest dimensioned cell (array in the list).
With iota, create an empty cell that is 1 dimension higher than that maximum dimension.  (for example: if all the cells are lists, then `iota 0 0` creates an empty 0 record table.  
With that new cell added on the right of the list of cells, insert(append) all the cells.  (foldright append to all of the cells).  As an alternative to the iota call, you may also repeatedly itemize each of the cell arrays until they are one dimension higher than the max-dimension-cell.

      itemize(y , x=ignored):   Rank _ _         NB. adds 1 dimension to y  
      append(y , x):   Rank _ _                      NB. joins x (first) to y (last).  see itemize preprocessing rules above.  
      joincells(listofarrays):  internal function  NB. see above algorithm.  Though an internal function, can also be implemented with boxes.

       (itemize 4) append  1 2 3      NB. scalar 4 made into list append to other list = list
    4 1 2 3

       (itemize 4) append (itemize 1 2 3)  NB. list append to table = table.  Fills are applied to shorter list.
    4 0 0
    1 2 3

       1 2 3 joincells  7         NB. though internal, if there are only 2 arrays to join, it works as a f(y,x) function.
    1 2 3
    7 0 0

        1 2 3 joincells  iota 2 4
    1 2 3 0
    0 0 0 0

    0 1 2 3
    4 5 6 7

        1 2 3 4 joincells  iota 2 3   NB. fills are applied on the append stage.
    1 2 3 4
    0 0 0 0

    0 1 2 0
    3 4 5 0


try to implement joincells as `compose(insert(append), pretransform_arrays_function):`

# 5.  Rank conjunction

This is the main challenge of the day...

The Rank conjunction can be used to split up a function call into many function calls that each results in a cell, and then the joincells function above turns those individual function calls into a single array result.

While each function has a built in default rank, the rank conjunction **can lower** the "operating" rank of a function.  This is easier to understand as splitting the inputs to the function.  `"` is the rank in J.  the v (right) argument to rank can be:

1 number:  splits y argument into cells of that dimension.  x rank is infinity (or is ignored).  
2 numbers: splits y into cells of first number dimension, and splits x into 2nd number dimension.  

`Rank(u, _ _) ` specifies rank infinity for x and y which is the same as no rank modifier at all since the full arrays of x and y will be passed to u.

you may use 32000 as a substitute for infinity, or the default value for both "v parameters" to Rank.

`Rank(iota, 0 0)`  will split the y and x parameters into scalars and call iota for each split

   pR 1 3 iota("0 0) 3 4     NB. "(0 0) is Rank(u, 0 0) (an adverb)  iota("0 0) is Rank(iota, 0 0).  returns a function. 
    1 2 3 0
    3 4 5 6

equivalent to:

       (1 iota 3) joincells (3 iota 4)
    1 2 3 0
    3 4 5 6

   1 2 + 3 4 5  NB. an error in J, because only length 1 items are expanded to match the other argument lengths.

       1 2 +("0 1) 3 4 5  NB. using rank to pass compatible lengths. (the order of rank v parameters in J is reversed because x is on the left, and y on the right.
    4 5 6
    5 6 7

       1 2 +("1 0) 3 4 5
    4 5
    5 6
    6 7

Note in the last 2 examples,  2 items were matched with 1 item (first), and 1 item was matched with 3 items (2nd).  When matching different length items, if the lower array count is 1 item, then it is copied the number of times needed to be the same length as the other array.

       (add insert) iota 10 5  NB. seen before puts insert between rows.  end result is sum of columns.
    225 235 245 255 265

        (add insert)"1 iota 10 5  NB. cells are the rows.  result of each cell is sum of rows (a scalar).  joincells makes a list.
    10 35 60 85 110 135 160 185 210 235

the last call is equivalent to `Compose(Rank(insert(add)), 1), iota)([10,5])`

#6. simple functions

`Left(y,x):  return y`  `]` in J  
`Right(y,x):  return swap(Left)(y, x=missing)`  NB. returns y if there is no x.  `[` in J  
`double(y,x=ignored): return swap(add) y`  NB. ignores x.  

       double  5
    10
      1 2 3 double~  5  NB. swapped so passes x as y.
    2 4 6
      double~  5 2     NB.  if there was an x, then double that.  Since there isn't, double y.
    10 4
      double~/  5 2    NB. insert(swap(double))([5,2])
    10
      5 double~  2
    10
