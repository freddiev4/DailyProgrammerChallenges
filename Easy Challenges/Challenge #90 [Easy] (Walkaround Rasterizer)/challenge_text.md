In this challenge, we propose a simple image file format for binary (2 color) black-and-white images.  
Rather than describing the image as a sequence of bits in a row, instead we describe it in a little bit of a non-standard way.

Imagine a grid of white squares.  On this grid, a single man carrying a large black stamp stands on the square at 0,0.  You can tell him 5 commands: walk N,S,E,W, and stamP.   This will cause him to wander around the grid, and when he recieves a stamp command, he will change the white square there to black.  By giving him the sequence of commands 
of how to move, you can render an arbitrary b+w image.

The input file will have two integers describing the size of the grid.  Then, it will contain a sequence of characters.  These characters describe the command sequence to execute to create the image.  The program should output the image in some way.  For example, it might print it to a png file or print it in ascii art to the screen.

As an example, the input file 

    5 5 PESPESPESPESPNNNNPWSPWSPWSPWSP

would output a 5x5 grid with an X in it.


SUPER BONUS: implement a program that can convert an arbitrary image to the walkaround rasterizer format.
