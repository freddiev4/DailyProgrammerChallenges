# [](#EasyIcon) *(Easy)*: Edge Sorting
In [graph theory](http://en.wikipedia.org/wiki/Graph_theory), an "edge" is defined as the connection between two vertices. For example, if we look at the [sample graph](http://en.wikipedia.org/wiki/File:6n-graf.svg) on the Wikipedia article, we would define the relationship between vertex 4 and 6 as having an edge, but vertices 5 and 3 have no edge (though they are connected, through {5,4,3} or {5,2,3,} and a few others)

Your goal is to sort a given list of edges in the correct connection-order: to make your job even easier, given edges will always form one big long line (so basically a very simplified graph, [like this](http://i.imgur.com/KXc00a2.png) ). Lower index integers should be on the left / top of the sorted list, while larger index integers should be on the right / bottom of the sorted list. All edges are assigned a unique letter to help keep track of ordering.

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
On standard input, you will first be given an integer, which is the number of edges you will then be given. Each given edge is defined by a letter and two integers: the letter will always be unique and represents the edge. The integers are the actual edge's vertices, and thus may be duplicate (if a vertex is shared between two edges).

## Output Description
Simply list the sorted edges from the left-most ordered edge to the right-most ordered edge.
# Sample Inputs & Outputs
## Sample Input
The following data is a simple example, with valid output following the next section:

    4
    A 3 4
    B 4 5
    C 1 2
    D 2 3

## Sample Output

    C D A B

# Challenge Input
This is an example of a randomized input:

    6
    F 2 3
    B 1 2
    D 6 5
    C 6 7
    E 5 4
    A 3 4

## Challenge Input Solution
None required.

# Note
None