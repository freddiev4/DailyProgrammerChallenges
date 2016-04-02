# [](#HardIcon) _(Hard)_: Convex Hull Problem

I have [a collection of points, called **P**](http://i.imgur.com/yDhKB22.png). For this challenge the points will all be on a 2D plane. The Convex Hull problem is to find a convex polygon made from points in **P** which contains all of the points in **P**. There are several approaches to this problem, including brute-force (not good) and several O(n^(2)) solutions (naive, not brilliant) and some fairly in-depth algorithms. 
    
Some such algorithms are described [here (a Java applet, be warned - change the display to 2d first)](http://www.cse.unsw.edu.au/~lambert/java/3d/hull.html) or on [Wikipedia](http://en.wikipedia.org/wiki/Convex_hull_algorithms#Algorithms). The choice is yours, but because you're in /r/DailyProgrammer try and challenge yourself! Try and implement one of the more interesting algorithms.

For example, a convex hull of P:

* [Cannot be this](http://i.imgur.com/VCmqplP.png) because a point is excluded from the selection

* [Also cannot be this](http://i.imgur.com/C4IhIxa.png) because the shape is not convex - the triangles enclosed in green are missing

* [Looks like this](http://i.imgur.com/rbvhJZa.png). The shape is convex and contains all of the points in the image - either inside it or as a boundary.

## Input Description

First you will be given a number, **N**. This number is how many points are in our collection **P**.

You will then be given **N** further lines of input in the format:

    X,Y

Where X and Y are the co-ordinates of the point on the image. Assume the points are named in alphabetical order as A, B, C, D, ... in the order that they are input.
    
## Output Description

You must give the convex hull of the shape in the format:

    ACFGKLO

Where the points are described in no particular order. (as an extra challenge, make them go in order around the shape.)

# Notes

In the past we've had some very pretty images and graphs from people's solutions. If you feel up to it, add an image output from your challenge which displays the convex hull of the collection of points.