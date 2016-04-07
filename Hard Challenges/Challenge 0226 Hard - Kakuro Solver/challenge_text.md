# Description

Kakuro is a popular Japanese logic puzzle sometimes called a mathematical crossword. The objective of the puzzle is to insert a digit from 1 to 9 inclusive into each white cell such that the sum of the numbers in each entry matches the clue associated with it and that no digit is duplicated in any contiguous row or column. It is that lack of duplication that makes creating Kakuro puzzles with unique solutions possible. Numbers in cells elsewhere in the grid may be reused.

More background on Kakuro can be found on [Wikipedia](https://en.wikipedia.org/wiki/Kakuro). There's an [online version](http://www.kakuroconquest.com/) you can play as well. 

# Input Description

You'll be given a pair of integers showing you the number of columns and rows (respectively) for the game puzzle. Then you'll be given *col* + *row* lines with the sum and the cell identifiers as *col id* and *row number*. Example:

    1 2
    3 A1 A2

This example means that the sum of two values in A1 and A2 should equal 3. 

# Challenge Output

Your program should emit the puzzle as a 2D grid of numbers, with columns as letters (e.g. A, B, C) and rows as numbers (1, 2, 3). Example:

      A
    1 1
    2 2

# Challenge Input

This puzzle is a 2x3 matrix. Note that it has non-unique solutions.

    2 3 
    13 A1 A2 A3
    8 B1 B2 B3
    6 A1 B1
    6 A2 B2
    9 A3 B3

# Challenge Output

One possible solution for the above puzzle is

      A  B 
    1 5  1
    2 2  4
    3 6  3
