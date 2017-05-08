# Description

Today's challenge is an optimization problem. I'll give you the rules of a game, loosely inspired by solitaire Scrabble, and you try to get the best score possible. Post your score along with the moves you make. You may also post or link to the code you used to get the score.

# Game rules

Start with an empty tile rack that can hold 10 letter tiles, and the following row of 100 tiles:

    sd?zeioao?mluvepesceinfxt?wyiru?ie?giator?t??nuefje?l?odndrotpewlgoobiinysagacaqski?aeh?rbhaervtnl?m

These are the tiles you can draw from. Your turn consists of the following steps:

1. Draw tiles from the left and right sides of the row and place them on your rack. You cannot draw a tile that's not on the left or right end of the row, and you cannot rearrange the tiles in the row. Keep drawing until you have 10 tiles on your rack, or the row is empty.
2. Play a word that appears in the [enable1 word list](https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/dotnetperls-controls/enable1.txt) using tiles from your rack. Blank tiles (`?`) are wild and can stand in for any single letter. Tiles used are removed from the game. Unused tiles remain in your rack for the next turn.

Continue like this until you run out of tiles, or you can't play anymore. There's no way to discard or replace tiles in your rack other than by playing a word. Any unused tiles in your rack or the row at the end of the game are ignored.

# Scoring

Your final score is the total score of all the plays you make.

Your score for each play is given by 1x the value of the first tile in your play, plus 2x the value of the second tile in your play, and so on. (Same as in [this week's Intermediate challenge](https://www.reddit.com/r/dailyprogrammer/comments/5h40ml/20161207_challenge_294_intermediate_rack/).)

The value of the letter tiles is [the same as in Scrabble](https://en.wikipedia.org/wiki/Scrabble_letter_distributions#English). Blanks are worth 0, and the letters `a` through `z` are worth:

    [1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10]

# Output description

Here is a sample valid solution:

    6 s?l?mnize solemnize
    0 b?have behave
    0 ?hirked shirked
    5 tra?q tranq
    5 ovum ovum
    3 escalop escalop
    6 antefix antefix
    6 s?uiceway sluiceway
    5 ??iggery priggery
    0 sailing sailing
    6 rai?bow rainbow
    7 ?e?oof reroof
    1 projet projet
    2 unt?nded untended
    1 o?t oat

Each line in a solution comprises 3 things: the number of tiles you're drawing from the left side of the row, the play you make (including blanks), and the word you're playing (not showing blanks).

For instance, the first play involves drawing 6 tiles from the left of the row (`sd?zei`), which implies that I also draw 4 tiles from the right of the row (`nl?m`). My rack then holds `sd?zeinl?m`, from which I play `s?l?mnize` for 121 points, ending my first turn.

The only tile still on my rack at the beginning of my second turn is `d`. I draw 0 tiles from the left, which implies I draw 9 from the right (`?rbhaervt`), bringing my rack up to 10 tiles: `d?rbhaervt`. From this I play `b?have` for 45 points, leaving me with `drrt` at the start of my third turn. And so on.

The example above scores a total of 839 points. My personal best is 960. Can you do better?

# Verification script

Here is a Python script that verifies and scores a solution, if it's written in the above format.

	import sys
	from collections import Counter

	N = 10  # number of tiles in the rack
	words = set(line.strip() for line in open("../Downloads/enable1.txt"))
	row = "sd?zeioao?mluvepesceinfxt?wyiru?ie?giator?t??nuefje?l?odndrotpewlgoobiinysagacaqski?aeh?rbhaervtnl?m"
	rack = []
	score = 0
	for line in sys.stdin:
		if not line: continue
		leftdraws, play, word = line.split()
		# Draw from the left
		leftdraws = int(leftdraws)
		assert leftdraws <= len(row), "Not enough tiles to draw from"
		rack += list(row[:leftdraws])
		row = row[leftdraws:]
		assert len(rack) <= N, "Drew too many tiles"
		# Draw remaining from the right
		rightdraws = min(len(row), N - len(rack))
		if rightdraws:
			rack += list(row[-rightdraws:])
			row = row[:-rightdraws]
		# Check that play is legal
		assert not Counter(play) - Counter(rack), "Cannot make given play"
		assert len(play) == len(word) and all(a in ("?", b) for a, b in zip(play, word))
		assert word in words
		# Remove letters from rack
		rack = list((Counter(rack) - Counter(play)).elements())
		# Add score
		tilescores = dict(zip("abcdefghijklmnopqrstuvwxyz?",
			[1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10,0]))
		score += sum(j * tilescores[char] for j, char in enumerate(play, 1))
	print(score)