# [](#IntermediateIcon) _(Intermediate)_: It's Go time!

[Go](https://en.wikipedia.org/wiki/Go_\(game\)) is a board game involving placing black and white stones on a grid. Two opponents take turns to place stones; one player places white stones, the other black. Stones of the same colour form a *group*, as long as they're all connected via the cardinal axes. The leftmost pair of stones (represented by `#`) below are valid groups, and the rightmost pair are not.

    #      ###   #     ##  
    ###    # #   #      ##  
     ##    ###    ##      ## 
      #     #      #       ##

Now, when a player places stones such that a group of the opponent's colour is touching no more open spaces (*liberties*), then that group is removed from play. The edges of the board do **not** count as open spaces. Let the black stones be represented by `b` and white stones by `w`. Here, the player plays as the black stones.

    bbbbb
     wwwb
    bwbwb
     bbbb

Let `B` be the stone I place in the next turn. If I place the stone here:

    bbbbb
    Bwwwb
    bwbwb
     bbbb

The white group is entirely enclosed by the black group, and so the white group is removed from play.  
If a situation were to arise where both your own and your opponent's stones would be removed, your opponent's stones would be removed first, and then (only if your stones still need to be removed) your own stones would be removed.

*Liberties* don't need to be outside of the group; they can be inside the group, too. These are called *eyes*. Here, the white group survives, as it has the eye:

     bbbbb
    bbwwwwb
    bww wb
     bwwwwb
      bbbbb

Your challenge today is to determine the location on the board which, when a stone of your own colour is placed there, will remove the greatest number of your opponent's stones.

# Formal Inputs and Outputs

## Input Description

You will be given the size of the grid as a width and a height. Next, you will be given the player's colour - either `b` or `w`. Finally, you will be given a grid of the appropriate dimensions, using the format I used in the Description: spaces for empty grid regions, and `b` and `w` for stones of either colour.

## Output Description

Output the co-ordinate of the location which, if you were to place a stone of your own colour there, would result in the greatest number of your opponent's stones being removed. The top-left corner is location `(0, 0)`.

# Sample Inputs and Outputs

### Input

    7 5
    b      
     bbbbb 
    bbwwwwb
    bww wb 
     bwwwwb
      bbbbb

### Output

    (3, 2)

### Input

    9 11
    w
        ww   
      wwbbbw 
      wbbbbw 
     wwbbbbw 
     wwwwwww 
     wbbbbww 
     wbwbbww 
     wbwbbww 
     wwwbbww 
        wbw  
        w    

### Output

    (5, 10)

### Input

    7 7
    w
    w w w w
     bbbbb 
    wbbbbbw
     bbbbb 
    wbbbbbw
     bbbbb 
    w w w w

### Output

    No constructive move

## Sample 4

### Input

    4 3
    b
     bw 
    bw w
     bw 

### Output

    (2, 1)

## Sample 5

(thanks to /u/adrian17)

### Input

    7 5
    b
     bb bb 
    bww wwb
     bbbbb 
    bwwwb  
     bb    

### Output

    (3, 1)

# Notes

I apologise beforehand to any Go players for presenting such unrealistic scenarios!

Got any cool challenge ideas? Post them to /r/DailyProgrammer_Ideas!