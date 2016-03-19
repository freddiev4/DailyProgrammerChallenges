As is well known, the decimal expansion of sqrt(N) when N is not a perfect square, goes on forever and does not repeat. For instance, sqrt(8) starts out 2.82842712... and never starts repeating itself. This is because when N is not a perfect square, [sqrt(N) is irrational](http://en.wikipedia.org/wiki/Infinite_descent#Irrationality_of_.E2.88.9Ak_if_it_is_not_an_integer) and [all numbers with repeating decimals are rational](http://en.wikipedia.org/wiki/Repeating_decimal#Every_repeating_or_terminating_decimal_is_a_rational_number). 

However, if instead of using a decimal representation, you use a [continued fraction representation](http://en.wikipedia.org/wiki/Continued_fraction) of sqrt(N) when N is not a perfect square, then it will always have a repeating period. For instance, [this is the beginning of the continued fraction of sqrt(8)](http://i.imgur.com/WWlFJ.gif). The pattern of 1,4,1,4,1,4,... will repeat forever (the first integer, the 2, is not included in the period). A continued fraction with a period like this can be written as [a; [b,c,d,...]], where a is the first number outside of the fraction, and b, c, d, etc. are the period repeating inside the fraction. For example, sqrt(8) has a continued fraction representation of [2; [1,4]].

Here are some other continued fraction representations of square roots:
    
    sqrt(2) = [1; [2]]
    sqrt(13) = [3; [1, 1, 1, 1, 6]]
    sqrt(19) = [4; [2, 1, 3, 1, 2, 8]]
    sqrt(26) = [5; [10]]
    
Let Q(N) be the sum of the numbers in the period for the continued fraction representation of sqrt(N). So Q(19) = 2 + 1 + 3 + 1 + 2 + 8 = 17 and Q(26) = 10. When N is a perfect square, Q(N) is defined to be 0.

The sum of Q(N) for 1 &le; N &le; 100 is 1780. 

What is the sum of Q(N) for 1 &le; N &le; 50000? 

***

Bonus: If your code for solving this problem includes use of the sqrt() function, solve [today's intermediate problem](http://www.reddit.com/r/dailyprogrammer/comments/uo14v/662012_challenge_61_intermediate/) and use your own implementation of sqrt().