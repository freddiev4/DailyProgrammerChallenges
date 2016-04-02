
# [](#HardIcon) *(Hard)*: Snake-Fill
The snake-fill algorithm is a "fictional" algorithm where you must fill a given 2D board, with some minimal obstacles, with a "snake". This "snake" always starts in the top-left corner and can move in any directly-adjacent direction (north, east, south, west) one step at a time. This snake is also infinitely long: once it has moved over a tile on the board, the tile is "filled" with the snakes body. A snake cannot revisit a tile: it is unable to traverse a tile that it has already traversed. Essentially this is the same logic that controls a snake during a [game of snake](http://en.wikipedia.org/wiki/Snake_(video_game\)).

Your goal is to take a board definition, as described below, and then attempt to fill it as best as possible with a snake's body while respecting the snake's movement rules!

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
You will be first given two integers on a single line through standard input. They represent the width and height, respectively, of the board you are to attempt to fill. On the next line, you will be given an integer N, which represents the following N lines of obstacle definitions. Obstacles are pairs of integers that represent the X and Y coordinate, respectively, of an impassable (blocked) tile. Any impassable block does not allow snake movement over it. Note that the origin (0, 0) is in the top-left of the board, and positive X grows to the right while positive Y grows to the bottom. Thus, the biggest valid coordinate would be (Width - 1, Height - 1).
## Output Description
First, print the number of tiles filled and then the number of tiles total: do *not* count occluded (blocked) tiles. Remember, the more tiles filled by your snake, the more correct your solution is. Then, for each movement your snake has done in its attempt to fill the board, print the position is has moved to. This has to be listed in correct and logical order: one should be able to verify your solution by just running through this data again.
# Sample Inputs & Outputs
## Sample Input
[The following inputs generates this board configuration](http://i.imgur.com/WclGAwX.png). Note that the darker blocks are occluded (blocked) tiles.

    10 10
    5
    3 0
    3 1
    3 2
    4 1
    5 1
## Sample Output
Note: The following is dummy-data: it is NOT the correct solution from the above sample input. Blame nint22: he is a gentlemen whom is short on time.

    95 / 95
    0 0
    0 1
    1 1
    ... (See note)
# Challenge Input
None given
## Challenge Input Solution
None given
# Note
As per usual: this challenge may seem easy, but is quite complex as the movement rules limit any sort of "tricks" one could do for optimizations. Anyone who does some sort of graphical **and** animated version of their results get a +1 silver for their flair!
				