# Getting out of check

Wednesday's challenge 2 (listing pieces that have black king in check) was pretty hard, but getting that one will get you through 2/3rds of this challenge.
A good source of puzzles is this [site](https://www.sparkchess.com/chess-puzzles.html), and the first one is this first challenge:
```
  toascii'1r3rkR/1pnnq1b1/p1pp2B1/P2P1p2/1PP1pP2/2B3P1/5PK1/2Q4R'
.r...rkR
.pnnq.b.
p.pp..B.
P..P.p..
.PP.pP..
..B...P.
.....PK.
..Q....R
```
In this position the black king is in check by the rook at *h8*. There is only one legal move to get out of this one. But in general, the algorithm to get out of check is:

1. If 2 pieces are "checking" the king, then the king must move.
2. If 1 piece is checking, then capturing that piece also removes the check.
3. if 1 piece is checking and it is a queen, rook or bishop, then putting a piece in between the king and checker gets out of check.

It is perfectly reasonable also to try all possible moves filtered by those that result in not being in check anymore. If there is no legal move to get out of check then the condition is called mate, and that side has lost.

For the purpose of these challenges, you do not need to consider castling, 2 space pawn moves, en-passant capture, or pawn promotion. All positions are white to move first, and white is the one looking to check and mate, and black the one running away.

\** what move gets black out of check \**

#Finding a move that causes check

This position is one move prior to last one.
```
 toascii'1r3rk1/1pnnq1bR/p1pp2B1/P2P1p2/1PP1pP2/2B3P1/5PK1/2Q4R'
.r...rk.
.pnnq.bR
p.pp..B.
P..P.p..
.PP.pP..
..B...P.
.....PK.
..Q....R
┌─┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│8│     │@...@│     │.....│     │@...@│  @  │.....│
│ │     │@@@@@│     │.....│     │@@@@@│@@@@@│.....│
│ │     │.@@@.│     │.....│     │.@@@.│ @@@ │.....│
│ │     │.@@@.│     │.....│     │.@@@.│@@@@@│.....│
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│7│.....│     │.@@@.│ @@@ │@.@.@│     │..@..│O   O│
│ │.....│  @  │@@@@.│@@@@ │@@@@@│     │.@@@.│OOOOO│
│ │.....│  @  │..@..│  @  │.@@@.│     │..@..│ OOO │
│ │.....│ @@@ │@@@@.│@@@@ │@...@│     │..@..│ OOO │
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│6│     │.....│     │.....│     │.....│  O  │.....│
│ │  @  │.....│  @  │..@..│     │.....│ OOO │.....│
│ │  @  │.....│  @  │..@..│     │.....│  O  │.....│
│ │ @@@ │.....│ @@@ │.@@@.│     │.....│  O  │.....│
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│5│.....│     │.....│     │.....│     │.....│     │
│ │..O..│     │.....│  O  │.....│  @  │.....│     │
│ │..O..│     │.....│  O  │.....│  @  │.....│     │
│ │.OOO.│     │.....│ OOO │.....│ @@@ │.....│     │
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│4│     │.....│     │.....│     │.....│     │.....│
│ │     │..O..│  O  │.....│  @  │..O..│     │.....│
│ │     │..O..│  O  │.....│  @  │..O..│     │.....│
│ │     │.OOO.│ OOO │.....│ @@@ │.OOO.│     │.....│
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│3│.....│     │..O..│     │.....│     │.....│     │
│ │.....│     │.OOO.│     │.....│     │..O..│     │
│ │.....│     │..O..│     │.....│     │..O..│     │
│ │.....│     │..O..│     │.....│     │.OOO.│     │
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│2│     │.....│     │.....│     │.....│  O  │.....│
│ │     │.....│     │.....│     │..O..│OOOOO│.....│
│ │     │.....│     │.....│     │..O..│ OOO │.....│
│ │     │.....│     │.....│     │.OOO.│OOOOO│.....│
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│1│.....│     │O.O.O│     │.....│     │.....│O   O│
│ │.....│     │OOOOO│     │.....│     │.....│OOOOO│
│ │.....│     │.OOO.│     │.....│     │.....│ OOO │
│ │.....│     │O...O│     │.....│     │.....│ OOO │
├─┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ │a    │b    │c    │d    │e    │f    │g    │h    │
└─┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
```
here it is white's turn to play, and there are 3 moves that will result in check.

The most general recommended strategy is to try all possible moves, but for complete possibilities.

1. The positions that a king would be in check by a specific type of piece that a such a piece can move to. Intersection of those 2 sets for each piece type.
2. In the case of a Queen, Bishop or Rook, if the piece is already in the same row, column or diagonal as the king, and there is only 1 piece between the 2, and that piece is white (attacker's colour) then moving that piece out of the way will result in check. This is the only case that can result in double check on the king.

\** what 3 (white) moves gets black into check \**

#Chess puzzle solver

By repeatedly playing white and black sides in a breadth first search until a mate is forced, the shortest move sequence until mate can be found.

All of these solutions have check moves by white.

**Sample input**

`1r3rk1/1pnnq1bR/p1pp2B1/P2P1p2/1PP1pP2/2B3P1/5PK1/2Q4R`

3 check options, 1 black reply line. mate in 2.

**Sample output**
```
h7-h8 g7-h8 h1-h8
```

**challenge inputs**
```
1r3k2/2n1p1b1/3p2QR/p1pq1pN1/bp6/7P/2P2PP1/4RBK1
```
solution has 5 check options, 2 reply lines

```
r2q1k1r/ppp1bB1p/2np4/6N1/3PP1bP/8/PPP5/RNB2RK1
```
solution has 10 check options, 1 reply line

```
1k1r4/3b1p2/QP1b3p/1p1p4/3P2pN/1R4P1/KPPq1PP1/4r2R
```
solution has 4 check options 1 reply line

```
r2r1n2/pp2bk2/2p1p2p/3q4/3PN1QP/2P3R1/P4PP1/5RK1
```
solution has 9 check options, 1 reply line

#Bonus: Forcing moves that are not check.

As long as the opponent cannot place you in check, and you would be able to check opposing king on next move, then your side (white) still has the initiative.
For these problems all legal moves for white can be considered. But a good filtering criteria would be moves where if white could play again (without Black's response turn) that a mate could be forced in a short time (with consecutive checks).

**inputs**
```
r2qrb2/p1pn1Qp1/1p4Nk/4PR2/3n4/7N/P5PP/R6K
```

Thanks to [/u/szerlok](https://www.reddit.com/u/szerlok) for this Challenge idea. If you have ideas for challenges, visit [/r/dailyprogrammer_ideas](https://www.reddit.com/r/dailyprogrammer_ideas)
