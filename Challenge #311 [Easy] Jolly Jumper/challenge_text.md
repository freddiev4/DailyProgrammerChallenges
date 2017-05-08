# Description

A sequence of n > 0 integers is called a jolly jumper if the absolute values of the differences between successive elements take on all possible values through n - 1 (which may include negative numbers). For instance,

    1 4 2 3

is a jolly jumper, because the absolute differences are 3, 2, and 1, respectively. The definition implies that any sequence of a single integer is a jolly jumper. Write a program to determine whether each of a number of sequences is a jolly jumper.

# Input Description

You'll be given a row of numbers. The first number tells you the number of integers to calculate over, *N*, followed by *N* integers to calculate the differences. Example:

    4 1 4 2 3
    8 1 6 -1 8 9 5 2 7

# Output Description

Your program should emit some indication if the sequence is a jolly jumper or not. Example:

    4 1 4 2 3 JOLLY
    8 1 6 -1 8 9 5 2 7 NOT JOLLY

# Challenge Input

	4 1 4 2 3
	5 1 4 2 -1 6
	4 19 22 24 21
	4 19 22 24 25
	4 2 -1 0 2

# Challenge Output

	4 1 4 2 3 JOLLY
	5 1 4 2 -1 6 NOT JOLLY
	4 19 22 24 21 NOT JOLLY
	4 19 22 24 25 JOLLY
	4 2 -1 0 2 JOLLY
