#Description

This challenge takes its roots from the world-famous game Pacman. To finish the game, pacman needs to gather all pacgum on the map.

The goal of this chalenge is to have a time-limited pacman. Pacman must gather as much pacgum as possible in the given time. To simplify, we will say that 1 move (no diagonals) = 1 unit of time.

#Formal Inputs &amp; Outputs

##Input description

You will be given a number, the time pacman has to gather as much pacgum as possible, and a table, being the map pacman has to explore. Every square of this map can be one of those things :

A number N between (1 and 9) of pacgums that pacman can gather in one unit of time.

"X" squares cannot be gone through. 

"C" will be where pacman starts.

"O" (the letter, not zero ) will be a warp to another "O". There can be only 2 "O" on one map;

##Output description

Your program should output the maximum number of pacgums pacman can gather in the given time.

#Examples
##Example Input 
Input 1 :

4

    XXXXX
    X197X
    X2C6X
    X345X
    XXXXX

Input 2 :

3 

    XXXXXXXXXXXXXX
    X111C2OXO2111X
    XXXXXXXXXXXXXX

## Example outputs :

Output 1 : 27

Output 2 : 4 

# Challenge Input :

Challenge Input 1 :

10

    XXXXXXXXXXXXX
    X23543561195X
    X9X3X17C12X4X
    X515OX1183X6X
    X7865X48O585X
    XXXXXXXXXXXXX

Challenge Input 2 :

20

    XXXXXXXXXXXXXX
    XXC1212121213X
    X4X21212O2121X
    X44X232323232X
    X444X43434343X
    X4444XXXXXX77X
    X4444O6789X99X
    XXXXXXXXXXXXXX



# Notes

You can specify the number oflines and columns of the table next to it to ease the workload.

As for the warp, you can either choose to ignore it or teleport yourself, you don't always teleport.

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

#Cat update

It looks like she will make it. She does everything a cat should do, only you can see she is in pain...

If someone is interested, I can give updates next week as well...