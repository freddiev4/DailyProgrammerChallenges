# [](#HardIcon) _(Hard)_: Minimum Spanning Tree

First, a bit of back story. In graph theory, a graph is a set of points called *vertices*, joined up by lines or *edges*. Those edges can have a number called *weight* associated with them, which would represent distance, cost, or whatever you like. It's an abstract idea and is usually used for modeling real-world situations such as a neighborhood, a network of computers or a set of steps. A **spanning tree** is a subgraph (a graph deriving from another one) that connects *all* of the vertices of the parent graph.  
This means several things:

* A spanning tree must contain every vertex of G - but not necessarily every edge.  
* Because it's a tree, it must not have any loops or cycles - that is, it must have no closed shapes within it.  
* You must only use edges from the original graph to form the spanning tree.
* The tree must be *connected*. This means all the edges must be joined in some way. This is illustrated with an example below.

Here are some examples to illustrate this concept. Take this [graph G](http://i.imgur.com/RIfsghM.png).  
Here is [one possible spanning tree](http://i.imgur.com/yf8K1AK.png). Note there may be (and probably will be) more than one valid spanning tree for a given graph. Here are some examples of invalid spanning trees, for several reasons:

* [This one leaves out vertices C and E.](http://i.imgur.com/6CVjxpF.png)
* [This one contains a cycle so it's not a tree.](http://i.imgur.com/cibmve1.png)
* [This one is not fully connected - there is no path from B to F via this spanning tree.](http://i.imgur.com/eanfUzf.png)
* [This one uses an edge that is not in the original graph.](http://i.imgur.com/WMSDZf8.png)

Because representing graphs visually like this makes it complicated to do computations with them, you can represent graphs as a matrix instead, such as [this one](http://i.imgur.com/iXuaqNT.png). This is called a distance matrix because it shows you the distances between any two vertices - like those distance charts you find at the back of diaries. (These are *very* similar to adjacency matrices, except they show the weight of the connecting edges rather than just its existence.) Note how it is symmetric along the diagonal. A dash (-) means there is no edge connecting those two vertices.

Your challenge is, given any (non-directional) graph in matrix form as shown above, to find the **minimum spanning tree**. This is the spanning tree with the smallest possible sum distance of its edges. There may be more than one minimum spanning tree for any given tree. For example a minimum spanning tree for Graph G shown above is [here](http://i.imgur.com/RrXzZZY.png).

# Formal Inputs and Outputs

## Input Description

On the console, you will be given a number V. This will be between 1 and 26 inclusive, and represents the number of vertices in the graph.  
You will then be given a distance matrix, with newlines separating rows and commas separating columns. **-1** is used to denote that there is no edge connecting those two vertices. For the sake of simplicity, the vertices in the graph are assumed to be named A, B, C, D and so on, with the matrix representing them in that order, left-to-right and top-to-bottom (like in the distance matrix example shown previously.)

## Output Description

You must print out the total weight of the MST, and then the edges of the minimum spanning tree represented by the two vertices such as DF, AE. They do not need to be in any particular order.

# Sample Inputs & Outputs

## Sample Input

	8
	-1,11,9,6,-1,-1,-1,-1
	11,-1,-1,5,7,-1,-1,-1
	9,-1,-1,12,-1,6,-1,-1
	6,5,12,-1,4,3,7,-1
	-1,7,-1,4,-1,-1,2,-1
	-1,-1,6,3,-1,-1,8,10
	-1,-1,-1,7,2,8,-1,6
	-1,-1,-1,-1,-1,10,6,-1

## Sample Output

	32
	AD,DF,DE,EG,DB,GH,FC

# Challenge

## Challenge Input

(this input represents [this graph](http://i.imgur.com/ef5kdbx.png))

	10
	-1,29,-1,-1,18,39,-1,-1,-1,-1
	29,-1,37,-1,-1,20,-1,-1,-1,-1
	-1,37,-1,28,-1,43,47,-1,-1,-1
	-1,-1,28,-1,-1,-1,35,-1,-1,-1
	18,-1,-1,-1,-1,31,-1,36,-1,-1
	39,20,43,-1,31,-1,34,-1,33,-1
	-1,-1,47,35,-1,34,-1,-1,-1,22
	-1,-1,-1,-1,36,-1,-1,-1,14,-1
	-1,-1,-1,-1,-1,33,-1,14,-1,23
	-1,-1,-1,-1,-1,-1,22,-1,23,-1
	
# Notes

There are algorithms to find the MST for a given graph, such as the [reverse-delete algorithm](http://en.wikipedia.org/wiki/Reverse-Delete_algorithm) or [Kruskal's method](http://en.wikipedia.org/wiki/Kruskal%27s_algorithm). The submitted solution does not have to work with directed graphs - the edges will always be bidirectional and thus the matrix will always be symmetrical.