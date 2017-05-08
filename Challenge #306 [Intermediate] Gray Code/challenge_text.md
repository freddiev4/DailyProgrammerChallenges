# Description

[Gray code](https://en.wikipedia.org/wiki/Gray_code), so named after discoverer Frank Gray, is a binary numeral system where two successive values differ in only one bit (binary digit). The reflected binary code was originally designed to prevent spurious output from electromechanical switches. Today, Gray code is widely used to facilitate error correction in digital communications such as digital terrestrial television and some cable TV systems.

Gray code differs from regular binary counting sequences in one key way: because sequential values can have only a single bit difference from their predecessor, you wind up with a non-linear progression of base 10 integers (see column 4, "Gray as decimal"):


|	Decimal|	Binary|	Gray|	Gray as decimal|	
| ------------ | :-----------:| :-----------: | ----------- |
|	0|	000|	000|	0|	
|	1|	001|	001|	1|	
|	2|	010|	011|	3|	
|	3|	011|	010|	2|	
|	4|	100|	110|	6|	
|	5|	101|	111|	7|	
|	6|	110|	101|	5|	
|	7|	111|	100|	4|	

The problem with natural binary codes is that physical switches are not ideal: it is very unlikely that physical switches will change states exactly in synchrony. In the transition between the two states shown above, all three switches change state. In the brief period while all are changing, the switches will read some spurious position.  The Gray code solves this problem by changing only one switch at a time, so there is never any ambiguity of position.

The Gray code has multiple applications including position encoders, genetic algorithms, error correction codes, Karnaugh map labeling, and digital clocks.

# Input and Description

Your challenge today is to write a program that can generate a Gray code sequence of *n* bits in length. For example, if you were given *n = 2* your program should emit:

    00
    01
    11
    10

# Challenge Inputs

    8
    16

# Bonus

Write a program that can construct an *n*-ary Gray code, so not just binary but, say, ternary (for an arbitrary bit width, in this example 2), where successive values differ by one *position* (so 0<->2 is OK):

    00
    01
    02
    12
    10
    11
    21
    22
    20

