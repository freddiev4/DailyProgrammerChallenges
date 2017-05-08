# Description

A mathagram is a puzzle where you have to fill in missing digits (x's) in a formula such that (1) the formula is true, and (2) every digit 1-9 is used exactly once. The formulas have the form:

    xxx + xxx = xxx

Write a program that lets you find solutions to mathagram puzzles. You can load the puzzle into your program using whatever format you want. You don't have to parse it as program input, and you don't need to format your output in any particular way. (You can do these things if you want to, of course.)

There are generally multiple possible solutions for a mathagram puzzle. You only need to find any one solution that fits the constraints.

# Example problem

    1xx + xxx = 468

# Example solution

    193 + 275 = 468

# Challenge problems

    xxx + x81 = 9x4  
    xxx + 5x1 = 86x
    xxx + 39x = x75

# Bonus 1

Extend your solution so that you can **efficiently** solve double mathagrams puzzles. In double puzzles, every digit from 1 through 9 is used twice, and the formulas have the form:

    xxx + xxx + xxx + xxx = xxx + xxx

Example problem for bonus 1:

    xxx + xxx + 5x3 + 123 = xxx + 795

Example solution for bonus 1:

    241 + 646 + 583 + 123 = 798 + 795

*A solution to the bonus is only valid if it completes in a reasonable amount of time!* Solve all of these challenge inputs before posting your code:

    xxx + xxx + 23x + 571 = xxx + x82
    xxx + xxx + xx7 + 212 = xxx + 889
    xxx + xxx + 1x6 + 142 = xxx + 553

# Bonus 2

**Efficiently** solve triple mathagrams puzzles. Every digit from 1 through 9 is used three times, and the formulas have the form:

    xxx + xxx + xxx + xxx + xxx = xxx + xxx + xxx + xxx

Example problem and solution for bonus 2:

    xxx + xxx + xxx + x29 + 821 = xxx + xxx + 8xx + 867
    943 + 541 + 541 + 529 + 821 = 972 + 673 + 863 + 867

Again, your solution **must** be efficient! Solve all of these challenge inputs before posting your code:

    xxx + xxx + xxx + 4x1 + 689 = xxx + xxx + x5x + 957
    xxx + xxx + xxx + 64x + 581 = xxx + xxx + xx2 + 623
    xxx + xxx + xxx + x81 + 759 = xxx + xxx + 8xx + 462
    xxx + xxx + xxx + 6x3 + 299 = xxx + xxx + x8x + 423
    xxx + xxx + xxx + 58x + 561 = xxx + xxx + xx7 + 993

EDIT: two more test cases from u/kalmakka:

    xxx + xxx + xxx + xxx + xxx = 987 + 944 + 921 + 8xx
    987 + 978 + 111 + 222 + 33x = xxx + xxx + xxx + xxx

*Thanks to u/jnazario for posting the idea behind today's challenge on r/dailyprogrammer_ideas!*