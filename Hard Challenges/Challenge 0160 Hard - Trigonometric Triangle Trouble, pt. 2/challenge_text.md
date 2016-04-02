# [](#HardIcon) _(Hard)_: Trigonometric Triangle Trouble, pt. 2

[I'm posting this early because there's a chance I won't have access to the internet tomorrow. Better an hour early than a day late I suppose.]

A triangle on a flat plane is described by its angles and side lengths, and you don't need all of the angles and side lengths to work out everything about the triangle. (This is the same as last time.) However, this time, the triangle will not necessarily have a right angle. This is where more trigonometry comes in. Break out your trig again, people.

[Here's a representation of how this challenge will describe a triangle](http://i.imgur.com/Q3qUoRg.png). Each side is a **lower-case** letter, and the angle opposite each side is an **upper-case** letter - exactly the same as last time. Side a is opposite angle A, side b is opposite angle B, and side c is opposite angle C. However, angle C is not guaranteed to be 90' anymore, meaning the old right-angle trigonometry will not work; the choice of letter is completely arbitrary now. Your challenge is, using trigonometry and given an appropriate number of values, to find the rest of the values.

# Formal Inputs and Outputs

## Input Description

On the console, you will be given a number **N**. You will then be given **N** lines, expressing **some** details of a triangle in the format:

	3
	a=2.45912
	A=39
	B=56
	
a, A and B are just examples, it could be a, b and B or whatever.

Where all angles are in degrees. Note that, depending on your language of choice, a conversion to radians may be needed to use trigonometric functions such as *sin*, *cos* and *tan*.

## Output Description

You must print out **all** of the details shown below of the triangle in the same format as above.

	a=2.45912
	b=3.23953
	c=3.89271
	A=39
	B=56
	C=85
	
The input data will always give enough information and will describe a valid triangle.

# Sample Inputs & Outputs

## Sample Input

	3
	c=7
	A=43
	C=70

## Sample Output

	a=5.08037
	b=6.85706
	c=7
	A=43
	B=67
	C=70
	
# Notes

There are 5 more useful trigonometric identities you may find very useful. The 4 from Part 1 aren't great here as they are edge cases of trigonometry.

* [Sum of the angles is 180](http://latex.codecogs.com/gif.latex?%5Cmathbf%7BA%7D+%5Cmathbf%7BB%7D+%5Cmathbf%7BC%7D%3D180%5E%7B%5Ccirc%7D)

* [Sine Rule 1](http://latex.codecogs.com/gif.latex?%5Cfrac%7B%5Cmathbf%7Ba%7D%7D%7Bsin%20%5Cmathbf%7BA%7D%7D%3D%5Cfrac%7B%5Cmathbf%7Bb%7D%7D%7Bsin%20%5Cmathbf%7BB%7D%7D%3D%5Cfrac%7B%5Cmathbf%7Bc%7D%7D%7Bsin%20%5Cmathbf%7BC%7D%7D)

* [Sine Rule 2 (same as above but re-arranged)](http://latex.codecogs.com/gif.latex?%5Cfrac%7Bsin%20%5Cmathbf%7BA%7D%7D%7B%5Cmathbf%7Ba%7D%7D%3D%5Cfrac%7Bsin%20%5Cmathbf%7BB%7D%7D%7B%5Cmathbf%7Bb%7D%7D%3D%5Cfrac%7Bsin%20%5Cmathbf%7BC%7D%7D%7B%5Cmathbf%7Bc%7D%7D)

* [Cosine Rule 1](http://latex.codecogs.com/gif.latex?%5Cmathbf%7Ba%7D%5E2%3D%5Cmathbf%7Bb%7D%5E2+%5Cmathbf%7Bc%7D%5E2-2%5Cmathbf%7Bbc%7D%5Ccos%5Cmathbf%7BA%7D)

* [Cosine Rule 2 (same as above but re-arranged)](http://latex.codecogs.com/gif.latex?%5Cfrac%7B%5Cmathbf%7Bb%7D%5E2+%5Cmathbf%7Bc%7D%5E2-%5Cmathbf%7Ba%7D%5E2%7D%7B2%5Cmathbf%7Bbc%7D%7D%3D%5Ccos%5Cmathbf%7BA%7D)

# Finally...

Some of your excellent solutions to Part 1 already accounted for these situations. If your solution from last time already solves this challenge, don't be afraid of posting it again here too! If your solution from last time doesn't, don't fret. You may be able to re-use a lot of code from last time anyway. Learning to [write reusable code](http://en.wikipedia.org/wiki/Reusability) is generally good practice in the field. 