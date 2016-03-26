In most cases, humans use a decimal system. Scientists have suggested that this way to count things has been defined by our hands with 5 fingers each (total of 10 fingers). When the computer was developed, the binary system was implemented because of the two options that electricity allows (current or no current). Today, we’ll throw practical sensibilities in the garbage and define a system to write all the integers that is based on operators and the static natural number sequence (integers 0 or higher).  Call it NOS (Natural Operator Sequence) base.

#Rules

1. Each digit in a number represents one of 3 operators: -  `0: +` `1: -` `2: *`
2. The length of the number (count of digits) limits the natural number sequence used.  A 4 digit number means the operators are inserted into the sequence `0 _ 1 _ 2 _ 3 _ 4`
3. Operators are inserted left to right, and there are no special precedence rules for `*` multiplication.
3. The encoding used should use the fewest number of digits/operators possible:

Possible encodings of the number `10` are:

0000 = 0 + 1 + 2 + 3 + 4   
0220 = 0 + 1 * 2 * 3 + 4  
02212 = 0 + 1 * 2 * 3 - 4 * 5  

Only the first 2 representations satisfy the 4th rule of being the shortest possible:

**optional 5th rule:**  As a tie break for "correct representation" use the representation with the most `0`s (representing +), and optionally if still tied, use the representation that would sort first.  ex:  first above `0000` representation of 10 has the most `0`'s.  These tie breakers are arbitrary, and you may use any tie breaking scheme you want.

The number 2 can be represented as either `02` or `20`.  By optional last rule, `02` is the "correct"  representation.

#1 easy: read NOS base numbers (optional)

**input**:  
10020  

**output**:  
21  

# 2 hard:  Find the shortest NOS representation of a decimal number

**input**:  
21  

**output**:  
10020  

Find the shortest NOS representations for numbers up to say 50.

# Philosophy bonus:

Speculate optimistically regarding interesting or practical features of using operators and a known sequence as a base system, or... merciless denigrate the optimistic fools that may dare propose thoughts.

# thanks to:

/u/jedidreyfus and /u/cheers- for the challenge idea they posted to /r/dailyprogrammer_ideas   
