# Description

In mathematics, a Ruth–Aaron pair consists of two consecutive integers (e.g. 714 and 715) for which the sums of the *distinct* prime factors of each integer are equal. For example, we know that (714, 715) is a valid Ruth-Aaron pair because its distinct prime factors are:

    714 = 2 * 3 * 7 * 17
    715 = 5 * 11 * 13

and the sum of those is both 29:

    2 + 3 + 7 + 17 = 5 + 11 + 13 = 29

The name was given by Carl Pomerance, a mathematician at the University of Georgia, for Babe Ruth and Hank Aaron, as Ruth's career regular-season home run total was 714, a record which Aaron eclipsed on April 8, 1974, when he hit his 715th career home run. A student of one of Pomerance's colleagues noticed that the sums of the distinct prime factors of 714 and 715 were equal.

For a little more on it, see MathWorld - http://mathworld.wolfram.com/Ruth-AaronPair.html

Your task today is to determine if a pair of numbers is indeed a valid Ruth-Aaron pair.

# Input Description

You'll be given a single integer *N* on one line to tell you how many pairs to read, and then that many pairs as two-tuples. For example:

    3
    (714,715)
    (77,78)
    (20,21)

# Output Description

Your program should emit if the numbers are valid Ruth-Aaron pairs. Example:

    (714,715) VALID
    (77,78) VALID
    (20,21) NOT VALID

# Chalenge Input

    4
    (5,6) 
    (2107,2108) 
    (492,493) 
    (128,129) 

# Challenge Output

    (5,6) VALID
    (2107,2108) VALID
    (492,493) VALID
    (128,129) NOT VALID