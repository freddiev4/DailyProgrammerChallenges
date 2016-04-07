# [](#HardIcon) _(Hard)_: Adjacency Matrix Generator

We've often talked about adjacency matrices in challenges before. Usually, the adjacency matrix is the input to a challenge. This time, however, we're going to be taking a visual representation of a graph as input, and turning it into the adjacency matrix. Here's the rules for the input diagrams:

* Vertices are represented by lower-case letters A to Z. (There will be no more than 26 vertices in an input.) Vertices will be connected by no more than one edge.
* All edges on the diagram are perfectly straight, are at least one character long, and will go either horizontally, vertically, or diagonally at 45 degrees.
* All edges must connect directly to two vertices at either end.

        a------------b  f
                        |     g
            c           |    /
             \          e   /
              \            /
               \          /
                \        h
                 d

These are all valid vertices..

    a-----
          -----b
          
          
          
          cd

But these aren't. A and B aren't connected, and neither are C and D.

If a line on the graph needs to bend, then spare vertices can be added. There are represented with a `#` and don't appear on the output, but otherwise behave like vertices:

       s
        \
         \
          \
           \
            #-----------t

This above diagram represents just one edge between `s` and `t`. **A spare vertex will always be connected to exactly two edges**.

* Finally, edges may cross over other edges. One will go on top of the other, like this:

                 a
                /|
               / |
        d---------------e
         \   /   |
          \ /    |
           c     |
                 |
                 b

An edge will never cross under/over a vertex as that would cause ambiguity. However, an edge may cross under or over multiple other edges successively, like so:

        e
    b   |
     \  |g
      \ ||
        \|
    s---|\----t
        ||\
        || \
        f|  \
         |   c
         h

This is also valid - `a` and `b` are connected:
          
        z  y  x  w
      a-|\-|\-|\-|-b
        | \| \| \| 
        v  u  t  s
        
However, this is not valid:

        zy
     a  ||
      \ ||
       #||--b
        ||
        ||
        xw

As there is no edge coming out of the right side of the `#`.

Your challenge today is to take a diagram such as the above ones and turn it into an adjacency matrix.

# Formal Inputs and Outputs

## Input Specification

You'll be given a number **N** - this is the number of lines in the diagram. Next, accept **N** lines of a diagram such as the ones above, like:

    7
    a-----b
    |\   / \
    | \ /   \
    |  /     e
    | / \   /
    |/   \ /
    c-----d

## Output Description

Output the corresponding adjacency matrix. The rows and columns should be ordered in alphabetical order, like this:

    01110
    10101
    11010
    10101
    01010

So the leftmost column and topmost row correspond to the vertex A.

# Sample Inputs and Outputs

## Example 1

### Input

    5
    a
    |\
    | \
    |  \
    b---c

### Output

    011
    101
    110

## Example 2

### Input

    7
    a  b--c
    |    /
    |   /
    d  e--f
     \    |
      \   |
    g--h--#

### Output

    00010000
    00100000
    01001000
    10000001
    00100100
    00001001
    00000001
    00010110

## Example 3

### Input

    5
    a   #   #   #   #   #   #   b
     \ / \ / \ / \ / \ / \ / \ / \
      /   /   /   /   /   /   /   #
     / \ / \ / \ / \ / \ / \ / \ /
    c   #   #   #   #   #   #   d

### Output
    
    0001
    0011
    0100
    1100

## Example 4

### Input

    5
        ab-#
    # e-|\-|-#
    |\ \# c# |
    | #-#\| \|
    #-----d  #

### Output

    00110
    00001
    10010
    10101
    01010

## Sample 5

### Input

    9
       #--#
       | /        #
       |a--------/-\-#
      #--\-c----d   /
       \  \|     \ / \
       |\  b      #   #
       | #  \        /
       |/    #------#
       #

### Output

    0111
    1011
    1101
    1110

# Finally

Got any cool challenge ideas? Submit them to /r/DailyProgrammer_Ideas!