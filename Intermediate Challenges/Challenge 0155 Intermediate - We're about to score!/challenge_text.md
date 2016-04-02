# **Description**


One of the ways that chess games are tracked during play is to assign values to each piece and then look at the pieces that remain on the board for each player. After several moves where pieces have been taken, one can quickly determine who has an advantage.


Pieces are assigned standard valuations: 

* pawns are worth one point each. 
* Knights and bishops 3 points each
* A Rook is worth 5
* The Queen is worth 9 points.
* The Kings true value is infinite but you shouldn't need to worry about this

More info on chess values can be seen [HERE](http://en.wikipedia.org/wiki/Chess_piece_relative_value)


# **Input Description**

Each line of input will be given in standard chess algebraic notation: 

Here's a picture of the notation to give you an idea : [Image](http://home.comcast.net/~danheisman/images/Record_board.jpg)

* columns are given a-h and rows are given 1-8 (starting with white's back row). For reference the queens are on d1 (white) and d8 (black).
* Pieces (except for pawns) have a capital letter associated with them:

 King = K; Knight = N; Queen = Q; Rook = R; Bishop = B; None = pawns, they are just specified by their file. 
* Captures are marked with an "x": 

 e.g. "Qxe5" for "queen captures the piece on square e5"; pawn captures are given by file, for example "exd5". 

* Castling is indicated as such: O-O for kingside, O-O-O Queenside. Check is indicated by a "+" and checkmate is given by "mate" or "#". 

For more help on chess notation see [HERE](http://home.comcast.net/~danheisman/Articles/recording_chess.htm)

# **Formal Input Description**

Three values per line: move number, then white's move, then black's move using chess algebraic notation.

Example:

1. e4 e5          <-- White's pawn to e4, Black's pawn moves to e5
2. Nf3 Nc6       <-- White's Knight moves to f3, Black's Knight moves to c6
3. Bb5 Nf6       <-- White's Bishop moves to b5, Black's Knight moves to f6
4. d3 Bc5        <-- White's Pawn moves to d3, Black's Bishop moves to c5

etc...



# **Formal Output Description**

Your program should emit two values, one for white and one for black, at the end of the series of moves (for an incomplete game).

# **Sample Input**

This is actually Anand v Carlsen from the Zurich Chess Challenge 2014, round 5 play.

1. e4 e5
2. Nf3 Nc6
3. Bb5 Nf6
4. d3 Bc5
5. Bxc6 dxc6
6. h3 Nd7
7. Be3 Bd6
8. Nbd2 O-O
9. O-O Re8
10. Nc4 Nf8
11. d4 exd4
12. Qxd4 c5
13. Qd3 b6
14. Nxd6 Qxd6
15. Qxd6 cxd6
16. Rfd1 Bb7
17. Rxd6 Bxe4
18. Ne1 Rad8
19. Rad1 Ne6
20. Rxd8 Rxd8
21. Rxd8+ Nxd8
22. f3 Bd5
23. a3 Nc6
24. Kf2 f6
25. Nd3 Kf8
26. Ke2 Ke7
27. Kd2 Kd7
28. Nf4 Bf7
29. b3 Ne7
30. h4 Nd5

# **Sample output**

12-12

# **Challenge Input**

This is actually Aronian vs So from the 2014 76th Tata Steel Masters round 6. Aronian would go on to win.

1. c4 Nf6
2. Nf3 g6
3. Nc3 d5
4. cxd5 Nxd5
5. e4 Nxc3
6. bxc3 Bg7
7. Be2 c5
8. O-O Nc6
9. Qa4 Bd7
10. Qa3 Qa5
11. Rd1 O-O
12. Rb1 b6
13. d4 Qxa3
14. Bxa3 Bg4
15. dxc5 Bxc3
16. Ba6 Rab8
17. Rdc1 Bxf3
18. gxf3 Bd2
19. Rd1 Bc3
20. Kg2 bxc5
21. Bxc5 Bb4
22. Be3 Bd6
23. Rbc1 Nb4
24. Bc4 Rfc8
25. f4 Kf8
26. a3 Nc6
27. Ba6 Bxa3



# **Thanks**

Big thank you to /u/jnazario for the submission and for his stream of posts over at /r/dailyprogrammer_ideas
