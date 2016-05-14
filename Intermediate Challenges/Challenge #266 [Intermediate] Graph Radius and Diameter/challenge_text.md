This week I'll be posting a series of challenges on graph theory. I picked a series of challenges that can help introduce you to the concepts and terminology, I hope you find it interesting and useful.


# Description

Graph theory has a relatively straightforward way to calculate the *size* of a graph, using a few definitions:

* The eccentricity *ecc(v)* of vertex (aka node) *v* in graph *G* is the greatest distance from *v* to any other node.
* The radius *rad(G)* of *G* is the value of the smallest eccentricity.
* The diameter *diam(G)* of *G* is the value of the greatest eccentricity.
* The center of *G* is the set of nodes *v* such that *ecc(v)*=*rad(G)*

So, given a graph, we can calculate its size.

# Input Description

You'll be given a single integer on a line telling you how many lines to read, then a list of *n* lines telling you nodes of a *directed* graph as a pair of integers. Each integer pair is the source and destination of an edge. The node IDs will be stable. Example:

    3
    1 2
    1 3
    2 1

# Output Description

Your program should emit the radius and diameter of the graph. Example:

    Radius: 1
    Diameter: 2

# Challenge Input

    147
    10 2
    28 2
    2 10
    2 4
    2 29
    2 15
    23 24
    23 29
    15 29
    15 14
    15 34
    7 4
    7 24
    14 2
    14 7
    14 29
    14 11
    14 9
    14 15
    34 15
    34 14
    34 29
    34 24
    34 11
    34 33
    34 20
    29 23
    29 7
    29 2
    29 18
    29 27
    29 4
    29 13
    29 24
    29 11
    29 20
    29 9
    29 34
    29 14
    29 15
    18 27
    18 13
    18 11
    18 29
    27 18
    27 4
    27 24
    4 2
    4 27
    4 13
    4 35
    4 24
    4 20
    4 29
    13 18
    13 16
    13 30
    13 20
    13 29
    13 4
    13 2
    24 4
    24 30
    24 5
    24 19
    24 21
    24 20
    24 11
    24 29
    24 7
    11 18
    11 24
    11 30
    11 33
    11 20
    11 34
    11 14
    20 29
    20 11
    20 4
    20 24
    20 13
    20 33
    20 21
    20 26
    20 22
    20 34
    22 34
    22 11
    22 20
    9 29
    9 20
    21 9
    21 20
    21 19
    21 6
    33 24
    33 35
    33 20
    33 34
    33 14
    33 11
    35 33
    35 4
    35 30
    35 16
    35 19
    35 12
    35 26
    30 13
    30 19
    30 35
    30 11
    30 24
    16 36
    16 19
    16 35
    16 13
    36 16
    31 16
    31 19
    5 19
    19 30
    19 16
    19 5
    19 35
    19 33
    19 24
    12 33
    12 35
    12 3
    12 26
    26 21
    26 35
    6 21
    6 19
    1 6
    8 3
    8 6
    3 8
    3 6
    3 12
    3 35
    33 29
    29 33
    14 33
    29 21

# Challenge Output

    Radius: 3
    Diameter: 6

** NOTE ** I had mistakenly computed this for an _undirected_ graph which gave the wrong diameter. It should be 6. 