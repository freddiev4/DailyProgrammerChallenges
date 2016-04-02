# Description

In the US, voting districts are drawn by state legislatures once every decade after the census is taken. In recent decades, these maps have become increasingly convoluted and have become hotly debated. One method proposed to address this is to insist that the maps be drawn using the "Shortest Splitline Algorithm" (see http://rangevoting.org/FastShortestSplitline.html for a description). The algorithm is basically a recursive count and divide process:

1. Let N=A+B where A and B are as nearly equal whole numbers as possible, and N is the total population of the area to be divided.
2. Among all possible dividing lines that split the state into two parts with population ratio A:B, choose the *shortest*.
3. We now have two hemi-states, each to contain a specified number (namely A and B) of districts. Handle them recursively via the same splitting procedure.

This has some relationship to Voronoi diagrams, for what it's worth. 

In this challenge, we'll ask you to do just that: implement the SS algorithm with an ASCII art map. You'll be given a map and then asked to calculate the best splitlines that maximize equal populations per district. 

For instance, if we have the following populations:

	2 1
	2 1

And you were told you could make only 2 lines, a successfully dividied map would look like this:

	2|1
	-|
	2|1

This splits it into 3 distinct districts with 2 members each. 

Note that lines needn't go all the way across the map, they can intersect with another line (e.g. you're not cutting up a pizza). Also, all of your districts needn't be *exactly* the same, but the solution should minimize the number of differences globally for the map you have. 

# Input Description

You'll be given a line with 3 numbers. The first tells you how many lines to draw, the second tells you how many rows and columns to read. The next *N* lines are of the map, showing people per area. 

# Output Description

You should emit a map with the lines drawn, and a report containing how many people are in each district. 

# Challenge Input

	8 20 20 
	8 0 6 1 0 4 0 0 8 8 8 2 4 8 5 3 4 8 7 4
	5 7 0 3 6 1 0 7 1 1 1 1 2 5 6 4 5 1 5 0
	3 0 5 8 8 7 6 5 1 4 3 1 2 6 0 4 7 5 1 5
	1 7 2 0 4 6 1 6 2 2 0 3 3 5 6 8 7 4 4 0
	6 7 6 7 0 6 1 3 6 8 0 2 0 4 0 3 6 1 0 7
	8 6 7 6 5 8 5 5 5 2 0 3 6 1 4 2 8 2 7 0
	0 6 0 6 5 8 1 2 7 6 3 1 0 3 0 4 0 1 0 5
	5 5 7 4 3 0 0 5 0 0 8 1 1 8 7 2 8 0 0 8
	2 4 0 5 6 7 0 5 6 3 8 1 2 5 3 3 1 8 3 7
	0 7 6 6 2 8 3 4 6 8 4 6 2 5 7 0 3 1 2 1
	0 3 6 4 0 4 0 6 0 3 4 8 2 3 3 8 0 6 1 0
	7 2 6 5 4 5 8 6 4 4 1 1 2 3 1 0 0 8 0 0
	6 7 3 6 2 6 5 0 2 7 7 2 7 0 4 0 0 6 3 6
	8 0 0 5 0 0 1 4 2 6 7 1 7 8 1 6 2 7 0 0
	8 4 7 1 7 5 6 2 5 2 8 5 7 7 8 2 3 1 5 7
	7 2 8 1 1 0 1 0 1 3 8 7 7 5 2 6 3 0 5 5
	1 2 0 1 6 6 0 4 6 7 0 5 0 0 5 5 7 0 7 7
	7 7 3 6 0 1 5 8 5 8 7 0 0 0 4 0 2 1 3 4
	4 3 0 6 5 1 0 6 2 0 6 5 5 7 8 2 0 4 3 4
	4 1 0 4 6 0 6 4 3 2 2 6 2 2 7 3 6 3 0 4

# Credit

This challenge was suggested by user /u/Gigabyte. If you have any ideas for challenges, head on over to /r/dailyprogrammer_ideas and suggest them! 
