**Description**

[Rummikub](https://en.wikipedia.org/wiki/Rummikub) is a game consisting of 104 number tiles and two joker tiles. The number tiles range in value from one to thirteen, in four colors (we pick black, yellow, red and purple). Each combination of color and number is represented twice.

Players at start are given 14 random tiles. The main goal of the game is playout all the tiles you own on the field.

You either play your tiles on the field in *Groups* or *Runs*. All sets on the field need to consist of at least 3 tiles.

 - *Groups* are tiles consiting of the same number and having different colors. The biggest *group* you can make is one of 4 tiles (1 each color).
 - *Runs* are tiles of the same color numbered in consecutive number order. You can't have a gap between 2 numbers (if this is the case and both sets have 3 or more tiles it is considered 2 runs)

This challenge is a bit more lengthy, so I'll split it into 2 parts. 


**Part I: Starting off**

To start off you need to play 1 or more sets where the total sum of the tiles are above 30. You can't use the jokers for the start of the game, so we will ingore them for now.

E.G.:

    Red 10, Purple 10, Black 10

or
  
    Black 5, Black 6, Black 7, Black 8
    Yellow 2, Purple 2, Red 2

Are vallid plays to start with.

The first one is a *group* with the sum of 30, the second one is a combination of a *run* (26) and a *group* (6) that have the combined sum of 32.

For the first part of the challenge you need to search the set tiles and look for a good play to start with. If it is possible show the play, if not just show `Impossible`.

*Input*

    P12 P7 R2 R5 Y2 Y7 R9 B5 P3 Y8 P2 B7 B6 B8

*Output*

    B5 B6 B7 B8
    Y2 P2 R2


*Input*

    P7 R5 Y2 Y13 R9 B5 P3 P7 R3 Y8 P2 B7 B6 B12

*Output*

    Impossibe

As you see the input is not in any specific order.

You can generate more [here](https://dotnetfiddle.net/gQQTdT)

**Part II: Grab tiles till we can play**

Now you create a tilebag that would give you random tiles until you can make a set of to start the game off.

The second input gives an `Impossible` as result, so now we need to add tiles till we can start the game.

*Input*

    P7 R5 Y2 Y13 R9 B5 P3 P7 R3 Y8 P2 B7 B6 B12

*Possible output*

    Grabbed:
    B13
    Y3
    B10
    R1
    B11

    Found set:
    B10 B11 B12 B13

Formatting is totaly up to you.

**Bonus**

Always shows the *best* set to play if you have multiple.

The *best* set is the set consisting of the most tiles, not the highest score.

**Finally**

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas