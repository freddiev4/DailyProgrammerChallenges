#Description:

I have played around with this one a bit. I found it interesting. So let us imagine we can define a 3-D box of (height, width, depth) in dimensions. I then have a bunch of boxes I want to put in it. How do I figure out how get the most smallest boxes into the one big box?

Optimize the number. We don't want to use up as much space but get as many boxes as we can in 1 box.

Today's challenge is figuring out how to do this. 

#Input:

You will be given the dimensions of the big box x, y, z. Then you will be given dimensions x, y, z of several smaller boxes below it.

Example:
the big box is 1st is 3x3x3 then we have to put all the boxes below it into it (yes 4,4,4 is bigger but someone in marketing really wants us to try...)


     3 3 3
     
     2 2 2
     2 2 2
     4 4 4
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1

#Output:

     Filled 8 boxes into the 3 3 3:
     2 2 2
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1
     1 1 1

#Challenge Input:

     10 10 10

     4 4 4
     5 5 1
     4 5 1
     7 7 7
     5 5 5
     3 3 3
     5 5 5
     9 8 7
     4 5 1
     5 5 1
     4 4 4
     3 3 3
     4 4 4

