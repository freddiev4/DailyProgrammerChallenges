#Descripton:

Given a typical x/y coordinate system we can plot lines. It would be interesting to know which lines intersect.

#Input: 

A series of lines from 1 to many to put in our 2-D space. The data will be in the form:

    (label) (x1 y1) (x2 y2)

* (label) will be a letter A-Z
* (x1 y1) will be the coordinates of the starting point on line
* (x2 y2) will be the coordinates of the ending point on line


##example input:

    A -2.5 .5 3.5 .5
    B -2.23 99.99 -2.10 -56.23
    C -1.23 99.99 -1.10 -56.23
    D 100.1 1000.34 2000.23 2100.23
    E 1.5 -1 1.5 1.0
    F 2.0 2.0 3.0 2.0
    G 2.5 .5 2.5 2.0


* Max X can be 1,000,000,000.00
* Max Y can be 1,000,000,000.00

#Output:

The program will list which lines intersect. And which have 0 intersects.

##Example Output:

    Intersecting Lines:
    A B
    A C
    A E
    A G
    F G
    No intersections:
    D

#Difficulty:

This is a coder_d00d(tm) unknown difficulty challenge. It could be easy. Could be hard. But it seems cool for a Friday.


* If you want to make it **easier**: input is only 2 lines and you return yes/no
* If you want to make it **harder**: output is the 2 lines and the (x y) point they intersect at.


