# Description

You start with an empty grid of size m-by-m. Your goal is to fill it with numbers 1 through 9, so that the total sum of all numbers in the grid is the greatest.

## Rules

The grid fill rules are as follows:

* All cells must be filled with a number between 1 and 9.
* You can fill any cell in the grid with "1".
* You can fill any cell in the grid with "2", provided that cell is adjacent to a cell containing "1".
* You can fill any cell in the grid with "3", provided that cell is both adjacent to a cell containing "2", and adjacent to another cell containing "1".
* &lt;snip&gt;
* You can fill any cell in the grid with "9", provided it is adjacent to cells containing 8, 7, 6, 5, 4, 3, 2, and 1.
* "Adjacent" includes diagonals (i.e. in a move's reach of a chess King).
* There are no limits on how many times you can use each number (except to comply with the above rules), and you are not obliged to use any number.
* In case multiple optimal solutions (solutions with equally maximum total sums) are possible for a grid of a given size, producing any one is sufficient.

# Formal Inputs and Outputs

## Input

The input consists of a positive integer representing size "m" of an m-by-m grid, e.g.:

    grid(3)

## Output

The output consists of characters which represent a filled grid as per above rules, with an optimal solution (maximum total sum). The output format is a string of integers representing each row, with rows separated by line breaks (same format as the example solutions given below).

Below are example outputs for input:

    grid(3)

**Illegal solution:**

    111
    222
    333

Because the bottom "3"s must each be adjacent to both a "2" and a "1", yet they are only adjacent to a "2".

**Legal but suboptimal solution:**

    123
    321
    123

In above example, each "3" is adjacent to a "2" and a "1", and each "2" is adjacent to a 1. However, the sum of the grid is *18*, which is less than the maximum possible to achieve in a 3x3 grid.

**Legal and optimal solution:**

    424
    313
    424

Each 4 is adjacent to a "3", "2", and "1"; each "3" is adjacent to a "2" and 1", and each "2" is adjacent to a "1". The sum of the above grid is *27*, which is a maximum achievable sum in a 3x3 grid.

### Tips

* I rated this problem as [hard], as I'm not personally aware of the computational complexity of an optimal algorithm to this problem, or even an algorithm which can scale to non-trivial grid sizes. 
* A naive brute force algorithm is on the order of c^n (exponential time), and thus is not feasible on normal computers beyond grids of about 4x4 size. 
* Verifying that a given solution is *legal* is possible in linear time. I'm not sure if there is an algorithm to prove a given solution is *optimal* any faster than producing an optimal solution to begin with.
* If you don't have an algorithm that provides a guaranteed optimal solution (either via brute force, mathematical proof, or some combination thereof), feel free to provide a heuristic/best guess one.

## Bonus

Generalize this problem to an m-by-n grid. In this case, the input will be two digits "m" and "n", representing the width and height respectively, and the output would be a filled m-by-n grid. For example, input:

    grid(3,2)

Could produce an optimal solution like:

    313
    424

# Credit

This challenge was submitted by /u/GeneReddit123, many thanks! If you have a challenge idea, please share it in /r/dailyprogrammer_ideas and there's a good chance we'll use it.