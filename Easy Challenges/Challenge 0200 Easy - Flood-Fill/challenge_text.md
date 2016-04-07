# [](#EasyIcon) _(Easy)_: Flood-Fill

Flood-fill is a tool used in essentially any image editing program that's worth its salt. It allows you to fill in any contigious region of colour with another colour, like flooding a depression in a board with paint. For example, take [this beautiful image](http://i.imgur.com/NlCcrKj.png). If I was to flood-fill the colour orange into [this region of the image](http://i.imgur.com/yCavN08.png), then that region would be [turned completely orange](http://i.imgur.com/u6626BA.png).

Today, you're going to implement an algorithm to perform a flood-fill on a text ASCII-style image.

# Input and Output Description

## Challenge Input

You will accept two numbers, **w** and **h**, separated by a space. These are to be the width and height of the image in characters, with the top-left being (0, 0). You will then accept a grid of ASCII characters of size **w**\***h**. Finally you will accept two more numbers, **x** and **y**, and a character **c**. **x** and **y** are the co-ordinates on the image where the flood fill should be done, and **c** is the character that will be filled.

Pixels are defined as contigious (touching) when they share at least one edge (pixels that only touch at corners aren't contigious).

For example:

    37 22
    .....................................
    ...#######################...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#######.....
    ...###.................##......#.....
    ...#..##.............##........#.....
    ...#....##.........##..........#.....
    ...#......##.....##............#.....
    ...#........#####..............#.....
    ...#........#..................#.....
    ...#.......##..................#.....
    ...#.....##....................#.....
    ...#...##......................#.....
    ...#############################.....
    .....................................
    .....................................
    .....................................
    .....................................
    8 12 @


## Challenge Output

Output the image given, after the specified flood-fill has taken place.

    .....................................
    ...#######################...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#...........
    ...#.....................#######.....
    ...###.................##......#.....
    ...#@@##.............##........#.....
    ...#@@@@##.........##..........#.....
    ...#@@@@@@##.....##............#.....
    ...#@@@@@@@@#####..............#.....
    ...#@@@@@@@@#..................#.....
    ...#@@@@@@@##..................#.....
    ...#@@@@@##....................#.....
    ...#@@@##......................#.....
    ...#############################.....
    .....................................
    .....................................
    .....................................
    .....................................

# Sample Inputs and Outputs

## Input

    16 15
    ----------------
    -++++++++++++++-
    -+------------+-
    -++++++++++++-+-
    -+------------+-
    -+-++++++++++++-
    -+------------+-
    -++++++++++++-+-
    -+------------+-
    -+-++++++++++++-
    -+------------+-
    -++++++++++++++-
    -+------------+-
    -++++++++++++++-
    ----------------
    2 2 @

## Output

    ----------------
    -++++++++++++++-
    -+@@@@@@@@@@@@+-
    -++++++++++++@+-
    -+@@@@@@@@@@@@+-
    -+@++++++++++++-
    -+@@@@@@@@@@@@+-
    -++++++++++++@+-
    -+@@@@@@@@@@@@+-
    -+@++++++++++++-
    -+@@@@@@@@@@@@+-
    -++++++++++++++-
    -+------------+-
    -++++++++++++++-
    ----------------

## Input

    9 9
    aaaaaaaaa
    aaadefaaa
    abcdafgha
    abcdafgha
    abcdafgha
    abcdafgha
    aacdafgaa
    aaadafaaa
    aaaaaaaaa
    8 3 ,

## Output

    ,,,,,,,,,
    ,,,def,,,
    ,bcd,fgh,
    ,bcd,fgh,
    ,bcd,fgh,
    ,bcd,fgh,
    ,,cd,fg,,
    ,,,d,f,,,
    ,,,,,,,,,

# Extension (Easy/Intermediate)

Extend your program so that the image 'wraps' around from the bottom to the top, and from the left to the right (and vice versa). This makes it so that the top and bottom, and left and right edges of the image are touching (like the surface map of a torus).

## Input

    9 9
    \/\/\/\.\
    /./..././
    \.\.\.\.\
    /.../.../
    \/\/\/\/\
    /.../.../
    \.\.\.\.\
    /./..././
    \/\/\/\.\
    1 7 #

## Output

    \/\/\/\#\
    /#/###/#/
    \#\#\#\#\
    /###/###/
    \/\/\/\/\
    /###/###/
    \#\#\#\#\
    /#/###/#/
    \/\/\/\#\

# Further Reading

If you need a starting point with recursion, here are some reading resources.

* [Recursive Algorithms](http://www2.its.strath.ac.uk/courses/c/subsection3_9_5.html)
* [Recursive function calls](http://www.cs.cmu.edu/~rwh/introsml/core/recfns.htm)

Consider using list-like data structures in your solution, too.

# Addendum

200! :)