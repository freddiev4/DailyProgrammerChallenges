The set {2,3,5,7,11} has 32 subsets, and if you multiply the elements of each subset together, you get the "product" of that specific subset. So for instance, {2,5,7} is a subset of {2,3,5,7,11} and it has the product 70 (i.e. 2\*5\*7).

The subset of {2,3,5,7,11} with the largest product that *does not exceed 100* is {7,11}, with the product 77.

Given a set *s* and a number *v*, define A(s,v) as the subset of s with the largest product that does not exceed v. Also, define p(n) as the set of the first n primes (thus p(5) is equal to {2,3,5,7,11}). Here are some examples of A(p(n), v):

    A(p(5), 100) = {7, 11}                        
    A(p(7), 1000) = {5, 11, 17}                   
    A(p(8), 2000) = {3, 5, 7, 19}                 
    A(p(10), 10000000) = {2, 5, 7, 11, 19, 23, 29}

Find A(p(20), 10^18 )

***

BONUS: Find A(p(40), 10^60 )

***

NOTES: If it is more convienient, you are allowed to make your A(s,v) function output the product instead of the subset itself, so A(p(5), 100) = 77 instead of {7,11}. Watch out though, the numbers can get very big. 