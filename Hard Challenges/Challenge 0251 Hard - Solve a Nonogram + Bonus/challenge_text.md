#Description

This week we are doing a challenge involving [Nonograms](https://en.wikipedia.org/wiki/Nonogram)

It is going to be a three parter:

 * [Create Nonogram description ([Easy])](https://www.reddit.com/r/dailyprogrammer/comments/42lhem/20160125_challenge_251_easy_create_nonogram/)
 * [Solve Nonogram ([Intermediate/Hard])](https://www.reddit.com/r/dailyprogrammer/comments/42x90t/20160127_challenge_251_hard_solve_a_nonogram_bonus/)
 * Working with multiple colors/characters ([Hard])
 * [Bonus: Make it an interactive game ([Intermediate])](https://www.reddit.com/r/dailyprogrammer/comments/42x90t/20160127_challenge_251_hard_solve_a_nonogram_bonus/)

##What is a Nonogram?

> Nonograms, also known as Hanjie, Picross or Griddlers, are picture logic puzzles in which cells in a grid must be colored or left blank according to numbers at the side of the grid to reveal a hidden picture. In this puzzle type, the numbers are a form of discrete tomography that measures how many unbroken lines of filled-in squares there are in any given row or column.

In a Nonogram you are given the number of elements in the rows and columns. A row/column where containing no element has a '0' all other rows/columns will have at least one number.

Each number in a row/column represent sets of elements next to each other. 

If a row/column have multiple sets, the declaration of that row/column will have multiple numbers. These sets will always be at least 1 cell apart.

*An example*


 | | |2|1|1| | 
---|---|----|----|----|----|----
 | |1|1|1|2|1
 |2| |*|*| | 
1|2| |*| |*|*
 |0| | | | | 
2|1|*|*| |*| 
 |2| | |*|*| 


#Formal Inputs & Outputs

##Input description

Today you will recieve the columns and rows of a Nonogram seperated by a `-`


    0 0 1 1 0
    1 2 1 1 5
    -
    0 1
    0 2
    1 1
    1 1
    0 5

##Output description

The Nonogram solved like this:

        *
       **
      * *
     *  *
    *****

##Ins

*1*

    0 0 1 1 0
    1 2 1 1 5
    -
    0 1
    0 2
    1 1
    1 1
    0 5

*2*

     0  0  0  0  0  0  4  0  0  0
     0  0  3  4  5  5  2  5  0  0
     1  7  1  4  4  1  1  1  7  1
    -
     0  0  2  1
     0  0  0  5
     0  0  0  6
     0  0  0  8
     0  0  0 10
     0  0  1  1
     1  2  1  1
     1  2  1  1
     0  1  2  1
     0  0  0  8

*3*

     0  0  2  0  0  0  1  0  0  0  0  0  0  0  0
     0  0  3  6  0  0  4  2  0  0  1  1  1  1  0
     1 10  1  2  6 15  8  9 14  8  6 10 10 11 12
    -
     0  0  0  3
     0  0  4  2
     0  0  6  6
     1  4  2  1
     0  6  3  2
     0  0  6  7
     0  0  6  8
     0  0  1 10
     0  0  1 10
     0  0  1 10
     1  1  4  4
     0  3  4  4
     0  0  4  4
     0  0  4  4
     0  0  4  4
    
##Notes/hints

This is a hard challenge. In the [wikipage](https://en.wikipedia.org/wiki/Nonogram) you'll find ways to find what cell you can fill and how you can exclude cells.


#Bonus challenge

Use the inputs and output from the first challenge [Create Nonogram description ([Easy])](https://www.reddit.com/r/dailyprogrammer/comments/42lhem/20160125_challenge_251_easy_create_nonogram/) to create a game.

Create the nonogram description fron a library (the inputs) and let the user choose a difficulty:

 * Easy, the user can keep on playing, even if he makes wrong calls
 * Normal, give the user some 'lives'. Everytime the user gives an incorrect guess, she/he loses a life. I would say the user would have about number of colums added up to the number of rows lives.
 * Hard, the user can't make any mistake

Now make it something beautifull, or at least playable

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas