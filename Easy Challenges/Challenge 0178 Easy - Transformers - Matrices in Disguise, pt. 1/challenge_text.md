# [](#EasyIcon) *(Easy)*: Transformers: Matrices in Disguise, pt. 1

Or, rather, transform*ation*s. Today we'll be doing a bit of basic geometry. We'll be writing a program which will take a point in 2-dimensional space, represented as `(X, Y)` (where X and Y can be decimal and negative), transform them a number of times in different ways and then find the final position of the point.

Your program must be able to do the following:

* Translations - ie. offsetting the X and Y co-ordinates by a given amount http://i.imgur.com/3jI4sGI.png

* Rotations by an arbitrary angle around a given point http://i.imgur.com/9c0ji7c.png

* Scale relative to a point http://i.imgur.com/vHUfXv2.png

* Reflection over the X or Y axis http://i.imgur.com/X6JH6pT.png

# Formal Inputs & Outputs

## Input

You will take an starting point `(X, Y)`, such as:

    (3, 4)

On new lines, you will then take commands in the format:

    translate(A, B)     - translate by (A, B)
    rotate(A, B, C)     - rotate around (A, B) by angle C (in radians) clockwise
    scale(A, B, C)      - scale relative to (A, B) with scale-factor C
    reflect(axis)       - reflect over the given axis
    finish()            - end input and print the modified location

Where `axis` is one of `X` or `Y`.

## Output

Print the final value of `(X, Y)` in the format:

    (2.5, -0.666666)

# Test Case

## Test Case Input

    (0, 5)
    translate(3, 2)
    scale(1,3,0.5)
    rotate(3,2,1.57079632679)
    reflect(X) 
    translate(2,-1)
    scale(0,0,-0.25)
    rotate(1,-3,3.14159265359)
    reflect(Y)

## Test Case Output

    (-4, -7)

# Notes

I want to say two things. First, this may be a good opportunity to learn your language's 2-D drawing capabilities - every time a command is given, represent it on an image like I have done with the examples, so you can see the path the co-ordinate has taken. Secondly, this is a multi-part challenge. I'm not sure how many parts there will be, however it may be a good idea to prepare for more possible commands (or, if you're crazy enough to use Prolog - you know who you are - write an EBNF parser like last time, lol.) If you know how, it would be clever to start using matrices for transformations now rather than later.