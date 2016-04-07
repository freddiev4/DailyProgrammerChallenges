# Description

Write a program to print out the (x, y) coordinates of each point in the nth iteration of the [Heighway dragon fractal](http://www-user.uni-bremen.de/schmuhl/fractals/dragon_curve_o12.png). Start at the origin (0, 0) and take steps of length 1, starting in the positive x direction (1, 0), then turning to the positive y direction (1, 1). Your program should generate 2^n + 1 lines of output.

You can use any resources you want for help coming up with the algorithm, but if you want to start from the very beginning, use only the fact that the nth iteration can be made by [folding a strip of paper in half n times, then unfolding it so that each crease is at a right angle](http://www.cutoutfoldup.com/images/0216-s03b.jpg).

# Example

For n = 3, your output should be:

    0 0
    1 0
    1 1
    0 1
    0 2
    -1 2
    -1 1
    -2 1
    -2 2

[Plotted image of these points](http://i.imgur.com/3sCzNyG.png), made using LibreOffice.

The sum of the x's here is -4, and the sum of the y's is 10. For n = 12, the sums are -104896 and 52416. To verify that your program is correct, post the sum of x's and y's for n = 16 along with your code.

# Optional challenges

Today's basic challenge is not too hard, relatively speaking, so if you want more, try some of these optional add-ons, or take it in your own direction.

1. Show us a plot of your output. There are many options for this. You can use a plotting library for your language of choice, or use a spreadsheet like I did. gnuplot is another free option. Feel free to get creative with colors, effects, animations, etc.
1. Optimize your code for memory usage. Aim for O(n) space.
1. Optimize your code for speed. What's the largest n you can generate all the data for in less than 1 minute? (You can skip printing output for this one, as long as you actually do all the calculations.)
1. Golf: minimize your code length. What's the shortest program you can write in your language that works?
1. There are [other ways of generating the Heighway dragon](http://i.imgur.com/n30yp.gif) than the paper folding one I suggested. Try implementing a different one than you used first.
1. There are many variations of the Heighway dragon [(see Variations at the bottom)](http://ecademy.agnesscott.edu/~lriddle/ifs/heighway/heighway.htm). Try creating a terdragon, golden dragon, or anything else you can find.
1. Find a way to efficiently calculate s(n), the sum of the x's and y's for the nth iteration. For example, s(3) = (-4, 10) and s(12) = (-104896, 52416). Post s(100) along with your code. (This is possible without any advanced math, but it's tricky.)
1. Find a way to efficiently calculate p(k), the (x, y) position after k steps (i.e. the (k+1)th line of output when n is sufficiently large), starting from from p(0) = (0, 0), p(1) = (1, 0). For example, p(345) = (13, 6). Post p(3^(45)) along with your code. (This one is also quite tricky.)