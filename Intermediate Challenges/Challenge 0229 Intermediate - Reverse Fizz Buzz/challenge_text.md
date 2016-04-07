# Description

Imagine that I've written a program to solve a modified version of [Fizz Buzz](https://www.reddit.com/r/dailyprogrammer/comments/s6bas/4122012_challenge_39_easy/). My program takes as input some positive integers, like this:

    2 5 4

These input numbers correspond to letters, in this case `a`, `b`, and `c`. Now, my program loops through all integers starting at 1, printing out one line at a time, each line containing one or more letters in alphabetical order. If the current number is divisible by 2, the line will contain `a`. If it's divisible by 5, it'll contain `b`. If it's divisible by 4, it'll contain `c`.

So for instance, when the loop reaches 2, my program will output `a`. When the loop reaches 8 it'll output `ac`. At 30 it'll output `ab`. At 7 no line will be output, not even a blank line. Thus the output will begin like this:

    a
    ac
    b
    a
    ac
    ab
    ac
    a
    b
    ac
    a
    abc
    a

Your challenge is to reverse my program. Write a program that takes the beginning of the output from my program, and determines what input my program was given to produce it. There will be more than one possible answer, so find the solution with the smallest possible numbers.

# Examples

Since this is Intermediate, it's okay to use brute force. As long as you can solve these examples in less than a minute, that's fine. But definitely test your program on the examples! (And don't worry about input or output format too much. Just do whatever's easiest for you to get the solutions.)

## Example Input 1

	a
	b
	a
	a
	b
	a

## Example Output 1

	3 5

## Example Input 2

	b
	be
	ab
	be
	b
	abe
	b

## Example Output 2

	3 1 8 8 2

(Note that in this case, you can infer that there must be at least 5 numbers in the solution, because of the presence of the letter `e`, even though `c` and `d` don't appear. The numbers corresponding to `c` and `d` must be high enough for them not to have appeared yet.)

## Example Input 3

	a
	b
	c
	d
	a
	ab

## Example Output 3

	6 9 10 11

# Optional challenge input

[Get the challenge input here.](https://gist.github.com/cosmologicon/3ff90d20efaa21887d32) You probably won't be able to brute force this one. How fast can you make your program run on this input?

_Thanks to u/Blackshell for suggesting this challenge in r/dailyprogrammer_ideas!_