#Description

This week all challenges will be inspired by the game [Flash Point](https://boardgamegeek.com/boardgame/100901/flash-point-fire-rescue)

The game is a fun cooperative game, where a bunch of fire(wo)men try to rescue victims in a burning building. 

Each round the fire is spreading, and it is this mechanic that we are going to implement.

#Formal Inputs & Outputs

##Input description

You recieve a floorplan of the building with the current situation on it. The floorplan is a grid and all tiles are connected vertically and horizontally. There is never ever a diagonally interaction.

 Here is the legend to what is what:

    S <- smoke
    F <- fire
    # <- wall
    | <- closed door
    / <- open door
    = <- damaged wall
    _ <- broken wall or broken door
      <- Open space (blank space)

After the floorplan you will recieve a bunch off coordinates ((0,0) is top left coord).

Each of these coordinates indicate where smoke developes. Depending on the tile it lands can have various outcomes:

    S -> S becomes F, smoke turns into fire
    F -> Nothing happens
    # -> invalid move
    | -> invalid move
    / -> invalid move
    = -> invalid move
    _ -> invalid move
      ->   becomes S, Smoke develops on a blank spot

Additional rules:

- Fire and smoke: When smoke is next to a fire itself turns into a fire
- Doors and broken walls: doors and broken walls (or broken doors) connect to spaces. This means that if smoke is at one side and fire at the other the smoke turns into fire


Small house:

    #############/#
    #     |       #
    #     #       #
    #     #       #
    #######       #
    #     _       #
    ###############


Small house Input

    1 1
    1 2
    1 3
    5 6
    4 2
    1 1
    1 2
    5 5
    5 5
    9 1
    5 7
    2 2


##Output description

Show the final Output


    #############/#
    #F    |  S    #
    #FF   #       #
    #F    #       #
    #######       #
    #    F_F      #
    ###############


#Bonus

##Explosions

When smoke is ~~set~~ applied to fire, an explosion happens.

To solve an explosion you need to look at the adjective tiles of where the explosion happend.

    S -> Impossible, should already be fire
    F -> Traverse in same direction until you do not have fire any more
    # -> Wall take damage and becomes =
    | -> Door is totaly broken and becomes _
    / -> Explosion passes trough and traverse in the same direction. The door lives
    = -> Wall is completely broken now and becomes _
    _ -> Explosion passes trough and traverse in the same direction
      -> The spot is set on fire and becomes F


Additional input for explosion, using the outcome of the small house

    1 7
    1 8
    1 9
    1 10
    1 8


Output:

    ########=####/#
    #F    _FFFFF  #
    #FF   # F     #
    #F    #       #
    #######       #
    #    F_F      #
    ###############


## Board game coordinates

The board game does not use the 'structural' tiles but only the open tiles. The stuctural tiles are used to descripe how two tiles are connected.

       1 2 3 4 5 6 7
      #############/#
    1 # . . | . . . #
      #.....#.......#
    2 # . . # . . . #
      #######.......#
    3 # . . _ . . . #
      ###############

    EG:
    (1,1) and (1,2) are directly connected
    (1,2) and (1,3) are connected by a wall 
    (3,3) and (4,3) are connected by a broken wall/door


Work out these Inputs

    1 1
    2 1
    3 1
    4 1
    2 2
    2 3
    2 3
    2 1 


Output: 

       1 2 3 4 5 6 7
      ###=#=#######/#
    1 =F.F.F_F. . . #
      #.....#.......#
    2 #F.F.F= . . . #
      ###=#=#.......#
    3 # . . _ . . . #
      ###############

## Do something fun with it

You can animate this, or do something else fun. Amuse me `:)`

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas


# Some feedback notes

Good morning everyone,

> A bit confused, you seem to write your input coordinates in (Y, X) rather than (X, Y). fx (1, 9), from non-bonus-input, which is outside the borders of the house in X-Y but inside in Y-X. Not a big thing to work around but quite ambiguous :P

This is a typon on my behalve, it is X Y. `5 7` was just to test you would ignore incorrect moves tough

> Does fire spread through closed doors? The description seems to imply yes but that doesn't make much sense...

No it doesn't. I should have made that more clear

> Smoke adjacent to fire turns to fire, but how is this applied? Does it only update once per turn, much like Conway's Game of Life, or does it automatically update and continue to transform all adjacent smoke until there is no more left?

All smoke adjective to fire is turned in the same turn, so it is possible to set a long corridor at fire at once if it is in smoke

