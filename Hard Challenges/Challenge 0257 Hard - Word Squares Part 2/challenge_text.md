# Description

Back to word squares, a type of acrostic, a word puzzle. A word square is formed using a grid with letters arranged that spell valid English language words when you read from left to right or from top to bottom. The challenge is that in arranging the words that you spell valid words.

Today's challenge is to input a set of dimensions (n*m) and work with the [enable1.txt](https://github.com/dolph/dictionary/blob/master/enable1.txt) dictionary file and produce a valid word square. 

To clarify, the words you use in each column doesn't have to be the same word in the corresponding row provided all words are valid English language words. You're free to get creative. 

# Input Description

You'll be given pair of integers telling you how many rows and columns to solve for. Example:

    4 4

# Output Description

Your program should emit a valid word square with the letters placed to form valid English language words. Example:

    rose
    oven
    send
    ends

# Challenge Input

    5 7
    6 6

Note that even though we call it a word square it's possibly a rectangle. Word squares just sounds so much better even if it's less accurate.

# Challenge Output

Multiple valid ones may be produced, but here's a few:

    glasses
    relapse
    imitate
    smeared
    tannery

    garter
    averse
    recite
    tribal
    estate
    reeled