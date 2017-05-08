# Description

The puzzle is a 4x4 grid of numbers between 1 and 5. 4-connected tiles
of same number form a group. For example, the following grid has five
groups:

    1 2 2 1
    1 3 3 1
    1 3 3 2
    2 2 2 2

A "move" increments or decrements a group by 1, possibly merging it
with other groups. Given a particular graph, your program will find
the optimal number of moves needed to merge the entire grid into a
single group. The above example takes just two moves:

1. Decrement the center group, merging with both "2" groups.
2. Decrement this new larger group, merging it with both "1" groups.

You can play with this interactively [in an online
prototype](http://entibo.fr/lvlr/). This challenge was inspired by
[this post in
/r/algorithms](https://www.reddit.com/r/algorithms/comments/5jtgvn/minimum_number_of_moves_to_solve_a_puzzle_game/)

# Input Description

You'll be given a 4x4 grid formatted just like the above example.

## Sample Input 1

    3 3 4 5
    5 4 2 3
    4 2 1 1
    5 5 2 4

## Sample Input 2

    2 5 3 1
    4 3 1 3
    4 5 1 3
    4 1 5 4

# Output Description

Output the optimal number of moves.

## Sample Output 1

    5

## Sample Output 2

    8

# Challenge Inputs

These are a little trickier, with input 3 being the hardest.

## Challenge Input 1

    5 1 4 2
    1 5 1 3
    2 4 3 5
    1 2 3 2

## Challenge Input 2

    3 3 2 5
    3 2 5 3
    2 4 1 5
    4 2 3 1

## Challenge Input 3

    4 4 1 4
    5 1 5 1
    3 5 1 3
    1 4 3 4

# Bonus

Accept an arbitrary NxN grid with values between 1 and 9.

## Bonus Input 1

    1 7 2 7 6
    5 5 5 5 3
    6 5 6 6 2
    1 4 1 2 7
    4 6 1 4 1

## Bonus Input 2

    1 2 5 5 3 4
    1 3 5 1 7 2
    5 5 5 1 2 2
    5 1 7 1 3 7
    6 3 4 1 4 9
    3 6 3 4 4 4

#Finally

Have a good challenge idea like /u/skeeto did?

Consider submitting it to /r/dailyprogrammer_ideas
