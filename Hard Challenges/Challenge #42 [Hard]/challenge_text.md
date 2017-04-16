A *simple graph* is a graph that allows only one edge between two vertices and no edges that start end end in the same vertex (usually called "loops"). If a simple graph has V vertices, the maximum number of edges in that graph is V\*(V-1)/2, which happens when every vertex is connected to every other vertex by an edge. This is called a *complete graph*.

A graph is said to be *connected* if you can get from any vertex to any other vertex by travelling on the edges. The minimum number of edges required for a graph of V vertices to be connected is V - 1 (a graph with the minimum number of vertices needed to be connected is called a *tree*). 

To demonstrate the concept of connectedness, let's say that you have a simple graph of six vertices named 0,1,2,3,4 and 5, which has the following edges: (0,1), (2,3), (3,4) and (4,2). This graph is not connected, because there is no way to (for instance) get from vertex 1 to vertex 2, or from vertex 3 to vertex 5. In fact, if you drew the graph on a piece of paper, you'd see that it forms three "islands", with 0 and 1 on one island connected by the edge (0,1); 2,3 and 4 on one island connected in a triangle; and 5 on island of its own, connected to no other vertex.

Let's say that you had a simple graph with 50 vertices named 0,1,2,3,....,48,49 and the following 45 edges:

    ( 0,22),( 0,39),( 0,47),( 1, 5),( 2,38),( 2,39),( 2,44),( 4,23),( 4,33)    
    ( 5,19),( 6,17),( 6,35),( 6,45),( 7,49),( 8,24),( 8,40),( 9,25),( 7,10)    
    (10,11),(10,21),(11,30),(12,32),(13,27),(14,33),(14,36),(15,49),(16,48)    
    (18,37),(18,45),(19,24),(19,40),(20,39),(21,34),(25,36),(26,27),(26,31)    
    (26,32),(28,48),(29,36),(29,41),(35,43),(38,42),(39,44),(43,46),(48,49)    

This graph is obviously not connected, because there aren't enough edges to meet the minimum requirement (you would need at least 49). Write a program that prints how many islands of vertices there are, and what vertices there are on each island. In other words, print out some number of sets of vertices where in each individual set all vertices are connected to each other, but no two vertices in different sets are.

**Bonus**: For a graph of 1000000 (one million) vertices, the number of possible edges is 100000\*999999/2 = 499999500000 (almost five hundred billion), but obviously not all edges are needed for the graph to be fully connected. Create a graph of 1000000 vertices and no edges, and then one by one start adding edges to it, randomly selected from all possible edges, until you have a connected graph. How many edges did you add before the graph became connected? (note: this number will obviously be different every time you run the program)