Sort a given set of strings based on a unique collating sequence for each position in a string.  Given N collating sequences, to sort strings of length greater than N, sequence i mod N is used at character position i.

 
For example, consider the three collating sequences:  
collating sequence 0 is: ASCII-order-ignore-case  
collating sequence 1 is: reverse-ASCII-order  
collating sequence 2 is: a-z 0-9 ASCII-order A-Z

In this example the strings

The Cat in the Hat  
the Rain in Spain  
The RAIN in Spain  
Beavis and Butthead

Note that the last ordering says lower case comes before digits; and digits before everything not upper case; and upper case follows all.

**The allowable notations for collating sequences are:**  

ASCII-order  
ASCII-order-ignore-case  
reverse-ASCII-order  
reverse-ASCII-order-ignore-case  
a-z  
A-Z  
0-9

These can occur in any order without repetition.

**Input will be in the form:**

N  
description of collating sequence 1  
..  
..  
description of collating sequence N  
line 1  
line 2  
..  
..  
line unknown number


So for the given example, the input would look like:

3  
ASCII-order-ignore-case  
reverse-ASCII-order  
a-z 0-9 ASCII-order A-Z  
The Cat in the Hat  
the Rain in Spain  
The RAIN in Spain  
Beavis and Butthead

* from a programming competition