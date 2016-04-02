# Description

You're moving, and you have a bunch of sentences to pack up. To accomplish this, you'll be using a small program you should write to pack these sentences efficiently into a box for shipping. Leave no unused space, you have a lot of sentences to pack and you don't want to waste precious shipping space. 

For this challenge you're free to choose any legal dimensions of a rectangle, and you're free to start in any position you wish. Your program (and thus your output) should walk the grid to adjacent squares using only left, right, up, down (no diagonal moves allowed).

# Input

You'll be given a sentence to pack into a box

	EVERYWHERE IS WITHIN WALKING DISTANCE IF YOU HAVE THE TIME

# Output

Your program should emit the starting position (column and row, 1-indexed) for the sentence, and then the box with the sentence packed into it. The sentence must be packed in the original word order with only spaces removed. You can chose your own box dimensions. The above example is a 49 character sentence (minus spaces), so that's a 7x7 box. Here's one possible solution:

	4 4
	E       T       I       M       E       D       I
	H       W       S       I       E       G       S
	T       I       E       V       R       N       T
	E       T       R       E       E       I       A
	V       H       Y       W       H       K       N
	A       I       N       W       A       L       C
	H       U       O       Y       F       I       E

# Challenge Input

	IT IS RAINING CATS AND DOGS OUT THERE

# Challenge Output

Here's one possible solution

	1 1
	I       T       I       N       I
	E       I       A       G       N
	R       S       R       C       A
	E       G       O       D       T
	H       S       O       D       S
	T       T       U       N       A

# Credit

Many thanks to /u/Godspiral for the suggestion.  Got any cool challenge ideas? Submit them to /r/DailyProgrammer_Ideas!
