#**Description:**


The Gorellians, at the far end of our galaxy, have discovered various samples of English text from our electronic transmissions, but they did not find the order of our alphabet. Being a very organized and orderly species, they want to have a way of ordering words, even in the strange symbols of English. Hence they must determine their own order.  


For instance, if they agree on the alphabetical order:  


UVWXYZNOPQRSTHIJKLMABCDEFG  


Then the following words would be in sorted order based on the above alphabet order:  


WHATEVER

ZONE

HOW

HOWEVER

HILL

ANY

ANTLER

COW

***
#**Input:**


The input will be formatted to enter the number of words to sort and the new Alphabet ordering and a list of words to sort. n should be > 0. The alphabet is assumed to be 26 letters with no duplicates and arranged in the new order. Also assumed there are n strings entered.


n (new alphabet ordering)

(word 1 of n)

(word 2 of n)

....

(word n of n)


##Example input 1:


8 UVWXYZNOPQRSTHIJKLMABCDEFG

ANTLER

ANY

COW

HILL

HOW

HOWEVER

WHATEVER

ZONE

***
#**Output:**


The list of words in sorted order based on the new order of the alphabet. The sort order should be based on the alphabet (case insensitive) and the words should be output to appear as the words were entered.

##Example of output for input 1:


WHATEVER

ZONE

HOW

HOWEVER

HILL

ANY

ANTLER

COW

***
#**Notes:**


The sorting should be case insensitive. Meaning that you do not sort it based on the ASCII value of the letters but by the letters. Your solution should handle an alphabet order that might be typed in upper/lower case. It will sort the words by this order and output the words as they were typed in.


##Example Input 2:


5 ZYXWVuTSRQpONMLkJIHGFEDCBa

go

aLL

ACM

teamS

Go


##Example output 2:


teamS

go

Go

aLL

ACM

***
#**Extra Challenge:**

Error check the input.


***
If the alphabet is missing letters it returns an error message and listing letters missing.


##Input for this:


4 abcdfghijklmnopsuvxz

error

checking

is

fun


##Output for this:


Error! Missing letters: e q r t w y

***
If the alphabet has duplicate letters it returns an error message listing all the duplicate letters used in the alphabet.


##Input for this:


4 abcdefaghijklmnoepqrstiuvwoxuyz

oh

really

yah

really


##Output for this:


Error! Duplicate letters found in alphabet: a e i o u

***
#**Challenge Credit:**


Based on the idea from /r/dailyprogrammer_ideas 

[(Link to Challenge idea)] (http://www.reddit.com/r/dailyprogrammer_ideas/comments/1yjruf/intermediate_sort_me/)
with some minor tweaks from me.


Thanks to /u/BlackholeDevice for submitting the idea!


Good luck everyone and have fun!
