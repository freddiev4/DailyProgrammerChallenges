# Description

Today's challenge is loosely inspired by the board game Scrabble. You will need to download [the enable1 English word list](https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/dotnetperls-controls/enable1.txt) in order to check your solution. You will also need [the point value of each letter tile](https://en.wikipedia.org/wiki/Scrabble_letter_distributions#English). For instance, `a` is worth 1, `b` is worth 3, etc. Here's the point values of the letters `a` through `z`:

    [1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10]

For this challenge, the score of a word is defined as 1x the first letter's point value, plus 2x the second letters, 3x the third letter's, and so on. For instance, the score of the word `daily` is 1x2 + 2x1 + 3x1 + 4x1 + 5x4 = 31.

Given a set of 10 tiles, find the highest score possible for a single word from the word list that can be made using the tiles.

# Examples

In all these examples, there is a single word in the word list that has the maximum score, but that won't always be the case.

    highest("iogsvooely") -> 44 ("oology")
    highest("seevurtfci") -> 52 ("service")
    highest("vepredequi") -> 78 ("reequip")
    highest("umnyeoumcp") -> ???
    highest("orhvtudmcz") -> ???
    highest("fyilnprtia") -> ???

# Optional bonus 1

Make your solution more efficient than testing every single word in the word list to see whether it can be formed. For this you can spend time "pre-processing" the word list however you like, as long as you don't need to know the tile set to do your pre-processing. The goal is, once you're given the set of tiles, to return your answer as quickly as possible.

How fast can get the maximum score for each of 100,000 sets of 10 tiles? Here's a shell command to generate 100,000 random sets, if you want to challenge yourself:

    cat /dev/urandom | tr A-Z eeeeeaaaaiiiooonnrrttlsudg | tr -dc a-z | fold -w 10 | head -n 100000

# Optional bonus 2

Handle up to 20 tiles, as well as blank tiles (represented with `?`). These are "wild card" tiles that may stand in for any letter, but are always worth 0 points. For instance, `"?ai?y"` is a valid play (beacuse of the word `daily`) worth 1x0 + 2x1 + 3x1 + 4x0 + 5x4 = 25 points.

    highest("yleualaaoitoai??????") -> 171 ("semiautomatically")
    highest("afaimznqxtiaar??????") -> 239 ("ventriloquize")
    highest("yrkavtargoenem??????") -> ???
    highest("gasfreubevuiex??????") -> ???

Here's a shell command for 20-set tiles that also includes a few blanks:

    cat /dev/urandom | tr A-Z eeeeeaaaaiiiooonnrrttlsudg | tr 0-9 ? | tr -dc a-z? | fold -w 20 | head -n 100000