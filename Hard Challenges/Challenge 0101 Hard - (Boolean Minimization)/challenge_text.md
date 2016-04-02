For difficult 101, I thought I'd do something with binary in it.

Write a program that reads in a file containing 2^n 0s and 1s as ascii characters.  You will have to solve for N given the number of 0s and 1s in the file,
as it will not be given in the file.  These 0s and 1s are to be interpreted as the outputs of a truth table in N variables.  

Given this truth table, output a minimal boolean expression of the function in some form.  (
[Hint1](http://en.wikipedia.org/wiki/Quine%E2%80%93McCluskey_algorithm),        [hint2](http://en.wikipedia.org/wiki/Karnaugh_map))

For example, one implementation could read in this input file

    0000010111111110

This is a 4-variable boolean function with the given truth table.  The program could minimize the formula, and could output

    f(abcd)=ac'+ab'+bcd'

or 
    
    f(0123)=02'+01'+123'