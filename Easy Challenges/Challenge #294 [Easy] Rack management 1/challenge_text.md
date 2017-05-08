# Description

Today's challenge is inspired by the board game Scrabble. Given a set of 7 letter tiles and a word, determine whether you can make the given word using the given tiles.

Feel free to format your input and output however you like. You don't need to read from your program's input if you don't want to - you can just write a function that does the logic. I'm representing a set of tiles as a single string, but you can represent it using whatever data structure you want.

# Examples

    scrabble("ladilmy", "daily") -> true
    scrabble("eerriin", "eerie") -> false
    scrabble("orrpgma", "program") -> true
    scrabble("orppgma", "program") -> false

# Optional Bonus 1

Handle blank tiles (represented by `"?"`). These are "wild card" tiles that can stand in for any single letter.

    scrabble("pizza??", "pizzazz") -> true
    scrabble("piizza?", "pizzazz") -> false
    scrabble("a??????", "program") -> true
    scrabble("b??????", "program") -> false

# Optional Bonus 2

Given a set of up to 20 letter tiles, determine the longest word from [the enable1 English word list](https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/dotnetperls-controls/enable1.txt) that can be formed using the tiles.

    longest("dcthoyueorza") ->  "coauthored"
    longest("uruqrnytrois") -> "turquois"
    longest("rryqeiaegicgeo??") -> "greengrocery"
    longest("udosjanyuiuebr??") -> "subordinately"
    longest("vaakojeaietg????????") -> "ovolactovegetarian"

(For all of these examples, there is a unique longest word from the list. In the case of a tie, any word that's tied for the longest is a valid output.)

# Optional Bonus 3

Consider the case where every tile you use is worth a certain number of points, [given on the Wikpedia page for Scrabble](https://en.wikipedia.org/wiki/Scrabble_letter_distributions#English). E.g. `a` is worth 1 point, `b` is worth 3 points, etc.

For the purpose of this problem, if you use a blank tile to form a word, it counts as 0 points. For instance, spelling `"program"` from `"progaaf????"` gets you 8 points, because you have to use blanks for the `m` and one of the `r`s, spelling `prog?a?`. This scores 3 + 1 + 1 + 2 + 1 = 8 points, for the `p`, `r`, `o`, `g`, and `a`, respectively.

Given a set of up to 20 tiles, determine the highest-scoring word from the word list that can be formed using the tiles.

    highest("dcthoyueorza") ->  "zydeco"
    highest("uruqrnytrois") -> "squinty"
    highest("rryqeiaegicgeo??") -> "reacquiring"
    highest("udosjanyuiuebr??") -> "jaybirds"
    highest("vaakojeaietg????????") -> "straightjacketed"