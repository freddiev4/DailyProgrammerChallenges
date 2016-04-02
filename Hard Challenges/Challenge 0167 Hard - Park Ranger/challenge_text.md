# [](#HardIcon) _(Hard)_: Park Ranger

Ranger Dan owns a wildlife park in an obscure country somewhere in Europe. The park is an absolute mess, though! Litter covers every walkway. Ranger Dan has been tasked with ensuring all of the walkways are clean on a daily basis. However, doing this on a daily basis can take some time - Dan to ensure that time is not wasted travelling down walkways that have already been checked. Each walkway is checked by walking along it once, from one end to another.

Dan's park is represented as a - you guessed it - graph (with a distance matrix), as covered in [Challenge 166bh](http://www.reddit.com/r/dailyprogrammer/comments/287jxh/6152014_challenge_166b_hard_a_day_in_the_life_of/) and [Challenge 152h](http://www.reddit.com/r/dailyprogrammer/comments/20cydp/14042014_challenge_152_hard_minimum_spanning_tree/). To get to grips with distance matrices and graphs in general, look at the descriptions for those two challenges. The walkways are represented as edges/arcs in the graph, and the vertices/nodes of the graph represent where two walkways join or split up.

Dan has the option of setting up two huts at any two vertices within the park - from where the walkway-checking journey can begin and end. You are being paid to write a program which will find which two vertices are the best place to put the huts in such a way that the time checking every walkway (edge) at least once (an [Eulerian path](http://en.wikipedia.org/wiki/Eulerian_walkway)) is as low as possible - or if it doesn't actually matter where the journey begins or ends. Whether it matters or not will depend on the graph of the park itself.

# Formal Inputs and Outputs

## Input Description

You will be given a number **N** which will represent the number of vertices in the graph of the park. N will be between 1 and 26 inclusive.

You will then be given a distance matrix, with newlines separating rows and commas separating columns. -1 is used to denote that there is no route connecting those two vertices. For the sake of simplicity, the vertices in the graph are assumed to be named A, B, C, D and so on, with the matrix representing them in that order, left-to-right and top-to-bottom, like [this network](http://i.imgur.com/RIfsghM.png) and its corresponding [distance matrix](http://i.imgur.com/iXuaqNT.png).
    
## Output Description

If it doesn't matter which vertices Dan starts and ends the journey from, print

    Any

However, if starting and ending at two distinct vertices give a shortest (semi-Eulerian) path to check each walkway at least once, then print them like so:

    A J

# Example Inputs and Outputs

## Example Input 1

    10
    -1,-1,-1,-1,30,38,10,21,48,33
    -1,-1,-1,47,-1,25,48,-1,-1,37
    -1,-1,-1,19,27,-1,37,43,15,37
    -1,47,19,-1,-1,34,29,36,-1,42
    30,-1,27,-1,-1,-1,-1,43,47,-1
    38,25,-1,34,-1,-1,38,49,-1,43
    10,48,37,29,-1,38,-1,-1,-1,48
    21,-1,43,36,43,49,-1,-1,28,-1
    48,-1,15,-1,47,-1,-1,28,-1,-1
    33,37,37,42,-1,43,48,-1,-1,-1
    0 odd vertices

## Example Output 1

    Any

## Example Input 2

    10
    -1,12,28,-1,16,-1,34,-1,-1,27
    12,-1,19,35,27,-1,-1,-1,-1,17
    28,19,-1,20,15,25,35,-1,-1,-1
    -1,35,20,-1,-1,-1,-1,-1,-1,15
    16,27,15,-1,-1,-1,33,-1,-1,10
    -1,-1,25,-1,-1,-1,27,32,19,36
    34,-1,35,-1,33,27,-1,30,32,-1
    -1,-1,-1,-1,-1,32,30,-1,18,12
    -1,-1,-1,-1,-1,19,32,18,-1,-1
    27,17,-1,15,10,36,-1,12,-1,-1

## Example Output 2

    D E

# Challenge

## Challenge Input

(this represents a park with 20 vertices.)

    20
    -1,-1,-1,-1,15,-1,-1,57,-1,-1,-1,67,-1,-1,-1,23,-1,67,-1,66
    -1,-1,-1,-1,-1,-1,53,-1,23,-1,-1,-1,-1,-1,54,-1,-1,-1,-1,-1
    -1,-1,-1,-1,-1,63,-1,-1,-1,-1,66,84,84,-1,-1,-1,43,-1,43,-1
    -1,-1,-1,-1,90,-1,-1,-1,-1,-1,37,20,-1,-1,-1,89,-1,28,-1,-1
    15,-1,-1,90,-1,-1,-1,34,-1,-1,-1,21,-1,-1,-1,62,-1,80,-1,-1
    -1,-1,63,-1,-1,-1,-1,-1,-1,-1,-1,-1,39,-1,-1,-1,45,-1,35,-1
    -1,53,-1,-1,-1,-1,-1,-1,51,58,-1,-1,-1,90,76,-1,-1,-1,-1,84
    57,-1,-1,-1,34,-1,-1,-1,-1,-1,-1,-1,-1,62,24,30,-1,-1,-1,-1
    -1,23,-1,-1,-1,-1,51,-1,-1,75,-1,-1,-1,67,58,-1,-1,-1,-1,52
    -1,-1,-1,-1,-1,-1,58,-1,75,-1,-1,-1,-1,76,-1,-1,-1,-1,-1,25
    -1,-1,66,37,-1,-1,-1,-1,-1,-1,-1,-1,50,-1,-1,-1,-1,-1,-1,-1
    67,-1,84,20,21,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,72,-1,49,-1,-1
    -1,-1,84,-1,-1,39,-1,-1,-1,-1,50,-1,-1,-1,-1,-1,85,-1,-1,-1
    -1,-1,-1,-1,-1,-1,90,62,67,76,-1,-1,-1,-1,-1,-1,-1,-1,-1,88
    -1,54,-1,-1,-1,-1,76,24,58,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
    23,-1,-1,89,62,-1,-1,30,-1,-1,-1,72,-1,-1,-1,-1,-1,21,-1,-1
    -1,-1,43,-1,-1,45,-1,-1,-1,-1,-1,-1,85,-1,-1,-1,-1,-1,38,-1
    67,-1,-1,28,80,-1,-1,-1,-1,-1,-1,49,-1,-1,-1,21,-1,-1,-1,-1
    -1,-1,43,-1,-1,35,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,38,-1,-1,-1
    66,-1,-1,-1,-1,-1,84,-1,52,25,-1,-1,-1,88,-1,-1,-1,-1,-1,-1

## Challenge Output

    K S

# Notes

You may need to reuse some code from [Challenge 166bh](http://www.reddit.com/r/dailyprogrammer/comments/287jxh/6152014_challenge_166b_hard_a_day_in_the_life_of/). This is a ~~fairly~~ difficult challenge and is a subset of the [Route Inspection](http://en.wikipedia.org/wiki/Chinese_postman_problem) problem. You'll need to look at all of the vertices with an odd valency.

The degree/valency of a vertex/node is defined as the number of edges/arcs incident to it. If every vertex has degree 0 then there will be an Eulerian cycle through the graph meaning that all checking paths through the park will have the same length - ie. print `Any`.