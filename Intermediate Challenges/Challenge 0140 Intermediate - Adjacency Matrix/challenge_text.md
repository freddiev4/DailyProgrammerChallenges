# [](#IntermediateIcon) *(Intermediate)*: Adjacency Matrix

In [graph theory](http://en.wikipedia.org/wiki/Graph_theory), an [adjacency matrix](http://en.wikipedia.org/wiki/Adjacency_matrix) is a data structure that can represent the edges between nodes for a [graph](http://en.wikipedia.org/wiki/Graph_(mathematics\)) in an N x N matrix. The basic idea is that an edge exists between the elements of a row and column if the entry at that point is set to a valid value. This data structure can also represent either a [directed graph](http://en.wikipedia.org/wiki/Directed_graph) or an [undirected graph](http://en.wikipedia.org/wiki/Graph_(mathematics\)#Undirected_graph), since you can read the rows as being "source" nodes, and columns as being the "destination" (or vice-versa).

Your goal is to write a program that takes in a list of edge-node relationships, and print a directed adjacency matrix for it. Our convention will follow that rows point to columns. Follow the examples for clarification of this convention.

[Here's a great online directed graph editor](http://bl.ocks.org/rkirsling/5001347) written in Javascript to help you visualize the challenge. Feel free to post your own helpful links!

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be first given a line with two space-delimited integers N and M. N is the number of nodes / vertices in the graph, while M is the number of following lines of edge-node data. A line of edge-node data is a space-delimited set of integers, with the special "->" symbol indicating an edge. This symbol shows the edge-relationship between the set of left-sided integers and the right-sided integers. This symbol will only have one element to its left, or one element to its right. These lines of data will also never have duplicate information; you do not have to handle re-definitions of the same edges.

An example of data that maps the node 1 to the nodes 2 and 3 is as follows:

    1 -> 2 3

Another example where multiple nodes points to the same node:

    3 8 -> 2

You can expect input to sometimes create cycles and self-references in the graph. The following is valid:

    2 -> 2 3
    3 -> 2

Note that there is no order in the given integers; thus "1 -> 2 3" is the same as "1 -> 3 2".

## Output Description

Print the N x N adjacency matrix as a series of 0's (no-edge) and 1's (edge).

# Sample Inputs & Outputs
## Sample Input

    5 5
    0 -> 1
    1 -> 2
    2 -> 4
    3 -> 4
    0 -> 3

## Sample Output

    01010
    00100
    00001
    00001
    00000