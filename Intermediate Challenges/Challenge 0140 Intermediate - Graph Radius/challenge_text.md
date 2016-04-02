# [](#IntermediateIcon) *(Intermediate)*: Graph Radius

In [graph theory](http://en.wikipedia.org/wiki/Graph_theory), a [graph's radius](http://en.wikipedia.org/wiki/Distance_(graph_theory\)) is the minimum eccentricity of any vertex for a given graph. More simply: it is the minimum distance between all possible pairs of vertices in a graph.

As an example, the [Petersen graph](http://en.wikipedia.org/wiki/Petersen_graph) has a radius of 2 because any vertex is connected to any other vertex within 2 edges.

On the other hand, the [Butterfly graph](http://en.wikipedia.org/wiki/Butterfly_graph) has a radius of 1 since its middle vertex can connect to any other vertex within 1 edge, which is the smallest eccentricity of all vertices in this set. Any other vertex has an eccentricity of 2.

# Formal Inputs & Outputs
## Input Description

On standard console input you will be given an integer N, followed by an [Adjacency matrix](http://en.wikipedia.org/wiki/Adjacency_matrix). The graph is not directed, so the matrix will always be reflected about the [main diagonal](http://en.wikipedia.org/wiki/Main_diagonal).

## Output Description

Print the radius of the graph as an integer.

# Sample Inputs & Outputs
## Sample Input

    10
    0 1 0 0 1 1 0 0 0 0
    1 0 1 0 0 0 1 0 0 0
    0 1 0 1 0 0 0 1 0 0
    0 0 1 0 1 0 0 0 1 0
    1 0 0 1 0 0 0 0 0 1
    1 0 0 0 0 0 0 1 1 0
    0 1 0 0 0 0 0 0 1 1
    0 0 1 0 0 1 0 0 0 1
    0 0 0 1 0 1 1 0 0 0
    0 0 0 0 1 0 1 1 0 0

## Sample Output

    2