# [](#HardIcon) **(Hard)**: Arrows and Arrows, part 1

Wednesday's challenge was released later than I wanted it to be (my fault entirely), so I'll make it up to you by posting this one early. I fear some previous hard challenges have appeared unapproachable to some people due to their logical or mathematical complexity. I aim to make a Hard challenge today which is innately simple, but will still require a Hard degree of thought (assuming you come up with the algorithm yourself.)  
Take this grid of characters:

	v<^><>>v><>^<>vvv^^>
	>^<>^<<v<>>^v^v><^<<
	v^^>>>>>><v^^<^vvv>v
	^^><v<^^<^<^^>>>v>v>
	^<>vv^><>^<^^<<^^><v
	^vv<<<><>>>>^<>^^^v^
	^<^^<^>v<v^<>vv<^v<>
	v<>^vv<^>vv>v><v^>^^
	>v<v><^><<v>^^>>^<>^
	^v<>^<>^>^^^vv^v>>^<
	v>v^^<>><<<^^><^vvv^

Let's imagine they all represent arrows, pointing to a cell next to them. For example, `v` points downward, and `<` points left. Let's also imagine the grid is infinite - ie. a `>` arrow at the right-hand side will 'wrap around' and point to the leftmost character on the same row, meaning the board has no limits. Now, we're going to follow the direction of the arrows. Look at the top-left cell. It's a `v`, so it points down to the cell below it, which is a `>`. That points to the cell to its right, which is a `^`. This points up to the cell above it, which is a `<`. This points to the cell to its left... which is exactly where we started. See how this has formed a 'loop'? You could go round and round and round forever. Remember, the board wraps around, so this grid is also a loop:

    >>>>>>>>>>>>

And so is this, if you follow the arrows:

	^^>
	>^^
	^>^

This looping structure is called a **cycle**. The discrete mathematicians in this sub should have all collectively just said *'aha!'*, as they should know already be thinking of how to approach the challenge from that last sentence. If you're not a discrete mathematician, read on. Your challenge today is simply described: given a grid such as the one above, find the *largest cycle* in it.

One important point: the 'length' of the cycle is just the part of the cycle that repeats. For example, the cycle is *not* made longer by adding an 'intro' to it:

        >>v
        ^<<
         ^
         ^
         ^
         ^

The length of this cycle is 6 regardless of where you start from, as that is the length of the 'cycle'.

# Formal Inputs and Outputs

## Input Description

You will input 2 numbers first - these are the width and height of the grid you'll be working with. Then you will input a grid in the same format as described above.

## Output Description

You are to output the length of the longest cycle on the grid, possibly along with some representation of where that cycle is on the board (eg. print the cycle in another color.)

# Sample Inputs and Outputs

## Sample Input

This input should test the ability of your program to find longer cycles over shorter cycles, and ignore arrows not in a cycle.

	5 5
	>>>>v
	^v<<v
	^vv^v
	^>>v<
	^<<<^

## Sample Output

Longest cycle: `16`  
Position:

	>>>>v
	^   v
	^   v
	^  v<
	^<<< 

## Sample Input

This should test the ability of your program to find cycles that wrap around.

	45 20
	^^v>>v^>>v<<<v>v<>>>>>>>>^vvv^^vvvv<v^^><^^v>
	>><<>vv<><<<^><^<^v^^<vv>>^v<v^vv^^v<><^>><v<
	vv<^v<v<v<vvv>v<v<vv<^<v<<<<<<<<^<><>^><^v>>>
	<v<v^^<v<>v<>v<v<^v^>^<^<<v>^v><^v^>>^^^<><^v
	^>>>^v^v^<>>vvv>v^^<^<<<><>v>>^v<^^<>v>>v<v>^
	^^^<<^<^>>^v>>>>><>>^v<^^^<^^v^v<^<v^><<^<<<>
	v<>v^vv^v<><^>v^vv>^^v^<>v^^^>^>vv<^<<v^<<>^v
	<<<<<^<vv<^><>^^>>>^^^^<^<^v^><^v^v>^vvv>^v^^
	<<v^<v<<^^v<>v>v^<<<<<>^^v<v^>>>v^><v^v<v^^^<
	^^>>^<vv<vv<>v^<^<^^><><^vvvv<<v<^<<^>^>vv^<v
	^^v^>>^>^<vv^^<>>^^v>v>>v>>v^vv<vv^>><>>v<<>>
	^v<^v<v>^^<>>^>^>^^v>v<<<<<>><><^v<^^v><v>^<<
	v>v<><^v<<^^<^>v>^><^><v^><v^^^>><^^<^vv^^^>^
	v><>^><vv^v^^>><>^<^v<^><v>^v^<^<>>^<^vv<v>^v
	><^<v>>v>^<<^>^<^^>v^^v<>>v><<>v<<^><<>^>^v<v
	>vv>^>^v><^^<v^>^>v<^v><>vv>v<^><<<<v^<^vv<>v
	<><<^^>>^<>vv><^^<vv<<^v^v^<^^^^vv<<>^<vvv^vv
	>v<<v^><v<^^><^v^<<<>^<<vvvv^^^v<<v>vv>^>>^<>
	^^^^<^<>^^vvv>v^<<>><^<<v>^<<v>>><>>><<^^>vv>
	<^<^<>vvv^v><<<vvv<>>>>^<<<^vvv>^<<<^vv>v^><^

## Sample Output

Longest cycle: `44`  
Position:

						>>>>>^
						^<
						 ^
						>^
						^
					   >^
					   ^
					>>>^
					^
					^<
					 ^
					 ^
					 ^
					>^
					^
					^
					^  v<<
					^<<< ^
						 ^<<
						   ^<<

# Notes

If you're a discrete mathematician or know of graph theory, you could try treating the grid as a directed graph and use a cycle finding algorithm on it. If not, try and come up with your own algorithm. [I wrote a tool for you to generate random inputs](http://jsfiddle.net/Quackmatic/s976w08c/2/). If you find (or make) a cool loop in an input, post it here!

# Bonus

Notice how the path length will always be an even number if the arrows do not wrap around? Try to explain why. Food for thought.