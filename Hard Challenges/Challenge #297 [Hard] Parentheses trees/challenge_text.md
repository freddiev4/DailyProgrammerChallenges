This challenge is about parsing a string into a tree, somewhat for its own sake, but queries on the tree are posted as bonuses, and it may be possible to do the bonuses without tree parsing.

#non-nested

       input: '1(234)56(789)'
    ┌─┬───┬──┬───┬┐
    │1│234│56│789││
    └─┴───┴──┴───┴┘

when parentheses are not nested, the parsing produces an array of arrays where even indexes (0-based) contain items outside the parentheses, and odd indexes are items that are inside.

The above boxes illustrate an array of 5 elements, where index 1 and 3 contain what was in parentheses.  A blank/null trailing cell is included to keep the even/odd symmetry.

#nested parentheses

      input: '1(2((3)(4)))56(789)'
    ┌─┬─────────────┬──┬─────┬┐
    │1│┌─┬────────┬┐│56│┌───┐││
    │ ││2│┌┬─┬┬─┬┐│││  ││789│││
    │ ││ │││3││4│││││  │└───┘││
    │ ││ │└┴─┴┴─┴┘│││  │     ││
    │ │└─┴────────┴┘│  │     ││
    └─┴─────────────┴──┴─────┴┘

Because cell 1 now contains nested parentheses, it is an array instead of a simple cell (string).  It has 3 cells: 2 is pre-parens, null is post-parens at this level.  An extra depth is added for the middle cell since it has nested parens too.  At this deepest level, there are no elements outside parens, and so those cells are all blank.  3 and 4 are each within their own parentheses, and so have odd indexed cell positions.  
white space leading or trailing within a cell is stripped.

# challenge 1

 **input:** '(1(2((3)(4)))56(789))'  
**output:** (as internal arrays to your language)

    ┌┬───────────────────────────┬┐
    ││┌─┬─────────────┬──┬─────┬┐││
    │││1│┌─┬────────┬┐│56│┌───┐││││
    │││ ││2│┌┬─┬┬─┬┐│││  ││789│││││
    │││ ││ │││3││4│││││  │└───┘││││
    │││ ││ │└┴─┴┴─┴┘│││  │     ││││
    │││ │└─┴────────┴┘│  │     ││││
    ││└─┴─────────────┴──┴─────┴┘││
    └┴───────────────────────────┴┘

# challenges 2

**input:** 'sum (sum (1 2 3) sum (3 4 5))'

    ┌────┬─────────────────────────┬┐
    │sum │┌────┬─────┬─────┬─────┬┐││
    │    ││sum │1 2 3│ sum │3 4 5││││
    │    │└────┴─────┴─────┴─────┴┘││
    └────┴─────────────────────────┴┘
**input:** 'sum ((1 2 3) (3 4 5) join)'

    ┌────┬──────────────────────┬┐
    │sum │┌┬─────┬─┬─────┬─────┐││
    │    │││1 2 3│ │3 4 5│ join│││
    │    │└┴─────┴─┴─────┴─────┘││
    └────┴──────────────────────┴┘
       
# bonus 1

reverse the operation, taking your output to produce the input.

# bonus 2: crazy lisp

crazy lisp is a language I invented this morning for querying these tree structures.  Example syntaxes are in challenge 2.  The formal grammar is:

items inside parentheses are function parameters.  
items to left and in-between parentheses are function names (that take as parameters their immediate right parentheses).  
right most cell (outside parentheses) are macros that take the "code tree" on its level as input.

evaluate expressions in challenge 2. (the join function, simply joins arrays into 1).  All of the expressions produce 18.  As does the following:

 **input:**   'sum ((sum(1 2 3))(3 4 5) join)'

    ┌────┬──────────────────────────────┬┐
    │sum │┌┬────────────┬┬───────┬─────┐││
    │    │││┌───┬─────┬┐││┌─────┐│ join│││
    │    ││││sum│1 2 3│││││3 4 5││     │││
    │    │││└───┴─────┴┘││└─────┘│     │││
    │    │└┴────────────┴┴───────┴─────┘││
    └────┴──────────────────────────────┴┘
 
parsing this last one would first apply the sum(1 2 3) function before joining the result with (3 4 5).

   
    
 