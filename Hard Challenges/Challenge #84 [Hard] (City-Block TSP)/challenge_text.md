Like many people who program, I got started doing this because I wanted to learn how to make video games.  

As a result, my first ever 'project' was also my first video game.  It involved a simple text adventure I called "The adventure of the barren moor"

In this text adventure, there are N (<=10) 'interest points' on an infinite 2-D grid.  The player (as described in the 'easy' challenge) can move one unit at a time on this grid towards one of these interest points.
The interest point they are told to move to is chosen at random.  They also start at a random interest point.   It is important to note that the player cannot move diagonally in any sense, the player must move parallel to one of the axis.

Given a set of interest points specified as 2-D integer coordinates, what is the minimum number of steps a player could take to get to them all and win the game?  (order doesn't matter).   
What is the maximum number of steps?  Assume the player heads optimally towards whichever interest point is randomly chosen until he gets it.

For reference, my solution produces a maximum of 1963 steps and a minimum of 617 steps on this input:

    62 -67
    4 -71
    -86 71
    -25 -53
    -23 70
    46 -34
    -92 -62
    -15 89
    100 42
    -4 43


EDIT:  To clarify this a bit, what I mean is that you want to find the 'best possible game' and 'worst possible game'.   So this min/max is over all possible starting locations.  Also, you do not have to get back to the starting point.
