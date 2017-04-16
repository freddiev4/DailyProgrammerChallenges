If you were to generate all permutations of the first three letters of the alphabet ("a", "b" and "c") and then sort them, you would get the following list of 6 permutations:

1. abc
2. acb
3. bac
4. bca
5. cab
6. cba

As you can see, the fourth permutation in a sorted list of all the permutations of "a", "b" and "c" is "bca".

Similarly, if we wanted the 30th permutation in a sorted list of all permutations of the first five letters of the alphabet (i.e. "abcde"), you get "baedc".

Define a function f(n,p) that generates the permutation number p in a sorted list of all permutations of the n first letters of the alphabet. So, for instance: 

f(3, 4) = "bca"    
f(5, 30) = "baedc"    
f(7, 1000) = "bdcfega"     
f(8, 20000) = "dhfebagc"    

Find f(11, 20000000)

***

Bonus:

Find f(20, 10^18 )