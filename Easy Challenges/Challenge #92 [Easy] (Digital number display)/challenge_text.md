Today's easy challenge is to write a program that draws a number in the terminal that looks like one of those old school [seven segment displays](http://en.wikipedia.org/wiki/Seven-segment_display) you find in alarm clocks and VCRs. For instance, if you wanted to draw the number 5362, it would look somthing like:

    +--+  +--+  +--+  +--+
    |        |  |        |
    |        |  |        |
    +--+  +--+  +--+  +--+
       |     |  |  |  |
       |     |  |  |  |
    +--+  +--+  +--+  +--+
     
I've added some +'s to the joints to make it a bit more readable, but that's optional. 

Bonus: Write the program so that the numbers are scalable. In other words, that example would have a scale of 2 (since every line is two terminal characters long), but your program should also be able to draw them in a scale of 3, 4, 5, etc.
