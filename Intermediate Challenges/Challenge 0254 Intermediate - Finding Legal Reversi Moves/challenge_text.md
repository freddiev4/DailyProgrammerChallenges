# Description

The game of Reversi (or Othello) is a color flipping strategy game played between two players. It's played on an 8x8 uncheckered board. In each turn, the player must place a new chip on the game board. The chip must be placed in a currently empty square. The other requirement is that it be placed so that one or more of their opponent's chips lie between the empty square and another chip of the player's color. That is, the player placing a black chip must place it on an empty square with one or more white chips in a row - vertical, horizontal, or diagonal - between it and another black chip.

The object of the game is to have the majority of disks turned to display your color when the last playable empty square is filled.

Today's challenge is to review a game in progress and indicate legal moves for the next player. 

# Input Description

You'll be given a row with a single letter, `X` or `O`, denoting the player whose move it is. Then you'll be given the board as an 8x8 grid, with a dash `-` for an open square and an `X` or an `O` for a space occupied by that piece. Example:

    X
    --------
    --------
    --------
    ---OX---
    ---XO---
    --------
    --------
    --------

# Output Description

Your program should indicate the quantity of moves for that piece and then draw where they could be, indicated using a star `*`. Example

    4 legal moves for X
    --------
    --------
    ---*----
    --*OX---
    ---XO*--
    ----*---
    --------
    --------

# Challenge Input

    O
    --------
    --------
    ---O----
    --XXOX--
    ---XOO--
    ----X---
    --------
    --------

    X
    --------
    --------
    ---OX---
    --XXXO--
    --XOO---
    ---O----
    --------
    --------

# Challenge Output

    11 legal moves for O
    --------
    --------
    --*O-**-
    -*XXOX*-
    -**XOO--
    --**X---
    ---**---
    --------

    12 legal moves for X
    --------
    --***---
    --*OX---
    --XXXO*-
    --XOO**-
    --*O**--
    ---**---
    --------

# Note

For an interesting discussion of such algorithms, see the Wikipedia page on [computer Othello](https://en.wikipedia.org/wiki/Computer_Othello). An 8x8 board has nearly 10^28 legal moves in a game tree possible! One of the first computer Othello programs was published in 1977, written in FORTRAN. 