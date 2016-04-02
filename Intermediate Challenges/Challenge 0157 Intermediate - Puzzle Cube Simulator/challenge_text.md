# [](#IntermediateIcon) _(Intermediate)_: Puzzle Cube Simulator

You may be aware of puzzles such as the [Rubik's Cube](http://img1.wikia.nocookie.net/__cb20130909182419/maditsmadfunny/images/e/ee/Rubik%27s_Cube_cropped.jpg). They work by having pieces with coloured faces which can rotate around the centers. You may also be aware of higher-order puzzles such as the [Professor's Cube](http://upload.wikimedia.org/wikipedia/commons/f/fe/Professors_cube.jpg). These work in exactly the same way, with the exception of having more pieces. For the purposes of this challenge, an **n**-cube is a puzzle with **n** pieces along an edge - the Rubik's cube would be a 3-cube, and the Professor's cube a 5-cube.

To make it easier to see exactly what people are doing, there is a standard set of what is called *Move Notation*, which tells you exactly how the puzzle was turned. For the purpose of this challenge, the [notation defined in Article 12 of the WCA regulations](https://www.worldcubeassociation.org/regulations/#article-12-notation) will be used. In a nutshell:

* There are 6 faces. U (up, the top face). D (down, the bottom face). L (left). R (right). F (front). B (back).
* Each face is turned like you were looking at it from the front.
* A notation such as `X` means you turn the X face clockwise 90'. So `R L` means turn the right face clockwise 90' (from its perspective), then the left face clockwise 90' (from its perspective).
* A notation such as `X'` (pronounced *prime*) means you turn the X face anticlockwise 90'. So `R U'` means turn the right face clockwise 90', then the top face anticlockwise 90'.
* A notation such as `X2` means you turn the X face 180'.

This lets you signify a sequence of moves, such as `R U R' U'  R' F  R2 U' R' U  R U R' F'` - which lets you know exactly what happened to the puzzle.

Your challenge is, given a **3**-cube (the standard cube) and a sequence of moves, to simulate the turning of a puzzle and print the output state at the end. (you don't have to solve it - phew!)

Assume a standard colour scheme. That is, start with white on the bottom (D), yellow on the top (U), red on the front (F), green on the right (R), orange on the back (B) and blue on the left (L).

# Formal Inputs and Outputs

## Input Description

You will be given, on one line (and separated by spaces), a sequence of moves in WCA standard notation. This will be arbitrarily long, within sensible limits.

## Output Description

You must print out the front face *only* of a cube that has been turned in the way described by the input (as if you were looking at it from the front of the cube.) Each colour will be represented by its first letter (r, o, y, g, b, w) and the face shall be represented as a printed square.  
For example:

    rrb
    rrw
    oww

# Sample Inputs & Outputs

## Sample Input

	U2 R' D2 R F L' U2 R

## Sample Output

     rrb
     rrw
     oww

# Challenge

## Challenge Input

	R U2 F2 D' F' U L' D2 U2 B' L R2 U2 D
	
## Challenge Output

	bbo
	yrb
	oow
	
# Hint

Multidimensional arrays will be useful here. Try to visualise the way pieces are moved around when you turn a face.