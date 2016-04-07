
# [](#IntermediateIcon) *(Intermediate)*: Find the shortest path
Given an ASCII grid through standard console input, you must find the shortest path from the start to the exit (without walking through any walls). You may only move up, down, left, and right; never diagonally.

*Author: liloboy*
# Formal Inputs & Outputs
## Input Description
The first line of input is an integer, which specifies the size of the grid in both dimensions. For example, a 5 would indicate a 5 x 5 grid. The grid then follows on the next line. A grid is simply a series of ASCII characters, in the given size. You start at the 'S' character (for Start) and have to walk to the 'E' character (for Exit), without walking through any walls (indicated by the 'W' character). Dots / periods indicate open, walk-able space.
## Output Description
The output should simply print "False" if the end could not possibly be reached or "True", followed by an integer. This integer indicates the shortest path to the exit.
# Sample Inputs & Outputs
## Sample Input
    5
    S....
    WWWW.
    .....
    .WWWW
    ....E

Check out this link for many more examples! http://pastebin.com/QFmPzgaU
## Sample Output
    True, 16
# Challenge Input
    8
    S...W...
    .WW.W.W.
    .W..W.W.
    ......W.
    WWWWWWW.
    E...W...
    WW..WWW.
    ........
## Challenge Input Solution
True, 29
# Note
As a bonus, list all possible shortest paths, if there are multiple same-length paths.
				