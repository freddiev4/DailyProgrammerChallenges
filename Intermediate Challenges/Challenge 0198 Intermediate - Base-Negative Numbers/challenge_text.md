# [](#IntermediateIcon) _(Intermediate)_: Base-Negative Numbers

*"Don't be stupid, Elite6809!"*, I hear you say. *"You can't have a negative base."* Well, why not? Let's analyse what we mean by base. Given a base-**r** system, the column **p** places from the right (starting from zero), which contains the digit **n**, has the value **n**×**r**^(**p**). The binary columns 1, 2, 4, 8, 16, ... is the same as 2^(0), 2^(1), 2^(2), 2^(3), 2^(4). Nothing stops you from using a negative base with this system, except perhaps the understanding of the concept and practicality of its usage.

Let's imagine base -10 (negadecimal). Here, the place values for each column are now 1, -10, 100, -1000 and so on. Therefore, the negadecimal number 7211:

    -Thousands    Hundreds    -Tens    Units
        7            2           1       1
     (-7000)   +   (200)   +   (-10) +  (1) = -6809

Is equivalent to -6809 in standard decimal.

Your challenge is, given a negative base and a value, convert it to the representation in the corresponding positive base, and vice versa.

# Input and Output Description

## Challenge Input

You will accept two numbers: **r** and **n**. **n** is a number in base **r**. For example:

    -4 1302201

This input means 1302201 in base -4.

## Challenge Output

Print the value of the input number in the corresponding opposite-signed base, for example, for the input above:

    32201

As 1302201 in base -4 equals 32201 in base 4.

# Sample Inputs and Outputs

Input: `-10 12345678` (convert from base -10 to base 10)  
Output: `-8264462`

Input:`-7 4021553`  
Output: `4016423`

Similarly, if the given base is *positive*, convert back to the corresponding negative base.

Input: `7 4016423` (convert from base 7 to base -7)  
Output: `4021553`

Input: `6 -3014515`  
Output: `13155121`

## Extension (Hard)

Extend your program to support imaginary bases. Imaginary bases can represent any complex number. The principle is the same; for example, base 4*i* can be used to represent complex numbers much the same way as a cartesian representation like a+b*i*.
If you have forgotten the principles of imaginary numbers, re-read the challenge description for [The Complex Number](/r/dailyprogrammer/comments/2nr6c4/) - you might want to re-use some code from that challenge anyway.

# Notes

Try and do both the main challenge and extension without looking for the conversion algorithms on the internet. This is part of the challenge!