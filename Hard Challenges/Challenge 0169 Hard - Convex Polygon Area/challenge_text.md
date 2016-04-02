# [](#HardIcon) _(Hard)_: Convex Polygon Area

A convex polygon is a geometric polygon (ie. sides are straight edges), where all of the interior angles are less than 180'. For a more rigorous definition of this, see [this page](http://www.mathopenref.com/polygonconvex.html).

The challenge today is, given the points defining the boundaries of a convex polygon, find the area contained within it. 
    
## Input Description

First you will be given a number, **N**. This is the number of vertices on the convex polygon.  
Next you will be given the points defining the polygon, in no particular order. The points will be a 2-D location on a flat plane of infinite size. These will always form a convex shape so don't worry about checking that 

in your program. These will be in the form `x,y` where `x` and `y` are real numbers.
    
## Output Description

Print the area of the shape.

# Example Inputs and Outputs

## Example Input 1

    5
    1,1
    0,2
    1,4
    4,3
    3,2

## Example Output 1

    6.5

## Example Input 2

    7
    1,2
    2,4
    3,5
    5,5
    5,3
    4,2
    2.5,1.5

## Example Output 2

    9.75

# Challenge

## Challenge Input

    8
    -4,3
    1,3
    2,2
    2,0
    1.5,-1
    0,-2
    -3,-1
    -3.5,0

## Challenge Output

    24

# Notes

Dividing the shape up into smaller segments, eg. triangles/squares, may be crucial here.

# Extension

I quickly realised this problem could be solved much more trivially than I thought, so complete this too. Extend your program to accept 2 convex shapes as input, and calculate the combined area of the resulting intersected shape, similar to how is described [in this challenge](http://www.reddit.com/r/dailyprogrammer/comments/23b1pr/4182014_challenge_158_hard_intersecting_rectangles/).