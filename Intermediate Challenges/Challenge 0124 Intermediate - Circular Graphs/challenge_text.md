# [](#IntermediateIcon) *(Intermediate)*: Circular Graphs

A classic problem in computer science & [graph-theory](http://en.wikipedia.org/wiki/Graph_theory) is to detect if there are any [circular paths](http://en.wikipedia.org/wiki/Cycle_(graph_theory\)) in a given directed graph (sometimes called a cycle). Your goal is to write a program that takes in a series of edges, which defines a graph, and then print all sets of cycles onto a console or text file.

For the sake of clarity, we define a cycle as a set of vertices that have at least one incoming edge and one outgoing edge, where each node is only directly connected to at most two other nodes within the list.

*Author: nint22*

# Formal Inputs & Outputs
## Input Description

You will first be given an integer N, which represents the number of edges that will be given on each following new-line. Edges are defined as two integer numbers, where the direction of the edge always goes from the left vertex to the right vertex.

## Output Description

Simply print all vertices in a directed cycle; make sure that the cycle is closed (see sample output).

# Sample Inputs & Outputs
## Sample Input

    4
    1 2
    2 3
    3 1
    3 4

## Sample Output

    1 2 3 1

# Note

As usual with these kind of problems, the challenge isn't in writing a solution, but writing a *fast*-solution. If you post a solution, please discuss the big-O notation of your search function. Good luck, and have fun programming!