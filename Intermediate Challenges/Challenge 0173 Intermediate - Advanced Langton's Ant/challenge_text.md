# [](#IntermediateIcon) _(Intermediate)_: Advanced Langton's Ant

If you've done any work or research onto cellular automata, you may have heard of [Langton's Ant](http://en.wikipedia.org/wiki/Langton%27s_ant). It starts with a grid similar to that of [Conway's Game of Life](http://www.reddit.com/r/dailyprogrammer/comments/271xyp/) where a grid cell can be black or white, however this time we have an 'ant' on it. This little metaphorical ant will follow these four rules at every 'step':

* If the current square is white, turn the ant 90' clockwise
* If the current square is black, turn the ant 90' anticlockwise
* Flip the colour of the current square
* Move forward (from the ant's perspective) one cell

With the following starting conditions:

* All cells start white
* The ant starts pointing north

However, being /r/DailyProgrammer, we don't do things the easy way. Why only have 2 colours, black or white? Why not as many colours as you want, where you choose whether ant turns left or right at each colour? Today's challenge is to create an emulator for such a modifiable ant.

If you have more than 2 colours, of course, there is no way to just 'flip' the colour. Whenever the ant lands on a square, it is to change the colour of the current square to the next possible colour, going back to the first one at the end - eg. red, green, blue, red, green, blue, etc. In these cases, at the start of the simulation, all of the cells will start with the first colour/character.
    
## Input Description

You will be given one line of text consisting of the characters 'L' and 'R', such as:

    LRLRR

This means that there are 5 possible colours (or characters, if you're drawing the grid ASCII style - choose the colours or characters yourself!) for this ant.

In this case, I could choose 5 colours to correspond to the LRLRR:

* White, turn left (anticlockwise)

* Black, turn right (clockwise)

* Red, turn left (anticlockwise)

* Green, turn right (clockwise)

* Blue, turn right (clockwise)

You could also choose characters, eg. `' '`, `'#'`, `'%'`, `'*'`, `'@'` instead of colours if you're ASCII-ing the grid. You will then be given another line of text with a number **N** on it - this is the number of 'steps' to simulate.

## Output Description

You have some flexibility here. The bare minimum would be to output the current grid ASCII style. You could also draw the grid to an image file, in which case you would have to choose colours rather than ASCII characters. I know there are some people who do these sorts of challenges with C/C++ curses or even more complex systems.

# Notes

[More info on Langton's Ant with multiple colours.](http://en.wikipedia.org/wiki/Langton%27s_ant#Extension_to_multiple_colors)