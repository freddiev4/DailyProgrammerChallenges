# Description

We've had our fair share of sorting algorithms, now let's do a *shuffling* challenge. In this challenge, your challenge is to take a list of inputs and change around the order in random ways. Think about shuffling cards - can your program shuffle cards?

*EDIT 07-25-2014* In case this isn't obvious, the intention of this challenge is for you to implement this yourself and not rely on a standard library built in (e.g. Python's "random.shuffle()" or glibc's "strfry()"). 

# Input Description

You'll be given a list of values - integers, letters, words - in one order. The input list will be space separated. Example:

	1 2 3 4 5 6 7 8 

# Output Description

Your program should emit the values in any non-sorted order; sequential runs of the program or function should yield different outputs. You should maximize the disorder if you can. From our example:

	7 5 4 3 1 8 2 6

# Challenge Input

	apple blackberry cherry dragonfruit grapefruit kumquat mango nectarine persimmon raspberry raspberry
	a e i o u

# Challenge Output 

Examples only, this is all about shuffling

	raspberry blackberry nectarine kumquat grapefruit cherry raspberry apple mango persimmon dragonfruit
	e a i o u

# Bonus

Check out the [Faro shuffle](https://en.wikipedia.org/wiki/Faro_shuffle) and the [Fisher-Yates shuffles](https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle), which are algorithms for specific shuffles. Shuffling has some interesting mathematical properties. 
