This week I'll be posting a series of challenges on graph theory. I picked a series of challenges that can help introduce you to the concepts and terminology, I hope you find it interesting and useful. 

# Description

In graph theory, the *degree* of a node is the number of edges coming into it or going out of it - how connected it is. For this challenge you'll be calculating the degree of every node. 

# Input Description

First you'll be given an integer, *N*, on one line showing you how many nodes to account for. Next you'll be given an undirected graph as a series of number pairs, *a* and *b*, showing that those two nodes are connected - an edge. Example:

    3 
    1 2
    1 3

# Output Description

Your program should emit the degree for each node. Example:

    Node 1 has a degree of 2
    Node 2 has a degree of 1
    Node 3 has a degree of 1

# Challenge Input

This data set is an social network of tribes of the Gahuku-Gama alliance structure of the Eastern Central Highlands of New Guinea, from Kenneth Read (1954). The dataset contains a list of all of links, where a link represents signed friendships between tribes. It was downloaded from [the network repository](http://networkrepository.com/soc_tribes.php). 

    16
    1 2
    1 3
    2 3
    1 4
    3 4
    1 5
    2 5
    1 6
    2 6
    3 6
    3 7
    5 7
    6 7
    3 8
    4 8
    6 8
    7 8
    2 9
    5 9
    6 9
    2 10
    9 10
    6 11
    7 11
    8 11
    9 11
    10 11
    1 12
    6 12
    7 12
    8 12
    11 12
    6 13
    7 13
    9 13
    10 13
    11 13
    5 14
    8 14
    12 14
    13 14
    1 15
    2 15
    5 15
    9 15
    10 15
    11 15
    12 15
    13 15
    1 16
    2 16
    5 16
    6 16
    11 16
    12 16
    13 16
    14 16
    15 16

# Challenge Output

    Node 1 has a degree of 8
    Node 2 has a degree of 8
    Node 3 has a degree of 6
    Node 4 has a degree of 3
    Node 5 has a degree of 7
    Node 6 has a degree of 10
    Node 7 has a degree of 7
    Node 8 has a degree of 7
    Node 9 has a degree of 7
    Node 10 has a degree of 5
    Node 11 has a degree of 9
    Node 12 has a degree of 8
    Node 13 has a degree of 8
    Node 14 has a degree of 5
    Node 15 has a degree of 9
    Node 16 has a degree of 9

# Bonus: Adjascency Matrix

Another tool used in graph theory is an *adjacency matrix*, which is an *N* by *N* matrix where each *(i,j)* cell is filled out with the degree of connection between nodes *i* and *j*. For our example graph above the adjacency matrix would look like this:

    0 1 1
    1 0 0
    1 0 0

Indicating that node 1 is connected to nodes 2 and 3, but nodes 2 and 3 do not connect. For a bonus, create the adjacency matrix for the challenge graph. 
