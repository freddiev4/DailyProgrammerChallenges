# [](#EasyIcon) **(Easy)**: Carry Adding

When you were first learning arithmetic, the way most people were tought to set out addition problems was like follows:

    23+456=
    
      23
    +456
     ---
     479
     ---

Look familiar? And remember how, if the number went above 10, you put the number below the line:

     559
    +447
     ---
    1006
     ---
     11

Those `1`s under the line are called the *carry* values - they are 'carried' from one column into the next. In today's challenge, you will take some numbers, add them up and (most importantly) display the output like it is shown above.

# Formal Inputs and Outputs

## Input Description

You will accept a list of non-negative integers in the format:

    559+447+13+102

Such that the carry value will never be greater than 9.

## Output Description

You are to output the result of the addition of the input numbers, in the format shown above.

# Sample Inputs and Outputs

## Sample Input

    23+9+66

## Sample Output

    23
     9
    66
    --
    98
    --
    1

## Sample Input

    8765+305

## Sample Output

    8765
     305
    ----
    9070
     ---
    1 1

## Sample Input

    12+34+56+78+90

## Sample Output

     12
     34
     56
     78
     90
    ---
    270
    ---
    22

## Sample Input

    999999+1

## Sample Output

     999999
          1
    -------
    1000000
    -------
    111111

# Extension

Extend your program to handle non-integer (ie. decimal) numbers.