> **Note:** As has been [pointed out](https://www.reddit.com/r/dailyprogrammer/comments/5cetzo/20161111_challenge_291_hard_spaghetti_wiring/d9wd9h1/), this problem is a duplicate of a previous one, resulting from my being clueless after returning from a hiatus from moderation. Sorry. :(

#Description

Eric the Electrician has a problem. He has been told to connect a set of ports on a flat surface using some cables, but there's a problem: the cables are carrying signals that interfere with each other. They must not cross. Since the locations of the ports are all over the place, this poses a significant challenge.

We can help Eric, but we need to boil the problem down a little. We will represent the usable space as a simple rectangular grid. The objective will be to connect some pairs of ports at some given coordinates using continuous, non-intersecting paths on the grid.

# Formal input

The first line of our input will be a line containing two numbers representing a width-by-height measurement of our available grid. Next, there will be a series of lines with two coordinate pairs (X, Y) per line, representing pairs of ports that need to be connected.

**Sample Input:**

    6 4
    5 0 4 2
    1 1 5 3
    0 3 4 3

This would correspond to a grid that looks like this (assigning some arbitrary letters to the three port pairs):

    .....A
    .B....
    ....A.
    C...CB


# Formal output

Our output will simply be the grid itself, with the proper paths filled in.

**Sample output:**

    AAAAAA
    ABBBBB
    AAAAAB
    CCCCCB

# Challenge Inputs

## Challenge Input 1
    
    13 5
    1 1 7 4
    11 1 5 3
    8 1 10 2
    0 4 1 2

Visually, this grid is:

    .............
    .A......C..B.
    .D........C..
    .....B.......
    D......A.....
    
## Challenge Output 1

    .....BBBBBBB.
    .AA..B..C..B.
    DDA..B..CCC..
    D.A..B.......
    D.AAAAAA.....

## Challenge Input 2

    12 12
    1 10 8 6
    9 2 1 8
    5 5 9 9
    2 5 6 6
    6 5 3 7
    7 5 10 9
    1 7 10 1
    
Visually, this grid is:

    ............
    ..........G.
    .........B..
    ............
    ............
    ..D..CEF....
    ......D.A...
    .G.E........
    .B..........
    .........CF.
    .A..........
    ............


# Notes

* As may be evident, the grids are 0-indexed.
* Some inputs may have multiple solutions. Others may have no solutions. If there are no possible solutions, print "No solutions" or something similar.
* The paths must be continuous and unbroken. They may not "double back" on themselves.
* Letters were chosen as arbitrary characters for convenience. Feel free to use numbers, symbols, or emoji👌👌 (though a monospace font is useful for the output being readable).

# Bonus points

Make your program come up with solutions that use all the available space on the grid. For example, for the **Challenge Input 1** above, such an output would be:

    BBBBBBBBBBCCC
    BAAAAAAACBCBC
    BDDDDDDACBCBC
    BBBBBBDACBBBC
    DDDDDDDACCCCC
    
#Finally

*This challenge was inspired by the [Flow Free](https://play.google.com/store/apps/details?id=com.bigduckgames.flow&hl=en) mobile game. Credit where it's due.* 

Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas.

