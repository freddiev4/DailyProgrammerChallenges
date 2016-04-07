Your intermediate task today is to build a simple simulator of a [Rubik's Cube](http://en.wikipedia.org/wiki/Rubik%27s_Cube). The cube should be represented by some sort of structure, which you can give a list of moves which it will execute and show you how the cube will look as a result.

A Rubik's Cube has six sides, which are traditionally known as Up, Down, Front, Back, Left and Right, abbreviated as U, D, F, B, L and R respectively. Color the sides of the cube as follows: Up <- white, Down <- yellow, Front <- green, Back <- blue, Left <- orange and Right <- red. 

Taking advantage of the style of [problem #85](http://www.reddit.com/r/dailyprogrammer/comments/xq2ao/832012_challenge_85_intermediate_3d_cuboid/), the basic solved cube should then look something like this:

        W W W /
      W W W / R
    W W W / R R
    G G G|R R R
    G G G|R R
    G G G|R

Here showing the top side, the front side and the right side. 

To list moves you can make on a Rubik's Cube, you use something called [Singmaster's notation](http://en.wikipedia.org/wiki/Rubik%27s_Cube#Move_notation), which works like this: to indicate a clockwise turn of any one side, you use the abbreviation of the side. So "R" means to spin the right side clockwise 90 degrees. If there's a prime sympol (i.e. a ' ) after the letter, that means to spin it counter-clockwise 90 degrees. If there's a "2" after the letter, it means you should spin that side 180 degrees. There is an extended notation for advanced moves (such as spinning a middle slice, or spinning two slices), but we'll ignore those for this challenge. 

So, for instance, executed the sequence
    
    R U B' R B R2 U' R' F R F'

on a totally solved cube, it should result in the following configuration:
    
        O O R /
      B W G / W
    R R O / W R
    W W G|W R R
    G G G|R R
    G G G|R

[See here for a step by step demonstration](http://alg.garron.us/?alg=R_U_B-_R_B_R2_U-_R-_F_R_F-).

Make a program that can execute a sequence of moves like these, and then print out what the cube looks like as a result, either in the cuboid form I've used here, or just print out the sides one by one. 

What is the result of executing the following series of moves on a solved cube?

    F' B L R' U' D F' B
