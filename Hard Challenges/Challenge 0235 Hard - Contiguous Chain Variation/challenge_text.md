# Description

Based on [Challenge #227 Contiguous chains](http://redd.it/3gpjn3)
... but with a chain meaning 1 *continuous* strand, where each link in the chain can be connected to *at most* two neighbors. For the purposes of this problem, chains can only be contiguous if they connect horizontally of vertically, not diagonally (which is the same original constraint).

For example, the input:

    4 9
    xxxx xxxx
       xxx   
    x   x   x
    xxxxxxxxx

has at least 3 chains, with several valid layouts for the chains. One possible layout that shows 3 chains:

    1111 2222
       112
    3   1   3
    333333333

Another way to find 3:

    1111 1111
       111
    2   2   3
    222223333

There is also a valid set of 4 chains:

    1111 2222
       111
    3   3   4
    333334444

but 4 is not a correct (minimal) output, because 3 is possible.

Your challenge, should you choose to accept it, is to find the minimum number of chains in a given input.

# Challenge Input

    4 9
    xxxx xxxx
       xxx   
    x   x   x
    xxxxxxxxx

# Challenge Output

    3

# Credit

This challenge was suggested by /u/BarqsDew over in /r/DailyProgrammer_Ideas. If you have any suggested challenges, please share them and there's a good chance we'll use them. 