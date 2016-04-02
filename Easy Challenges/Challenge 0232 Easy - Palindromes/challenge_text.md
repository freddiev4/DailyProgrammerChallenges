#Description

A palindrome is a word or sentence that is spelled the same backwards and forwards. A simple of example of this is Swedish pop sensation ABBA, which, when written backwards, is also ABBA. Their hit song (and winner of the 1974 Eurovision Song Contest!) "Waterloo" is not a palindrome, because "Waterloo" backwards is "Oolretaw". 

Palindromes can be longer than one word as well. "Solo gigolos" (the saddest of all gigolos) is a palindrome, because if you write it backwards it becomes "Sologig olos", and if you move the space three places back (which you are allowed to do), that becomes "Solo gigolos". 

Today, you are going to write a program that detects whether or not a particular input is a valid palindrome. 

#Formal inputs &amp; outputs
##Inputs

On the first line of the input, you will receive a number specifying how many lines of input to read. After that, the input consists of some number of lines of text that you will read and determine whether or not it is a palindrome or not. 

The only important factor in validating palindromes is whether or not a sequence of letters is the same backwards and forwards. All other types of characters (spaces, punctuation, newlines, etc.) should be ignored, and whether a character is lower-case or upper-case is irrelevant. 

##Outputs

Output "Palindrome" if the input is a palindrome, "Not a palindrome" if it's not. 

#Sample inputs

##Input 1

    3
    Was it a car
    or a cat
    I saw?

##Output 1

    Palindrome

##Input 2

    4
    A man, a plan, 
    a canal, a hedgehog, 
    a podiatrist, 
    Panama!

##Output 2

    Not a palindrome

#Challenge inputs

##Input 1

    2
    Are we not drawn onward, 
    we few, drawn onward to new area?

##Input 2

Comedian Demitri Martin wrote a famous 224 palindrome, [test your code on that](http://www.pastemagazine.com/articles/2009/02/demetri-martins-palindrome-poem.html).

#Bonus

A two-word palindrome is (unsurprisingly) a palindrome that is two words long. "Swap paws", "Yell alley" and "sex axes" (don't ask) are examples of this. 

Using words from /r/dailyprogrammer's favorite wordlist [enable1.txt](https://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt&can=2&q=), how many two-word palindromes can you find? Note that just repeating the same palindromic word twice (i.e. "tenet tenet") does *not* count as proper two-word palindromes.

#Notes

A version of this problem was suggested by /u/halfmonty on /r/dailyprogrammer_ideas, and we thank him for his submission! He has been rewarded with a gold medal for his great deeds! 

If you have a problem you'd like to suggest, head on over to /r/dailyprogrammer_ideas and suggest it! Thanks!
