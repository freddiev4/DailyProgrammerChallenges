The number of permutations of a list that includes repeats is `(factorial of list length) / (product of factorials of each items repeat frequency)

for the list `0 0 1 2` the permutations in order are

    0 0 1 2
    0 0 2 1
    0 1 0 2
    0 1 2 0
    0 2 0 1
    0 2 1 0
    1 0 0 2
    1 0 2 0
    1 2 0 0
    2 0 0 1
    2 0 1 0
    2 1 0 0

#1.  Calculate permutation number of list that may include repeats

The permutation number is similar to Monday and Wednesday's challenge.  But only wednesday's approach of calculating it without generating the full list will work (fast) for the longer inputs.  The input varies from previous ones in that you are provided a list rather than a number to account for possible repeats.  If there are no repeats, then the answer is the same as the part 2 (wednesday) challenge.

**input:**  
5 4 3 2 1 0  
2 1 0 0  
5 0 1 2 5 0 1 2 0 0 1 1 5 4 3 2 1 0  
8 8 8 8 8 8 8 8 8 7 7 7 6 5 0 1 2 5 0 1 2 0 0 1 1 5 4 3 2 1 0 6 7 8

**output:** (0 based indexes)  
719  
11  
10577286119  
3269605362042919527837624

# 2. retrieve list from permutation number and sorted list

input is in format: permutation_number, sorted list to permute

output format is above part 1 input rows.

**input:**

     719, 0 1 2 3 4 5  
     11, 0 0 1 2
     10577286119, 0 0 0 0 0 1 1 1 1 1 2 2 2 3 4 5 5 5
     3269605362042919527837624, 0 0 0 0 0 1 1 1 1 1 2 2 2 3 4 5 5 5 6 6 7 7 7 7 8 8 8 8 8 8 8 8 8 8

# bonus

use the above function and wednesday's combination number (optional) to compress/encode a list into a fixed set of numbers (with enough information to decode it)

**input:**  
hello, heely owler world!

You might wish to convert to ascii, then calculate the combination number for the unique ascii codes, then calculate the permutation number with each letter replaced by contiguous indexes.