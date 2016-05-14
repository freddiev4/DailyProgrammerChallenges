# Description

[*Hashiwokakero*](https://en.wikipedia.org/wiki/Hashiwokakero) (橋をかけろ Hashi o kakero), often called "bridges", "hashi", or "ai-ki-ai" outside of Japan, is a type of logic puzzle where the player designs a network of bridges to connect a set of islands.

The player starts with a rectangular grid of arbitrary size. Some cells start out with numbers from 1 to 8 inclusive; these are the islands. The rest of the cells are empty.The goal is to connect all of the islands by drawing a series of bridges between the islands, following certain criteria:

- The bridges must begin and end at distinct islands, traveling a straight line.
- The bridges must not cross any other bridges or islands.
- The bridges may only run orthogonally (parallel to the grid edges).
- At most two bridges connect a pair of islands.
- The number of bridges connected to each island must match the number on that island.
- The bridges must connect all of the islands into a single group.

Here is an [example] and [solution] of a 7x7 puzzle.

[example]: https://upload.wikimedia.org/wikipedia/commons/d/d4/Val42-Bridge1n.png
[solution]: https://upload.wikimedia.org/wikipedia/commons/f/f6/Val42-Bridge1.png

# Formal Inputs &amp; Outputs

## Input description

You are given a list of islands of the form `island(X, Y, Degree).` where `X` and `Y` are the coordinates of the island and `Degree` is the number of bridges that must connect to that island.

For the [example] above:

    island(0,0,3).
    island(0,2,3).
    island(0,3,2).
    island(0,4,1).
    island(0,6,2).
    island(1,4,1).
    island(1,6,3).
    island(2,1,2).
    island(2,2,3).
    island(3,0,3).
    island(3,3,8).
    island(3,6,4).
    island(4,0,1).
    island(4,4,1).
    island(5,1,3).
    island(5,3,5).
    island(5,4,3).
    island(5,6,2).
    island(6,0,2).
    island(6,1,4).
    island(6,2,1).
    island(6,3,2).
    island(6,4,3).
    island(6,5,2).

## Output description

The output is a list of bridges in the form `bridge(I, J).` where `I` and `J` are the indices of the islands connected by the bridge (i.e. 0 refers to `island(0,0,3)` and 23 refers to `island(6,5,2)`).

For the example [solution] above:

    bridge(0,1).
    bridge(0,1).
    bridge(0,9).
    bridge(1,8).
    bridge(2,10).
    bridge(2,10).
    bridge(3,4).
    bridge(4,6).
    bridge(5,6).
    bridge(6,11).
    bridge(7,8).
    bridge(7,8).
    bridge(9,10).
    bridge(9,10).
    bridge(10,11).
    bridge(10,11).
    bridge(10,15).
    bridge(10,15).
    bridge(11,17).
    bridge(12,18).
    bridge(13,16).
    bridge(14,15).
    bridge(14,19).
    bridge(14,19).
    bridge(15,16).
    bridge(15,21).
    bridge(16,17).
    bridge(18,19).
    bridge(19,20).
    bridge(21,22).
    bridge(22,23).
    bridge(22,23).

# Challenge Input

## Challenge A

Solve this 10x10 puzzle:

    island(0, 0, 3).
    island(0, 6, 3).
    island(0, 8, 2).
    island(2, 0, 5).
    island(2, 5, 5).
    island(2, 7, 4).
    island(2, 9, 1).
    island(4, 0, 3).
    island(4, 3, 3).
    island(4, 7, 2).
    island(5, 6, 2).
    island(5, 8, 3).
    island(6, 0, 2).
    island(6, 3, 3).
    island(7, 1, 4).
    island(7, 5, 5).
    island(7, 9, 4).
    island(8, 0, 1).
    island(9, 1, 4).
    island(9, 4, 4).
    island(9, 6, 4).
    island(9, 9, 3).

## Challenge B

Solve this 25x25 puzzle:

    island(0,1,3).
    island(0,5,4).
    island(0,8,3).
    island(0,14,3).
    island(0,18,5).
    island(0,23,4).
    island(1,10,3).
    island(1,12,2).
    island(2,4,1).
    island(2,11,3).
    island(2,13,3).
    island(2,24,1).
    island(3,1,3).
    island(3,3,3).
    island(4,15,1).
    island(4,24,2).
    island(5,3,2).
    island(5,10,2).
    island(5,13,3).
    island(6,1,3).
    island(6,4,3).
    island(7,13,1).
    island(7,18,4).
    island(7,20,3).
    island(7,22,1).
    island(7,24,3).
    island(8,23,2).
    island(9,15,3).
    island(9,18,4).
    island(9,24,4).
    island(11,0,1).
    island(11,18,4).
    island(11,20,2).
    island(11,23,2).
    island(12,3,1).
    island(12,15,1).
    island(15,1,5).
    island(15,3,5).
    island(15,15,1).
    island(15,23,5).
    island(16,11,5).
    island(16,14,6).
    island(16,18,2).
    island(16,22,1).
    island(17,3,3).
    island(17,5,4).
    island(17,7,1).
    island(18,1,6).
    island(18,8,6).
    island(18,10,4).
    island(18,12,2).
    island(18,14,4).
    island(18,17,1).
    island(20,12,3).
    island(20,15,2).
    island(21,11,4).
    island(21,18,3).
    island(21,23,5).
    island(22,12,1).
    island(22,14,2).
    island(22,17,5).
    island(22,20,3).
    island(22,22,1).
    island(23,1,3).
    island(23,5,1).
    island(23,8,1).
    island(23,11,4).
    island(23,16,2).
    island(23,23,1).
    island(24,0,3).
    island(24,10,5).
    island(24,17,5).
    island(24,24,2).

# Notes/Hints

The puzzle can be thought of as a [constraint satisfaction](https://en.wikipedia.org/wiki/Constraint_satisfaction) problem (CSP) over a graph. There are CSP libraries for most languages that may prove useful. Most CSP libraries are designed to work over integers. You can reason about graphs in terms of integers by using an [adjacency matrix](https://en.wikipedia.org/wiki/Adjacency_matrix).

You can play *Hashiwokakero* online at http://www.chiark.greenend.org.uk/~sgtatham/puzzles/js/bridges.html

# Bonus

It is possible to have multiple solutions to the same *Hashiwokakero*. The 7x7 example is such a puzzle. Can your program find all possible solutions?

# Credit

This puzzle was crafted by /u/cbarrick, many thanks!
Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas and there's a good chance we'll use it.