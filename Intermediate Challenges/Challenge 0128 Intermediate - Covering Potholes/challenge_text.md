# [](#IntermediateIcon) *(Intermediate)*: Covering Potholes

Matrix city currently has very poor road conditions; full of potholes and are in dire need of repair. The city needs your help figuring out which streets (and avenues) they should repair. Chosen streets are repaired fully, no half measures, and are end-to-end. They're asking you to give them the minimum number of roads to fix such that all the potholes are still patched up. (They're on a very limited budget.)

Fortunately, the city was planned pretty well, resulting in a grid-like structure with its streets!

*Original author: /u/yelnatz*

# Formal Inputs & Outputs
## Input Description

You will be given an integer N on standard input, which represents the N by N matrix of integers to be given next. You will then be given N number of rows, where each row has N number of columns. Elements in a row will be space delimited. Any positive integer is considered a good road without problems, while a zero or negative integer is a road with a pot-hole.

## Output Description

For each row you want to repair, print "row X repaired", where X is the zero-indexed row value you are to repair. For each column you want to repair, print "column X repaired", where X is the zero-indexed column value you are to repair.

# Sample Inputs & Outputs
## Sample Input

    5
    0 4 0 2 2    
    1 4 0 5 3    
    2 0 0 0 1    
    2 4 0 5 2    
    2 0 0 4 0

## Sample Output

    Row 0 repaired.
    Row 2 repaired.
    Row 4 repaired.
    Column 2 repaired.

Based on this output, you can draw out (with the letter 'x') each street that is repaired, and validate that all pot-holes are covered:

    x x x x x    
    1 4 x 5 3    
    x x x x x    
    2 4 x 5 2    
    x x x x x

I do not believe this is an NP-complete problem, so try to solve this without using "just" a brute-force method, as any decently large set of data will likely lock your application up if you do so.