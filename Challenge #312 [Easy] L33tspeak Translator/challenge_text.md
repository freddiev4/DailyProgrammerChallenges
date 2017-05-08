# Description

L33tspeak - the act of speaking like a computer hacker (or hax0r) - was popularized in the late 1990s as a mechanism of abusing ASCII art and character mappings to confuse outsiders. It was a lot of fun. [One popular comic strip](http://megatokyo.com/strip/9) in 2000 showed just how far the joke ran. 

In L33Tspeak you substitute letters for their rough outlines in ASCII characters, e.g. symbols or numbers. You can have 1:1 mappings (like E -> 3) or 1:many mappings (like W -> `//). So then you wind up with words like this:

    BASIC => 6451C
    ELEET => 31337 (pronounced elite)
    WOW => `//0`//
    MOM => (V)0(V)

## Mappings

For this challenge we'll be using a subset of American Standard Leetspeak:

    A -> 4
    B -> 6
    E -> 3
    I -> 1
    L -> 1
    M -> (V)
    N -> (\)
    O -> 0
    S -> 5
    T -> 7
    V -> \/
    W -> `//

Your challenge, should you choose to accept it, is to translate to and from L33T. 

# Input Description

You'll be given a word or a short phrase, one per line, and asked to convert it from L33T or to L33T. Examples:

    31337 
    storm 

# Output Description

You should emit the translated words: Examples:

    31337 -> eleet
    storm -> 570R(V)

# Challenge Input

    I am elite.
    Da pain!
    Eye need help!
    3Y3 (\)33d j00 t0 g37 d4 d0c70r.
    1 n33d m4 p1llz!

# Challenge Output

    I am elite. -> 1 4m 37173
    Da pain! -> D4 P41(\)!
    Eye need help! -> 3Y3 (\)33D H31P!
    3Y3 (\)33d j00 t0 g37 d4 d0c70r. -> Eye need j00 to get da doctor.
    1 n33d m4 p1llz! -> I need ma pillz!

