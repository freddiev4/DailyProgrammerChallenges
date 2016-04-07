# [](#HardIcon) *(Hard)*: Robo Room Service

You are the lead software engineer hired by a major hotel chain to program a new path-planning system for an automated room-service robot! You read that right: you are helping build a robot that will execute some basic tasks, such as moving around hotel laundry or patrol for security. The problem though is that your path-planning system is based on a [graph](http://en.wikipedia.org/wiki/Graph_(abstract_data_type\)), whereas the only data you have about the hotel's layout is in an ASCII-map!

Your goal is to convert a given ASCII-map (a big 2D array of valid spaces the robot can move to) into a graph data-structure. You must minimize the room count (generate as little rooms as possible), thus coalescing adjacent structures that have the same room-type. The resulting graph should have one node per room, with an edge between nodes representing the connection of an adjacent room.

*Original author: /u/nint22. I'm posting this challenge as "hard", though it is more correctly somewhere between "intermediate" and "hard". This challenge was inspired by the Dwarf Fortress path-planner.*

# Formal Inputs & Outputs
## Input Description

You will be given an integer W and H on standard input, which represents the the **W**idth and **H**eight of the ASCII map that will follow: this map is just a 2D array of ASCII digit characters ('0' to '9'). The digit '0' (zero) represents a non-accessible area of the hotel's layout, while any other digit represent a room. Different digits represent different room-types. Rooms are "connected" if they are directly-adjacent. A room is defined as any rectangular shape.

## Output Description

You must convert the above-described ASCII-map input into a graph of nodes (rooms) and edges (connections between rooms). You should do this as optimally as possible, meaning you should be generating as little rooms (nodes) as possible. With this resulting graph data-structure, you must print an [adjacency list](http://en.wikipedia.org/wiki/Edge_list). For each node N you have, assign it a unique number, and then (on the same line) print all connected rooms with their own respective unique number. Remember: room numbers do not map to room-types, meaning with some test data you could generate 10 rooms, but they are all of type 1. (Sample input 2 shows this example)

Note that the output has some ambiguity: the same map may produce multiple graphs that have the same overall structure. Don't worry about this, and just focus on printing the correct edge relationships (it is why we're asking you to print unique node numbers, not what the nodes actually associate to).

# Sample Inputs & Outputs
## Sample Input 1

    5 5
    0 0 0 2 2
    0 0 0 2 2
    0 0 0 3 0
    1 1 1 1 0
    1 1 1 1 0

## Sample Output 1

    1 3
    2 3
    3 1 2

## Sample Input 2

    10 10
    1 1 0 1 1 0 1 1 0 0
    1 1 0 1 1 0 1 1 0 0
    1 1 1 1 1 1 1 1 1 1
    0 0 0 0 0 0 0 0 0 1
    0 0 0 0 0 0 0 0 0 1
    0 0 0 0 0 0 0 0 0 1
    0 0 0 0 0 0 0 0 0 1
    1 1 1 1 1 1 1 1 1 1
    1 1 0 1 1 0 1 1 0 0
    1 1 0 1 1 0 1 1 0 0

## Sample Output 2

*[Image explanation](http://i.imgur.com/oo7EWzT.png)*

    1 4
    2 4
    3 4
    4 1 2 3 5
    5 4 6
    6 5 7 8 9
    7 6
    8 6
    9 6
