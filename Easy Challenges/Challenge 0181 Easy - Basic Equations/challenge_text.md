# [](#EasyIcon) _(Easy)_: Basic Equations

Today, we'll be creating a simple calculator, that we may extend in later challenges. Assuming you have done basic algebra, you may have seen equations in the form [`y=ax+b`](http://latex.codecogs.com/gif.latex?y%3Dax&plus;b), where `a` and `b` are constants. This forms a graph of a straight line, when you plot `y` in respect to `x`. If you have not explored this concept yet, you can visualise a linear equation such as this using [this online tool](http://www.mathopenref.com/linearexplorer.html), which will plot it for you.

The question is, how can you find out where two such 'lines' intersect when plotted - ie. when the lines cross? Using algebra, you can solve this problem easily. For example, given [`y=2x+2`](http://latex.codecogs.com/gif.latex?y%3D2x&plus;2) and [`y=5x-4`](http://latex.codecogs.com/gif.latex?y%3D5x-4), how would you find out where they intersect? This situation would look like [this](http://i.imgur.com/wLr5Aei.png). Where do the red and blue lines meet? You would substitute `y`, forming one equation, [`2x+2=5x-4`](http://latex.codecogs.com/gif.latex?2x&plus;2%3D5x-4), as they both refer to the same variable `y`. Then, subtract one of the sides of the equation from the other side - like [`2x+2-(2x+2)=5x-4-(2x+2)`](http://latex.codecogs.com/gif.latex?2x&plus;2-%282x&plus;2%29%3D5x-4-%282x&plus;2%29) which is the same as [`3x-6=0`](http://latex.codecogs.com/gif.latex?3x-6%3D0) - to solve, move the -6 to the other side of the `=` sign by adding 6 to both sides, and divide both sides by 3: [`x=2`](http://latex.codecogs.com/gif.latex?x%3D2). You now have the `x` value of the co-ordinate at where they meet, and as `y` is the same for both equations at this point (hence why they intersect) you can use either equation to find the `y` value, [like so](http://latex.codecogs.com/gif.latex?%282x&plus;2%5C%3B%20%5Ctextup%7Bwhere%7D%5C%3B%20x%3D2%29%3D2%282%29&plus;2%3D4&plus;2%3D6). So the co-ordinate where they insersect is `(2, 6)`. Fairly simple.

Your task is, given two such linear-style equations, find out the point at which they intersect.

# Formal Inputs and Outputs

## Input Description

You will be given 2 equations, in the form `y=ax+b`, on 2 separate lines, where `a` and `b` are constants and `y` and `x` are variables.

## Output Description

You will print a point in the format `(x, y)`, which is the point at which the two lines intersect.

# Sample Inputs and Outputs

## Sample Input

	y=2x+2
	y=5x-4

## Sample Output

	(2, 6)
	
## Sample Input

	y=-5x
	y=-4x+1

## Sample Output

	(-1, 5)

## Sample Input

	y=0.5x+1.3
	y=-1.4x-0.2

## Sample Output

	(-0.7895, 0.9053)

# Notes

If you are new to the concept, this might be a good time to learn [regular expressions](http://www.regular-expressions.info/tutorial.html). If you're feeling more adventurous, write a little parser.

# Extension

Draw a graph with 2 lines to represent the inputted equations - preferably with 2 different colours. Draw a point or dot representing the point of intersection.