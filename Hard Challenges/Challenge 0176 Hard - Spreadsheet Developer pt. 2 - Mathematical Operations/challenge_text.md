# [](#EasyIcon) _(Hard)_: Spreadsheet Developer pt. 2: Mathematical Operations

Today we are building on [what we did on Monday](/r/dailyprogrammer/comments/2dvc81/8182014_challenge_176_easy_spreadsheet_developer/). We be using the selection system we developed last time and create a way of using it to manipulate numerical data in a spreadsheet.

The spreadsheet should ideally be able to expand dynamically in either direction but don't worry about that too much. We will be able to perform 4 types of operation on the spreadsheet.

* Assignment. This allows setting any number of cells to one value or cell. For example, `A3:A4&A5=5.23` or `F7:G11~A2=A1`.

* Infix operators - `+`, `-`, `*`, `/` and `^` (exponent). These allow setting any number of cells to the result of a mathematical operation (only one - no compound operations are required but you can add them if you're up to it!) For example, `F2&F4=2*5` or `A1:C3=2^D5`. If you want, add support for mathematical constants such as *e* (2.71828183) or *pi* (3.14159265).

* Functions. These allow setting any number of cells to the result of a function which takes a variable number of cells. Your program must support the functions `sum` (adds the value of all the given cells), `product` (multiplies the value of all the given cells) and `average` (calculates the mean average of all the given cells). This looks like `A1:C3=average(D1:D20)`.

* Print. This changes nothing but prints the value of the given cell to the screen. This should only take 1 cell (if you can think of a way to format and print multiple cells, go ahead.) This looks like `A3`, and would print the number in A3 to the screen.

All of the cells on the left-hand side are set to the same value. Cell values default to 0. The cell's contents are not to be evaluated immediately but rather when they are needed, so you could do this:

    A1=5
    A2=A1*2
    A2 >>prints 10
    A1=7
    A2 >>prints 14

After you've done all this, give yourself a whopping big pat on the back, go [here](/r/IAmA/comments/227tme/) and apply to work on the Excel team - you're pretty much there!

# Formal Inputs and Outputs

## Input Description

You will be given commands as described above, one on each line.

## Output Description

Whenever the user requests the value of a cell, print it.

# Example Inputs and Outputs

## Example Input

    A1=3
    A2=A1*3
    A3=A2^2
    A4=average(A1:A3)
    A4

## Example Output

    31