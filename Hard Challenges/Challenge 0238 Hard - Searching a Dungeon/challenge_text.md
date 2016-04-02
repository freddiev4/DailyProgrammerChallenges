# Description

Our hero is lost in a dungeon. You will be given ASCII maps of a few floors, her starting position, and her goal. On some floors there are holes in the ground/roof, so that you can move between floors. Some only open one way, so going up doesn't guarantee that you can thereafter go down.

Your goal is to paint the path the hero takes in the dungeon to go from their starting position to the goal.

# Input Description

There are a few characters used to build the ASCII map.

'#' means wall. You cannot go here

' ' means empty. You can go here from adjacent positions on the same floor.

'S' means start. You start here

'G' means goal. You need to go here to find the treasure and complete the challenge!

'U' means up. You can go from floor 'n' to floor 'n+1' here.

'D' means down. You can go from floor 'n' to floor 'n-1' here.

Your output is the same as the input, but with '*' used to paint the route.

The route has to be the shortest possible route.

Lower floors are printed below higher floors

Example input:

    #####
    #S# #
    # # #
    #D#G#
    #####

    #####
    #  U#
    # ###
    #  ##
    #####

# Output Description

Your program should emit the levels of the dungeon with the hero's path painted from start to goal. 

Example output:

    #####
    #S#*#
    #*#*#
    #D#G#
    #####

    #####
    #**U#
    #*###
    #* ##
    #####

(It doesn't matter whether you paint over U and D or not)

# Challenge input

(if you want to, you may use the fact that these floors are all 10x10 in size, as well as there being 4 floors, by either putting this at the top of your input file, or hardcoding it)

    ##########
    #S###    #
    #   # ####
    ### # #D##
    #   # # ##
    #D# # # ##
    ###     ##
    ### ### ##
    ###     ##
    ##########

    ##########
    #   #   D#
    #     ####
    ###   # ##
    #U#   # ##
    # #    D##
    ##########
    #       ##
    #D# # # ##
    ##########

    ##########
    #        #
    # ########
    # #U     #
    # #      #
    # ####   #
    #    #####
    #### ##U##
    # D#    ##
    ##########

    ##########
    #        #
    # ###### #
    # #    # #
    # # ## # #
    # #  #   #
    # ## # # #
    # ##   # #
    #  #####G#
    ##########

# Credit

This challenge was suggested by /u/Darklightos. If you have any challenge ideas, please share them on /r/dailyprogrammer_ideas and there's a good chance we'll use it.
