# Description

A word is *embedded* in a string if all of its letters appear in order, from left to right, within the string. For instance, consider the string:

    thhonrew

The word `one` is embedded in this string, as all of its letters appear in order from left to right. However, `two` is not, because while all its letters appear, they don't appear in order (`w` comes after `o`). And `three` is also not embedded, because there's only one `e`.

Given a word list, produce a string in which every word in the word list is embedded. Post the length of your string along with your result.

When this post is 7 days old, the entrant who has posted the shortest valid string for the challenge input will get +1 gold medal flair.

# Example input

    one
    two
    three
    four
    five

# Example output

    fthwournivee (length 12)

# Challenge input

[The Enable 1 word list](https://raw.githubusercontent.com/dolph/dictionary/master/enable1.txt)

One valid solution is just to repeat the alphabet 16 times (length 416). You should be able to do much better than this. I have no idea what the actual optimum is, but an easy lower limit is 109. Good luck.