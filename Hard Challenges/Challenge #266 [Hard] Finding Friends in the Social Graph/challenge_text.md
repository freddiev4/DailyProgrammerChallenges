This week I'll be posting a series of challenges on graph theory. I picked a series of challenges that can help introduce you to the concepts and terminology, I hope you find it interesting and useful.

# Description

In all of our communities, we have a strong core of friends and people on the periphery of that core, e.g. people that we know that not everyone in that strong core knows. We're all familiar with these sorts of groups with the proliferation of Facebook and the like. These networks can be used for all sorts of things, such as recommender systems or detecting collusion. 

Today's challenge is to detect such an arrangement. In graph theory this is typically called a _clique_, and arises from a subgraph of _G_ where every node in the subgraph is connected to every other node (e.g. all possible pairwise combinations exist in the subgraph). Graphs may have multiple cliques, and may even have multiple distinct cliques of the largest size (e.g. multiple 4-cliques). 

For todays challenge: Given a social network graph identifying friendships, can you identify the largest strong group of friends who all know each other and are connected? 

# Input Description

On the first line you'll be given a single integer *N* telling you how many distinct nodes are in the graph. Then you'll be given a list of edges between nodes (it's an undirected graph, so assume if you see *a b* that *a* knows *b* and *b* knows *a*). Example:

    7
    1 2
    1 3
    2 3
    1 4
    1 6
    2 5
    2 7
    3 4
    3 5
    4 5 
    4 7
    4 6
    5 6
    5 7
    6 7

# Output Description

Your program should emit a list of all of the members of the largest group of friends. Example:

    4 5 6 7

If the graph has multiple, distinct friend groups of the same size, you can print all or any of them. 

# Challenge Input

About this data set, it's kind of interesting. I downloaded it from here http://networkrepository.com/soc.php .

    % The graph dolphins contains an undirected social network of frequent       
    % associations between 62 dolphins in a community living off Doubtful Sound, 
    % New Zealand, as compiled by Lusseau et al. (2003).  Please cite            
    %                                                                            
    %   D. Lusseau, K. Schneider, O. J. Boisseau, P. Haase, E. Slooten, and      
    %   S. M. Dawson, The bottlenose dolphin community of Doubtful Sound features
    %   a large proportion of long-lasting associations, Behavioral Ecology and  
    %   Sociobiology 54, 396-405 (2003).                                         
    %                                                                            
    % Additional information on the network can be found in                      
    %                                                                            
    %   D. Lusseau, The emergent properties of a dolphin social network,         
    %   Proc. R. Soc. London B (suppl.) 270, S186-S188 (2003).                   
    %                                                                            
    %   D. Lusseau, Evidence for social role in a dolphin social network,        
    %   Preprint q-bio/0607048 (http://arxiv.org/abs/q-bio.PE/0607048)

And here's the data set. 

    62
    11 1
    15 1
    16 1
    41 1
    43 1
    48 1
    18 2
    20 2
    27 2
    28 2
    29 2
    37 2
    42 2
    55 2
    11 3
    43 3
    45 3
    62 3
    9 4
    15 4
    60 4
    52 5
    10 6
    14 6
    57 6
    58 6
    10 7
    14 7
    18 7
    55 7
    57 7
    58 7
    20 8
    28 8
    31 8
    41 8
    55 8
    21 9
    29 9
    38 9
    46 9
    60 9
    14 10
    18 10
    33 10
    42 10
    58 10
    30 11
    43 11
    48 11
    52 12
    34 13
    18 14
    33 14
    42 14
    55 14
    58 14
    17 15
    25 15
    34 15
    35 15
    38 15
    39 15
    41 15
    44 15
    51 15
    53 15
    19 16
    25 16
    41 16
    46 16
    56 16
    60 16
    21 17
    34 17
    38 17
    39 17
    51 17
    23 18
    26 18
    28 18
    32 18
    58 18
    21 19
    22 19
    25 19
    30 19
    46 19
    52 19
    31 20
    55 20
    29 21
    37 21
    39 21
    45 21
    48 21
    51 21
    30 22
    34 22
    38 22
    46 22
    52 22
    37 24
    46 24
    52 24
    30 25
    46 25
    52 25
    27 26
    28 26
    28 27
    31 29
    48 29
    36 30
    44 30
    46 30
    52 30
    53 30
    43 31
    48 31
    61 33
    35 34
    38 34
    39 34
    41 34
    44 34
    51 34
    38 35
    45 35
    50 35
    38 37
    40 37
    41 37
    60 37
    41 38
    44 38
    46 38
    62 38
    44 39
    45 39
    53 39
    59 39
    58 40
    53 41
    55 42
    58 42
    48 43
    51 43
    47 44
    54 44
    51 46
    52 46
    60 46
    50 47
    58 49
    52 51
    56 52
    62 54
    58 55

# Challenge Output

This challenge has 3 distinct sets of 5 friends. Any or all of the below will count.
    
    18 10 14 58 7
    30 19 46 52 22
    30 19 46 52 25