
# Description

This challenge is inspired by the well-known horse racing puzzle. In that puzzle, you need to find the fastest 3 horses out of a group of 25. You do not have a stopwatch and you can only race 5 of them at the same time.
In this challenge, you need to sort a list of numeric values. However, you can only directly compare values during a "race" in which you take a set of 5 values and sort them. Based on the outcomes of these races, you need to be able to sort the entire list.

# Formal Inputs & Outputs

## Input description

The input you get is a list of numeric values. Example:

	[107,47,102,64,50,100,28,91,27,5,22,114,23,42,13,3,93,8,92,79,53,83,63,7,15,66,105,57,14,65,58,113,112,1,62,103,120,72,111,51,9,36,119,99,30,20,25,84,16,116,98,18,37,108,10,80,101,35,75,39,109,17,38,117,60,46,85,31,41,12,29,26,74,77,21,4,70,61,88,44,49,94,122,2,97,73,69,71,86,45,96,104,89,68,40,6,87,115,54,123,125,90,32,118,52,11,33,106,95,76,19,82,56,121,55,34,24,43,124,81,48,110,78,67,59]

## Output description

You output the following:

- The sorted version of the input
- The number of races used to get there

It is also interesting to log the results of the races as they happen so you can see which elements the algorithm selects for the races.

# Notes/Hints

If a race shows that A is smaller than B and another race shows that B is smaller than C, you also know that A is smaller than C.

# Bonus

Try to minimize the amount of races you need to sort the list.

# Credit

This challenge was submitted by user /u/lurker0032. If you have any challenge ideas, please do share them in /r/dailyprogrammer_ideas - there's a good chance we'll use them. 