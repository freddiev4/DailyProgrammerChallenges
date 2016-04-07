#Description

You have one rectangle composed of X*Y squares, with X being the width and Y being the height. You want to know how many squares you are going to collide if you were to draw a diagonal, meaning a line between the bottom-left edge and the top-right edge.

#Input Description

2 unsigned integers X and Y

#Output Description

Number of squares that collide with the diagonal.

#Sample Inputs

Sample Input 1 : 5 2
Sample Input 2 : 3 9

#Sample Outputs

For this first case, the squares marked as X would collide with the diagonal :

    ..XXX
    XXX..

meaning the Sample Output 1 is 6

Sample Output 2 : 9 

# Challenge Input

Input 0 : 3 9
Input 1 : 21 2
Input 2 : 168 189
Input 3 : 100 101
Input 4 : 123456789 987654321

# Bonus

For small numbers, you can output on the standard output which squares would collide, like so :

    ..XXX
    XXX..
    
# Credit

This challenge was suggested by /u/Cobrand. Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas. 