# [](#EasyIcon) *(Easy)*: Tree Generation

Your goal is to draw a tree given the base-width of the tree (the number of characters on the bottom-most row of the triangle section). This "tree" must be drawn through [ASCII art-style graphics](http://en.wikipedia.org/wiki/ASCII_art) on standard console output. It will consist of a 1x3 trunk on the bottom, and a triangle shape on the top. The tree must be centered, with the leaves growing from a base of N-characters, up to a top-layer of 1 character. Each layer reduces by 2 character, so the bottom might be 7, while shrinks to 5, 3, and 1 on top layers. See example output.

_[Originally submitted by u/Onkel_Wackelflugel](http://www.reddit.com/r/dailyprogrammer_ideas/comments/1srsde/easy_build_a_christmas_treemenorah_with/)_

# Formal Inputs & Outputs
## Input Description

You will be given one line of text on standard-console input: an integer and two characters, all space-delimited. The integer, N, will range inclusively from 3 to 21 and *always* be odd. The next character will be your trunk character. The next character will be your leaves character. Draw the trunk and leaves components with these characters, respectively.

## Output Description

Given the three input arguments, draw a centered-tree. It should follow this pattern: (this is the smallest tree possible, with a base of 3)

       *
      ***
      ###

Here's a much larger tree, of base 7:

       *
      ***
     *****
    *******
      ###

# Sample Inputs & Outputs
## Sample Input 1

    3 # *

## Sample Output 1

       *
      ***
      ###

## Sample Input 2

    13 = +

## Sample Output 2

          +
         +++
        +++++
       +++++++
      +++++++++
     +++++++++++
    +++++++++++++
         ===

# Challenge++

Draw something special! Experiment with your creativity and engineering, try to render this tree in whatever cool way you can think of. [Here's an example](http://www.youtube.com/watch?v=QMYfkOtYYlg#t=15) of how far you can push a simple console for rendering neat graphics!