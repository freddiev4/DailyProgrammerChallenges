# [](#EasyIcon) __(Easy)__: Square Spirals

Take a square grid, and put a cross on the center point, like this:

    + + + + +
             
    + + + + +
             
    + + X + +
             
    + + + + +
             
    + + + + +

The grid is 5-by-5, and the cross indicates point 1. Let's call the top-left corner location (1, 1), so the center point is at location (3, 3). Now, place another cross to the right, and trace the path:

    + + + + +
             
    + + + + +
             
    + + X-X +
             
    + + + + +
             
    + + + + +

This second point (point 2) is now at location (4, 3). If you continually move around anticlockwise as much as you can from this point, you will form a square spiral, as this diagram shows the beginning of:

    + + + + +
             
    + X-X-X .
      |   | .
    + X X-X .
      |     |
    + X-X-X-X
             
    + + + + +

Your challenge today is to do two things: convert a point number to its location on the spiral, and vice versa.

# Formal Inputs and Outputs

## Input Specification

On the first line, you'll be given a number **S**. This is the size of the spiral. If **S** equals 5, then the grid is a 5-by-5 grid, as shown in the demonstration above. **S** will always be an odd number.

You will then be given one of two inputs on the next line:

* You'll be given a single number **N** - this is the point number of a point on the spiral.

* You'll be given two numbers **X** and **Y** (on the same line, separated by a space) - this is the location of a point on the spiral.

## Output Description

If you're given the point number of a point, work out its location. If you're given a location, find out its point number.

# Sample Inputs and Outputs

## Example 1

(Where is 8 on this spiral?)

    5-4-3
    |   |
    6 1-2
    |    
    7-8-9

### Input

    3
    8

### Output

    (2, 3)

## Example 2

This corresponds to the top-left point (1, 1) in [this 7-by-7 grid](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1d/Ulam_spiral_howto_all_numbers.svg/811px-Ulam_spiral_howto_all_numbers.svg.png).

### Input

    7
    1 1

### Output

    37

## Example 3

### Input

    11
    50

### Output
    
    (10, 9)

## Example 4

### Input

    9
    6 8

### Output

    47

If your solution can't solve the next two inputs before the heat death of the universe, don't worry.

## Example 5

Let's test how fast your solution is!

### Input

    1024716039
    557614022

### Output

    (512353188, 512346213)

## Example 6

:D

### Input

    234653477
    11777272 289722

### Output

    54790653381545607

# Finally

Got any cool challenge ideas? Submit them to /r/DailyProgrammer_Ideas!