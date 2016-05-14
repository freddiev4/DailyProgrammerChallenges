# Permutations

The "permutations of 3" for the sake of this text are the possible arrangements of the list of first 3 numbers (0 based but optional) in sorted order

    0 1 2
    0 2 1
    1 0 2
    1 2 0
    2 0 1
    2 1 0

The permutation number is the index in this list.  The "3rd permutation of 3" is `1 0 2`.  "1 2 0 has permutation number `3` (0 based)"


**input:**

what is 240th permutation of 6  
what is 3240th permutation of 7  

**output:**  
    1 5 4 3 2 0  
    4 2 6 5 3 1 0

# combinations

The "combinations of 3 out of 6" is the sorted list of the possible ways to take 3 items out of the first 6 numbers (as a set where order does not matter)

    0 1 2
    0 1 3
    0 1 4
    0 1 5
    0 2 3
    0 2 4
    0 2 5
    0 3 4
    0 3 5
    0 4 5
    1 2 3
    1 2 4
    1 2 5
    1 3 4
    1 3 5
    1 4 5
    2 3 4
    2 3 5
    2 4 5
    3 4 5

The "3rd combination number of 3 out of 6 is `0 1 4`".  "0 2 4 is combination index/number 5 or the 6th combination of 3 out of 6"

**input:**  
24th combination of 3 out of 8   
112th combination of 4 out of 9 

**output**  
   1 2 5  
 3 4 5 6



Brute force solutions (generate full list, then take the number/index) to all of today's challenges are encouraged.