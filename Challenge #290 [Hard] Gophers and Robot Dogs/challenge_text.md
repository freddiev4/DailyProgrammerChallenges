# Description

You're a farmer in the future. Due to some freak accident, all dogs were wiped out but gophers have multiplied and they're causing havoc in your fields. To combat this, you bought a robot dog. Only one problem - you have to program it to chase the gophers. 

The robot dogs can run faster than the natural gophers. Assuming that the gopher starts running when it's been spotted by the dog, the gopher will run in as straight a line as it can towards the nearest hole. The dog can catch the little rascal by cutting off the gopher before it reaches the hole. Assume that if the dog is within a square of the gopher, it's got it capture (e.g. the dog may beat the gopher to a position, but it'll be able to snag it). If the gopher sees the dog waiting the gopher will change direction, so it will have to grab it on the run.

Your task today is to write a program that identifies the best route to run to catch the gopher. Remember - the gopher will run to the nearest hole in a straight line. The dog will run in a straight line, too, you just have to tell it where to go. 

# Input Description

You'll be given several lines. The first line tells you the dog's position and speed (in units per second) as three numbers: the x and y coordinates then the speed. The next line tells you the gopher's position as an x and y coordinate position and its speed (in units per second). The next line tells you how many additional lines *N* to read, these are the gopher holes. Each of the *N* lines tells you a gopher hole as an x and y coordinate. Example:

	10 10 1.0
	1 10 0.25
	2
	0 0
	10 0

# Output Description

Your program should emit the position the dog should run in a straight line to catch the gopher. Example:

	1 7

The gopher will run to the hole at (0,0). The dog should run to position (1,7) to catch the gopher. 

# Challenge Input

	5 3 1.2
	2 8 0.5
	3
	10 1
	11 7
	10 9

# Notes

Added clarification that the dog will only catch the gopher on the run. 

This challenge was inspired by a conversation with former moderator XenophonOfAthens.