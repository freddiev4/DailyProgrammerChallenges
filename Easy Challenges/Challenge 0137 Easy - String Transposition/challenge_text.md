# [](#EasyIcon) *(Easy)*: String Transposition

It can be helpful sometimes to rotate a string 90-degrees, like a big vertical "SALES" poster or your business name on vertical neon lights, like [this image from Las Vegas](http://imgur.com/766x8uM). Your goal is to write a program that does this, but for multiples lines of text. This is very similar to a [Matrix Transposition](http://en.wikipedia.org/wiki/Transpose), since the order we want returned is not a true 90-degree rotation of text.

*Author:* nint22

# Formal Inputs & Outputs
## Input Description

You will first be given an integer N which is the number of strings that follows. N will range inclusively from 1 to 16. Each line of text will have at most 256 characters, including the new-line (so at most 255 printable-characters, with the last being the new-line or carriage-return).

## Output Description

Simply print the given lines top-to-bottom. The first given line should be the left-most vertical line.

# Sample Inputs & Outputs
## Sample Input 1

    1
    Hello, World!

## Sample Output 1

    H
    e
    l
    l
    o
    ,
    
    W
    o
    r
    l
    d
    !
    
## Sample Input 2

    5
    Kernel
    Microcontroller
    Register
    Memory
    Operator

## Sample Output 2

    KMRMO
    eieep
    rcgme
    nrior
    eosra
    lctyt
     oe o
     nr r
     t
     r
     o
     l
     l
     e
     r
