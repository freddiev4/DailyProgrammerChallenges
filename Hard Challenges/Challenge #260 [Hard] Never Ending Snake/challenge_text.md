# Description
Sleether Yn is a neverending snake, and like all neverending snakes, she loves drinking neverending soda and eating baloney. She also hates walking (err, creeping) -- which probably has to do with the fact that her body **grows whenever she moves**. Your goal is give Yn instructions to **eat all the food** on the map, while **moving as little as possible**. On map 1, for instance, you could just tell her: "**r2d2**", for "move right twice and down twice" (she can't move diagonally). You might also say "rrdd", if you prefer.

    +- map 1 --+
    | s        |
    |          |
    |   *      |
    +----------+

On map 2, though, you could either instruct her "r5d2l2" or "d2r3r2u2"; both are equally good, with 9 moves each. You could not tell her "r3d2u2r2", though, because she whould **crash against herself** when going "u2" -- life is hard when you're an neverending snake!

    +- map 2 --+
    | s    *   |
    |          |
    |    *     |
    +----------+

But as if Yn didn't have enough problems already, she still has to worry about the neverending pits! Believe me, you do not want to fall in one. So on map 3, for instance, she has to do something like "d3r3u1l2u3r5d" (17 moves). Whew!

    +- map 3 --+
    |          |
    | s OO  *  |
    |    OOO   |
    |    * OOOO|
    |          |
    +----------+

So let's recap: you can tell Sleether ("s") to go up ("u"), down ("d"), left ("l") or right ("r"). On each map, she must eat (go over) all baloney sandwiches ("\*"), while **avoiding her own trail** (including the initial square) and the neverending pits ("O").

# Input &amp; Output
**Input**: a map, like the ones described above; you can ignore the first and last lines (those with "+"s), and parse only the characters between the pipes ("|").

**Output**: a string with commands to solve the map.

Can you make a solver that finds instructions for maps 1 to 16?

    +- map 4 --+- map 5 --+- map 6 --+-- map 7 --+map 8+- map 9 ----+- map 10 -+
    |*         |     *    |      *   |      *  * |*   *|*O *  O O   | *     OO |
    |   OOO    |OO  *  *  |     *    | *O  OO*   | * * |      s*  O | O     **O|
    | s    *   | *  Os   *| *O    O *| s*    O   |  s  |     * O   O|  *   * sO|
    |OOOOOO    |  *    *  |OOO   *OOO| *OOO   O *| * * |          O |          |
    |*         |     *    | s       *|       * O |*   *|  O*  * O   |OO  OOO* O|
    +----------+----------+----------+-----------+-----+------------+----------+
    +- map 11 -+- map 12 -+- map 13 --+-- map 14 --+-- map 15 --+--- map 16 ---+
    |     sOO  |   O     O|    * *OO  |OO *      * |   *      OO|       *   *  |
    |**   * *  |  O   OO O|           | O    * O  O|*   O    ** |    O     *  O|
    |        O | O*   s*  |**O        |*   O  O*  *|O         O |  O     OO   *|
    |O*  *  OOO|*    *  * | *OsO   O  |O O *       |  *    *O O | s      *     |
    |*     OOO | O      OO|    *O OO  |O      OO s*|     **s O  |O O* O* OO    |
    +----------+----------+-----------+------------+------------+--------------+

# Notes
Also please share interesting maps you come up with, especially ones that your own solver cannot work around!

If you're stuck, [this](https://en.wikipedia.org/wiki/Maze_solving_algorithm) might help. If not, it's an interesting read anyway.

# Credit

This challenge was suggested by /u/alfred300p. Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas.