# [](#HardIcon) _(Hard)_: Reverse Maze Pathfinding 

We recently saw a maze traversal challenge, where the aim is to find the path through the maze, given the start and end point. Today, however, we're going to do the reverse. You'll be given the maze, and the path from point A to point B as a series of steps and turns, and you'll need to find all the potential candidates for points A and B.

# Formal Inputs and Outputs

## Input Description

You'll first be given a number **N**, which is the number of lines of maze to read. Next, read a further **N** lines of input, containing the maze - a space character describes a place in the maze, and any other non-whitespace character describes a wall. For example:

    6
    xxxxxxxxx
    x   x   x
    x x x x x
    x x x x x
    x x   x x
    xxxxxxxxx

Is exactly equivalent to:

    6
    ERTY*$TW*
    f   &   q
    @ " @ ` w
    ' : ; { e
    # ^   m r
    topkektop

(the width of the maze might be anything - you might want to detect this by looking at the width of the first line.)

Finally, you'll be given the path through the maze. The path is contained on a single line, and consists of three possible moves:

* Turn left, represented by the letter `l`.
* Turn right, represented by the letter `r`.
* Move forward *n* spaces, represented by *n*.

An example path might look like `3r11r9l2rr5`, which means to move forward 3 times, turn right, move forward 11 times, turn right, move forward 9 times, turn left, move forward twice, turn right twice and then move forward 5 times. **This path may start pointing in any direction.**

## Output Description

Output the set of possible start and end points, like so: (this example doesn't correspond to the above sample maze.)

    From (0, 0) to (2, 4)
    From (2, 4) to (0, 0)
    From (3, 1) to (5, 5)

This means that, if you were to travel from any of the given start points to the corresponding end point, the path you take (with the correct initial facing direction) will be the one given in the input.

(Where `(0, 0)` is the top-left corner of the maze.)

# Sample Inputs and Outputs

## Sample 1

### Input

    5
    xxx
    x x
    x x
    x x
    xxx
    2rr2ll2

### Output

    From (1, 3) to (1, 1)
    From (1, 1) to (1, 3)

## Sample 2

### Input

    9
    xxxxxxxxx
    x       x
    xxx x x x
    x   x x x
    xxx xxx x
    x     x x
    x xxx x x
    x       x
    xxxxxxxxx
    2r2r2

### Output

    From (3, 7) to (3, 5)
    From (7, 5) to (5, 5)
    From (3, 5) to (3, 7)
    From (5, 3) to (7, 3)
    From (3, 3) to (5, 3)
    From (1, 3) to (1, 5)
    From (1, 1) to (1, 3)

## Sample 3

### Input

    5
    xxxxxxxxx
    x   x   x
    x x x x x
    x   x   x
    xxxxxxxxx
    2r2r2

### Output

    From (7, 3) to (7, 1)
    From (5, 3) to (7, 3)
    From (3, 3) to (3, 1)
    From (1, 3) to (3, 3)
    From (7, 1) to (5, 1)
    From (5, 1) to (5, 3)
    From (3, 1) to (1, 1)
    From (1, 1) to (1, 3)

## Sample 4

### Input

    5
    xxxxxxx
    x   x x
    x x x x
    x x   x
    xxxxxxx
    1l2l2

### Output

    From (3, 2) to (1, 3)
    From (3, 2) to (5, 1)

## Sample 5

This is a large maze, so the input's on Gist instead.

### [Input](https://gist.githubusercontent.com/Quackmatic/6119dc82b3cfda54f072/raw/maze-mega.txt)

### Output

    From (1, 9) to (9, 5)
    From (137, 101) to (145, 97)
    From (169, 53) to (173, 61)
    From (211, 121) to (207, 113)
    From (227, 33) to (219, 37)

## Sample 6

This is another large one.

### [Input](https://gist.githubusercontent.com/Quackmatic/7c548fbe4ccff2c08b5f/raw/maze-long.txt)

### [Output](https://gist.githubusercontent.com/Quackmatic/c1361bcebfdd50874f20/raw/maze-long-out.txt)

Each line of your solution's output for this input should be repeated 4 times, as the path is fully symmetrical.

# Notes

Remember that you can start a path facing in any of four directions, so one starting point might lead to multiple ending points if you start facing different directions - see sample four.