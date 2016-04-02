#Credit:

Thanks to /u/skeeto for this challenge. As posted on our /r/dailyprogrammer_ideas subreddit.

#Description:

There's a tile puzzle game you might find at your local game store. There are 9 tiles to be arranged in a 3x3 grid. Each of a tile's contains half of some image, to be met up with the appropriate half on another tile. The images are usually animals (cats, beetles). There are 4 kinds of images in total. For example, here's a picture of completed puzzle.

* (http://i.imgur.com/NbLum43.jpg)

Your task is to write a program that finds solutions to a given set of tiles.

#Formal Input Description:

On standard input you'll be given a number, n, indicating the size of the side of the puzzle. For example, for a 3x3 puzzle n = 3. What will follow are n * n lines of 4 letters indicating the edges of each tile. The order of the edges is north, east, south, west (clockwise). Your program should be able to handle up to n = 5.
Instead of images, we'll use the 4 colors Cyan, Magenta, Yellow, and Black (CMYK). The two "halves" are uppercase and lower case. For two tiles to legally touch, an uppercase letter can only touch its lowercase matchin letter on an adjacent tile and vice versa.
For the sake of communication, [ the tiles will be labeled A-Z] (http://i.imgur.com/pnVvQ8L.jpg) in the order that they were input. So on a 3x3 puzzle, the tiles are A-I.

#Formal Output Description:

This is where you can get creative. The simplest output could just list the tiles, left to right, top to bottom, and their orientations (N, E, S, W). Or if you're feeling ambitious, output an image showing the completed tile arrangement. For a 3x3 puzzle, there are over 95 billion possible such arrangements (9! * 4^9), though all but a handful of them will be illegal.


You may output just one solution or all solutions. Keep symmetry in mind.

#Sample Input 1

    3
    CYMk
    CmKm
    cKyM
    cYkY
    CMky
    ckyM
    CYMK
    CMKy
    CkmY

This corresponds to these tiles:

* (http://i.imgur.com/eok9gTt.png)

With these graphics, half circles must be matched up with half squares of the same color. The solution should look like those [cannon bullet things from Super Mario.] (http://i.imgur.com/etCrWXi.jpg)

#Sample Input 2

    3
    ycKC
    kKcY
    cKMc
    mYmk
    CCYk
    mMyC
    MyYk
    mKMy
    YCMk

#Sample Output 1

Simplest output showing one solution:

    AN CW GE BW FE DS HE IS EN

A more graphical output (same solution):

    +---------+
    | C  M  Y |
    |kAYyCcCGM|
    | M  K  K |
    | m  k  k |
    |KBCcFyYDY|
    | m  M  c |
    | M  m  C |
    |CHKkIYyEM|
    | y  C  k |
    +---------+

Or drawing the solution:

* (http://i.imgur.com/GJh2eOI.png)

#Challenge Input #1:

    4
    mcYC
    MmCk
    yYcm
    yMYC
    Ykcy
    kkkm
    KKcy
    KMYK
    YMkk
    ymKc
    MyMK
    CmmY
    kMMY
    yCCM
    yccc
    kcck

Graphical version (if this helps):

* (http://i.imgur.com/mpO8HGJ.png)

#Challenge Input #2:

    5
    cKCk
    yYcc
    YcCK
    kKCM
    CMKc
    cKYC
    kYcm
    KYyY
    Mccm
    yKcm
    mykK
    MMCm
    ckYC
    ycmm
    MmKM
    kymc
    KMMK
    KcyM
    kYck
    YCKM
    myYm
    kYyY
    CMKM
    yYCM
    YKyk


Graphical version:

* (http://i.imgur.com/Msa9F6G.png)

