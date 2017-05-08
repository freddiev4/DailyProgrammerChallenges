#Description
Start with a grid _h_ units high by _w_ units wide. Set a point particle in motion from the upper-left corner of the grid, 45 degrees from the horizontal, so that it crosses from one corner of each unit square to the other. When the particle reaches the bounds of the grid, it ricochets and continues until it reaches another corner. 

Given the size of the grid (_h_ and _w_), and the velocity (_v_) of the particle in unit squares per second, determine _C_: the corner where the particle will stop, _b_: how many times the particle ricocheted off the bounds of the grid, and _t_: the time it took for the particle to reach _C_.

#Constraints

The particle always starts from the upper-left corner of the grid (and will therefore always end up in one of the other corners).

Since we'll be working with unit squares, _h_ and _w_ are always integers.

#Formal Inputs & Outputs
##Input description
The input will be an arbitrary number of lines containing _h_, _w_, and _v_, each separated by spaces:

     8 3 1
     15 4 2

##Output description
For each line of input, your program should output a line containing _C_, _b_, and _t_, where _C_ can be UR, LR, or LL depending on where the particle ends up:

     LL 9 24
     UR 17 30

#Bonus
Instead of a particle, determine the behavior of a rectangle _m_ units high by _n_ units wide. Input should be as follows: _h_ _w_ _m_ _n_ _v_. So for a 10 by 7 grid with a 3 by 2 rectangle, the input would be:

     10 7 3 2 1

The output format is the same:

     LR 10 35

#Finally
Have a good challenge idea like /u/sceleris927 did?

Consider submitting it to /r/dailyprogrammer_ideas