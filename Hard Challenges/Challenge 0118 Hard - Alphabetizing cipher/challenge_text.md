
# [](#HardIcon) *(Hard)*: Alphabetizing cipher
This challenge is an optimization problem. Your solution will be a string of the 26 letters of the alphabet in some order, such as:

    jfbqpwcvuamozhilgrxtkndesy

The string is a cipher. For this cipher, the letter `a` maps to `j`, the letter `b` maps to `f`, and so on. This cipher maps the word `bakery` to `fjmprs`. Notice that `fjmprs` is in alphabetical order. Your cipher's score is the number of words from the word list that it maps to a string in alphabetical order.

[The word list for this problem is here.](http://pastebin.com/9aFn1r27) It consists of the 7,260 six-letter words from the Enable word list that are made up of 6 different letters.

Since there are 60 words from the list that my example cipher maps to sorted strings, my score is 60. Can you do better? Post your solution, your score, and the program you used to generate it (if any).

Here's a python script that will evaluate your solution:

    abc = "abcdefghijklmnopqrstuvwxyz"
    words = open("enable-6.txt").read().splitlines()
    newabc = raw_input()
    assert len(newabc) == 26 and set(abc) == set(newabc)
    cipher = dict(zip(abc, newabc))
    for word in words:
      nword = "".join(map(cipher.get, word))
      if sorted(nword) == list(nword):
        print word, nword

*Author: Cosmologicon*
# Formal Inputs & Outputs
## Input Description
<Field to be removed>
## Output Description
<Field to be removed> 
# Sample Inputs & Outputs
## Sample Input
<Field to be removed> 
## Sample Output
<Field to be removed> 
# Challenge Input
<Field to be removed> 
## Challenge Input Solution
<Field to be removed> 
# Note
None
				