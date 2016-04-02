Your friend is an anthropology major who is studying roman history. They have never been able to quite get a handle for roman numerals and how to read them, so they've asked you to come up with a simple program that will let them input some numbers and return roman numerals, as well as the opposite, to input roman numerals and return base-10 numbers. They are bribing you with Indiana Jones memorabilia, so you are totally up for the challenge!

#Description


Most people learn about roman numerals at a young age. If you look at many analog clocks, you will find that many of them actually use roman numerals for the numbers. Roman numerals do not just stop at 12 though, they actually can represent numbers as high as 4999 using their most basic form.
The challenge, is to create a program that will allow you to convert decimal (base-10) numbers to roman numerals as well as roman numerals to decimal numbers. The history of roman numerals is a bit debated because of their varied use throughout history and a seeming lack of a standard definition. Some rules are well accepted and some less-so. Here are the guidelines for your implementation:



| I   | V   | X    | L   | C      | D     | M |
|:---|:---|----:|:---|:------|:----|:---|
| 1 | 5     | 10  | 50  | 100  |500   |1000    
   


#Rules

You cannot repeat the same roman numeral more than three times in a row, except for M, which can be added up to four times. (Note: Some descriptions of roman numerals allows for IIII to represent 4 instead of IV. For the purposes of this exercise, that is not allowed.)
When read from left to right, if successive roman numerals decrease or stay the same in value, you add them to the total sum.
When read from left to right, if successive roman numerals increase in value, you subtract the smaller value from the larger one and add the result to the total sum.

#Restrictions

I can only be subtracted from V or X

X can only be subtracted from L or C

C can only be subtracted from D or M

Only one smaller value can be subtracted from a following larger value. (e.g. 'IIX' would be an invalid way to represent the number 8)

#Examples

XII = 10 + 1 + 1 = 12

MDCCLXXVI = 1000 + 500 + 100 + 100 + 50 + 10 + 10 + 5 + 1 = 1776

IX = "1 from 10" = 10 - 1 = 9

XCIV = "10 from 100" + "1 from 5" = (100 - 10) + (5 - 1) = 90 + 4 = 94

#Inputs & Outputs

Your program should be able to accept numbers in either integer or roman numeral format to return the other. You may want to add validation checks on the input.
When converting to a roman numeral, the maximum number is 4999.
When converting from a roman numeral, I,V,X,L,C,D,M are the only valid characters.
You should be able to accept one or many numbers or numerals and convert to the other direction.

#Challenge

Some historical accounts state that roman numerals could actually go much higher than 4999. There are incredibly varied explanations and syntactical requirements for them. Some state that an over-line (vinculum) would be used over a number to multiply it by 1000, some say that you would put a curved line on either side of a number to multiply it by 1000.
For the challenge, see if you can add support to your code to allow parenthesis to encapsulate parts of a number that can be multiplied by one thousand. You can nest parenthesis as well to allow for numbers that are incredibly large.

#Restriction

The last roman numeral digit inside a set of parenthesis can not be an "I". There are two reasons for this (1) because historical accounts claimed that confusion would happen with the curved lines that encapsulate a number to be multiplied by one thousand and (2) because the easiest way to validate your numbers is with Wolfram Alpha and they do not allow it either.

#Examples

(V)M = 5*1000 + 1000 = 6000

(X)MMCCCXLV = 10*1000 + 1000 + 1000 + 100 + 100 + 100 + (50 - 10) + 5 = 10000 + 2000 + 300 + 40 + 5 = 12345

((XV)M)DCC = ((10 + 5) * 1000 + 1000) * 1000 + 500 + 100 + 100 = (15000 + 1000) * 1000 + 1700 = 16000000 + 1700 = 16001700

#Hints

You can visit Wolfram Alpha to validate some of your numbers if you are having any trouble.
http://www.wolframalpha.com/input/?i=314+in+roman+numerals

#Sample Data
##Basic
IV = 4


XXXIV = 34


CCLXVII = 267


DCCLXIV = 764


CMLXXXVII = 987


MCMLXXXIII = 1983


MMXIV = 2014


MMMM = 4000


MMMMCMXCIX = 4999


##Challenge
(V) = 5000


(V)CDLXXVIII = 5478


(V)M = 6000


(IX) = 9000


(X)M = 11000


(X)MM = 12000


(X)MMCCCXLV = 12345


(CCCX)MMMMCLIX = 314159


(DLXXV)MMMCCLXVII = 578267


(MMMCCXV)CDLXVIII = 3215468


(MMMMCCX)MMMMCDLXVIII = 4214468


(MMMMCCXV)CDLXVIII = 4215468


(MMMMCCXV)MMMCDLXVIII = 4218468


(MMMMCCXIX)CDLXVIII = 4219468


((XV)MDCCLXXV)MMCCXVI = 16777216


((CCCX)MMMMCLIX)CCLXV = 314159265


((MLXX)MMMDCCXL)MDCCCXXIV = 1073741824

#Finally
Have a good challenge idea?


Consider submitting it to /r/dailyprogrammer_ideas

Thanks to /u/pshatmsft for the submission!