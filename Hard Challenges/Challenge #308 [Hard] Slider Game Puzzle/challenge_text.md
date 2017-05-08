**DISCIRPTION**

Slider puzzles are nearly impossible for me to solve by hand, so lets make a program to do it for us. Slider puzzles are N by N boards filled with the numbers N through N-1 and you solve them by getting all the numbers in order. The numbers can swap places with the empty spot (I use 0 to represent such place) up, down, left, and right, with no loop arounds. For example, the array input {1,2,3,4,5,6,7,0,8} would make the following board:

1 2 3

4 5 6

7 0 8

This board would be solved by moving the 8 to the left one space. The challenge is to make the computer solve these boards for you in a** reasonable amount of time.**  if they are solveable. For complicated boards a brute force method might take too long, and you will have to come up with an A* algorithm.

**Formal Inputs & Outputs**

All of these are for a 3 by 3 board:

{0,1,2,4,8,3,7,6,5} takes 8 moves to solve

{1,8,2,0,4,3,7,6,5} takes 9 moves to solve

{7,6,4,0,8,1,2,3,5} take 25 moves to solve

{1,2,3,4,5,6,8,7,0} is not solveable


**Bonus**

Make your code be able to solve any N by N board; N <= 100

**Tips**

Make a function that will start with a perfect board, and go backwords randomly to make a random board for you. This is pretty much need for the bonus and it also always produces a solveable board.

EDIT: As I was requested to provide an input for the 100 by 100:

http://pastebin.com/qNJbuF5M this is the result of taking a perfect 100 by 100 board and jumbling it up over 2,000,000 times; I know that this board is solveable but thats all I know about this board.


**Have a good challenge idea?**

Consider submitting it to /r/dailyprogrammer_ideas