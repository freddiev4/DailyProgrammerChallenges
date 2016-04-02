The complexity c(n) of a whole number is the smallest possible sum of a set of whole numbers that can be combined to make n using only addition, multiplication, and parentheses. Some examples:

* c(9) = 6, because 9 = 3x3 and 3+3 = 6
* c(11) = 8, because 11 = 2x5+1 and 2+5+1 = 8
* c(154) = 16, because 154 = 2x(2x3+1)x(3x3+2) and 2+2+3+1+3+3+2 = 16
* c(446) = 19, because 446 = 2x(2x3x(2x2x3x3+1)+1) and 2+2+3+2+2+3+3+1+1 = 19

In each case, only the formula with the smallest sum matters. For instance, 11 = 3+2x4, but since 3+2+4 = 9, and there's a formula with a sum of 8, this one doesn't matter. Since 5 is the highest number for which c(n) = n, 5 is the highest number that will appear in any formula.
Write a program that calculates the complexity of every whole number and finds at least one formula whose sum is that complexity [Check complexities for numbers through 10,000 here.](http://oeis.org/A005245/b005245.txt)


Post formulas for 956 (complexity 22) and 6458 (complexity 29).

Thanks to cosmologicon for today's challenge at [/r/dailyprogrammer_ideas](/r/dailyprogrammer_ideas)  
