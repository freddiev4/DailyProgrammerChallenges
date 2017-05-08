This is the same problem as [monday's](https://www.reddit.com/r/dailyprogrammer/comments/5mzr6x/20170109_challenge_298_hard_functional_maze/), except the input format instead of being a 2d maze, is a graph of nodes and paths to their nearest neighbours.

For parsing ease, the graph is represented as one node per row, together with all of the neighbour nodes and their distance (cost) to the anchor node.  Format:

     anchor node (row col) - [neighbour node (row col), distance to anchor]+

To the left of the separatting `-` are 2 numbers: the row and col indexes of an anchor/source node.  To the right of the `-` is a list that is a multiple of 3.  The neighbours/destination/where-you-can-jump-from-source-to, with 3rd number the distance/cost from source to destination.

The first 8 rows in the graph correspond to the positions of `01234567` in the original maze:  The possible starts and goals (**interests] points**) of path requests:

https://gist.github.com/Pascal-J/1fc96e62353b430eeb5f5f3d58861906

edit:  oops forgot to paste this all along :(

**challenge:** 

produce the length of shortest paths from every **interest point** (first 8 graph rows) to every other interest point.  You may omit the mirror path (ie. the path length from 0 to 1 is the same as 1 to 0), and omit the path to self (path length from 2 to 2 is 0).

**sample output:**

    ┌─┬────────────────────────┐
    │0│28 44 220 184 144 208 76│
    ├─┼────────────────────────┤
    │1│60 212 176 136 200 92   │
    ├─┼────────────────────────┤
    │2│252 216 176 240 36      │
    ├─┼────────────────────────┤
    │3│48 84 64 276            │
    ├─┼────────────────────────┤
    │4│48 40 240               │
    ├─┼────────────────────────┤
    │5│72 200                  │
    ├─┼────────────────────────┤
    │6│264                     │
    └─┴────────────────────────┘

**explanation:** each row in output corresponds to the path **from** node labelled with the first column.  The 2nd column contains the lengths of paths to all destinations with index higher than **from**.  The last row lists the path length from `6` to `7`.  The 2nd last row lists path length from `5` to `6 7`

These are the same answers as monday's challenge.  It is not the number of "graph hops", it is the total cost (sum of 3rd column) in the graph hops.

# bonus

list the shortest path walked from node 0 (row index 0 in input gist:  map index `23 141`) to node 1 (row index 1 in input gist: maze index `35 133`).  (all nodes passed through)

#bonus 2

Create a universal function (or class constructor) that can solve all of this week's challenges.  This is the same as monday's bonus, but with the benefit of hindsight, there are some important corrections to Monday's guidance:

[Djikstra](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm) rather than Astar is the better reference algorithm.

The higher order function should produce a function that accepts as input `start, goal, reference (maze or graph)` but it is too much to ask to create such a function that does any manipulation of those inputs.  ie.  The function caller is repsonsible for providing nodes and reference in format suitable to the generated function (such as node indexes instead of an item to look up in reference)

extra bonus: goal (and possibly start) should be possible to be lists rather than a single node.

I find the following function inputs are sufficient to solve all of this week's challenges.

1. neighbour function:  from a given node, what are all of the possible valid neighbours. (for maze, this is NESW directions that are not walls.  For graph, lookup of destinations in source row)
2. distance function:  The cost from going from previous node to this node.  (for maze, this is constant 1 function.  For graph, it is the lookup of source and destination cost field)
3. solved function: boolean function that flags whether a path has reached a goal.
4. while function:  condition to stop (or continue) search (boolean function).  For monday's challenge, first solved path is guaranteed to be shortest with djikstra due to constant distance/cost function.  For wednesday's challenge, there was no stop condition other than exhausting all directions, and excluding from further search any paths that reach solved state.  For this challenge, the first solved path is not guaranteed to have the smallest cost (even if it has the fewest hops).  More hops can possibly have a lower cummulative cost/distance.
5. return function: function that maps the final state to an output value.  For this and monday's challenge, extract the length of the solved path.  For wednesday's challenge, list the goal node and its path length.  For bonus 1, walk the path backwards from goal to start.

Useful internal states for the function are to keep a "table" of node paths that include "fields" for `current node, previous node, visited/"frontier" status` for sure, and optionally "cached" solved and path length states.

Caching length is controversial and may or may not be faster.  Unlike Monday's challenge, Today's challenge can "invalidate previously cached" costs as a longer hop but shorter cummulative cost path can replace a previously found path.  Caching may be slower (though simpler), but needs a "reupdate all costs" internal function for today's challenge.  

I suspect that caching is slower overall, and if you do bonus 1, the only time you ever need to calculate lengths are at the end (return function), or when a collision occurs (to pick the shortest path "collided node".)

