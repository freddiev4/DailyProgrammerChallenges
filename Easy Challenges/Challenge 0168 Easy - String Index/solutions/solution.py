# @Author: Ouss4
# @Github: github.com/Ouss4
# @Date: 15/05/2016
# @Description: Solution for Easy 168.     

import re
def getAtI(s, i):
    words = "".join([c if re.search('([a-zA-Z0-9]+)', c) else " " for c in s]).split()
    return " " if i-1 > len(words) - 1 or i-1 < 0 else words[i-1]

s = "...You...!!!@!3124131212 Hello have this is a --- string Solved !!...? to test @\n\n\n#!#@#@%$^**#$@ Congratz this!!!!!!!!!!!!!!!!one ---Problem\n\n"
for i in [12, -1, 1, -100, 4, 1000, 9, -1000, 16, 13, 17, 15]:
    print(getAtI(s, i))
   
