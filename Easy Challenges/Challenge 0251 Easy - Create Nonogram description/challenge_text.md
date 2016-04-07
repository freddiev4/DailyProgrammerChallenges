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

Today you will recieve an image in ASCII with ' ' being empty and '*' being full. The number of rows and columns will always be a multiple of 5.


        *
       **
      * *
     *  *
    *****

##Output description

Give the columns and rows for the input 

    Columns:
        1 1 
    1 2 1 1 5

    Rows:
      1
      2
    1 1
    1 1
      5

##Ins

*1*

        *
       **
      * *
     *  *
    *****

*2*

        ** *  
       *****  
      ******  
     ******** 
    **********
     *      * 
     * ** * * 
     * ** * * 
     * **   * 
     ******** 


*3*

         ***       
      **** **      
     ****** ****** 
     * **** **    *
     ****** ***  **
     ****** *******
    ****** ********
     *   **********
     *   **********
     *   **********
     * * ****  ****
     *** ****  ****
         ****  ****
         ****  ****
         ****  ****

#Bonus

Place the columns and rows in a grid like you would give to a puzzler


            1 1 
        1 2 1 1 5
      1
      2
    1 1
    1 1
      5


#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas