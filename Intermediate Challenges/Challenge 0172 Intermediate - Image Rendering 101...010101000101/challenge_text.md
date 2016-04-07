#Description

You may have noticed from our [easy](http://www.reddit.com/r/dailyprogrammer/comments/2ba3g3/7212014_challenge_172_easy/) challenge that finding a program to render the PBM format is either very difficult or usually just a spammy program that no one would dare download.

Your mission today, given the knowledge you have gained from last weeks challenge is to create a Renderer for the PBM format.


For those who didn't do mondays challenge, here's a recap

* a PBM usually starts with 'P1' denoting that it is a .PBM file
* The next line consists of 2 integers representing the width and height of our image
* Finally, the pixel data. 0 is white and 1 is black.


This Wikipedia article will tell you more


http://en.wikipedia.org/wiki/Netpbm_format

#Formal Inputs & Outputs



##Input description

On standard console input you should be prompted to pass the .PBM file you have created from the easy challenge.



##Output description

The output will be a .PBM file rendered to the screen following the conventions where 0 is a white pixel, 1 is a black pixel



#Notes


This task is considerably harder in some languages. Some languages have large support for image handling (.NET and others) whilst some will require a bit more grunt work (C and even Python) .

It's up to you to decide the language, but easier alternatives probably do exist.


#Bonus

Create a renderer for the other versions of .PBM (P2 and P3) and output these to the screen.


#Finally


Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas