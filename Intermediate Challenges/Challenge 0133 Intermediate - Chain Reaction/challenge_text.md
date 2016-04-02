# [](#IntermediateIcon) *(Intermediate)*: Chain Reaction

You are a physicists attempting to simulate a discrete two-dimensional grid of elements that cause chain-reactions with other elements. A chain-reaction is when an element at a position becomes "active" and spreads out and activates with other elements. Different elements have different propagation rules: some only can react with directly-adjacent elements, while others only reacting with elements in the same column. Your goal is to simulate the given grid of elements and show the grid at each interaction.

*Original author: /u/nint22*

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be given two space-delimited integers N and M, where N is the number of element types, and M is the grid size in both dimensions. N will range inclusively between 1 and 20, while M ranges inclusively from 2 to 10. This line will then be followed by N element definitions.

An element definition has several space-delimited integers and a string in the form of "X Y R D". X and Y is the location of the element. The grid's origin is the top-left, which is position (0,0), where X grows positive to the right and Y grows positive down. The next integer R is the radius, or number of tiles this element propagates outwardly from. As an example, if R is 1, then the element can only interact with directly-adjacent elements. The string D at the end of each line is the "propagation directions" string, which is formed from the set of characters 'u', 'd', 'l', 'r'. These represent up, down, left, right, respectively. As an example, if the string is "ud" then the element can only propagate R-number of tiles in the up/down directions. Note that this string can have the characters in any order and should not be case-sensitive. This means "ud" is the same as "du" and "DU".

Only the first element in the list is "activated" at first; all other elements are idle (i.e. do not propagate) until their positions have been activated by another element, thus causing a chain-reaction.

## Output Description

For each simulation step (where multiple reactions can occur), print an M-by-M grid where elements that have had a reaction should be filled with the 'X' character, while the rest can be left blank with the space character. Elements not yet activated should always be printed with upper-case letters, starting with the letter 'A', following the given list's index. This means that the first element is 'A', while the second is 'B', third is 'C', etc. Note that some elements may not of have had a reaction, and thus your final simulation may still contain letters.

Stop printing any output when no more elements can be updated.

# Sample Inputs & Outputs
## Sample Input

    4 5
    0 0 5 udlr
    4 0 5 ud
    4 2 2 lr
    2 3 3 udlr

## Sample Output

    Step 0:
    A   B
         
        C
      D  
         
    Step 1:
    X   B
         
        C
      D  
         
    Step 2:
    X   X
         
        C
      D  
         
    Step 3:
    X   X
         
        X
      D  
         

# Challenge Bonus

1: Try to write a visualization tool for the output, so that users can actually see the lines of propagation over time.

2: Extend the system to work in three-dimensions.