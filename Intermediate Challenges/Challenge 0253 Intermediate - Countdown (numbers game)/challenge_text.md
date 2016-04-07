Countdown is a British ripoff of a French TV show where given 6 starting numbers, the 4 basic arithmetic operators are used to manipulate the given 6 numbers to arrive at a given total.

[Full rules and ideas here](http://datagenetics.com/blog/august32014/index.html)

#It's just the first count down (tedudu do)
A simplified ruleset is to test for solutions that don't require parentheses on one side of an operator, and no operator precedence.  All of the problems here have such an exact solution.

**sample input**  
 50  8  3  7  2  10 makes 556

**sample output**  
((((50 - 7) × 3) + 10) × 8) ÷ 2  
= 556

**challenge input**  
 25 50 75 100 3 6 makes 952

(You may also simplify the solution by assuming - and ÷ are only applied in one direction/order)

# Must shout a second count down
RPN notation and a mini stack language can permit parenthesized group operations without using parentheses

1 5 100 5 - × 9 - 10 + +  
= 477

equivalent to:  1+(((5×(100-5))-9)+10)

**challenge:**  Allow for parenthesized grouped operations or RPN formatted expressions in determining solution.

#Its the final count down
Use either program 1 or 2 to test which target totals from 0 to 1000 cannot be obtained by combining the 4 basic operators, or alternatively, find the lower target total that fails for the **input**:

25 50 75 100 3 6