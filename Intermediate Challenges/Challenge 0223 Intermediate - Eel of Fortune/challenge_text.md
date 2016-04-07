# Description

You work on the popular game show Eel of Fortune, where contestants take turns fishing live eels out of an aquarium for the opportunity to solve a word puzzle. The word puzzle works like the game Hangman. A secret word is obscured on the board. A player guesses a letter of the alphabet, and if that letter appears anywhere in the secret word, all of the times it appears in the secret word are revealed.

An unfortunate incident occurred on yesterday's show. The secret word was `SYNCHRONIZED`, and at one point the board was showing:

    S _ N _ _ _ O N _ _ _ D

As you can see, the letters on the board spelled "snond", which is of course an extremely offensive word for telemarketer in the Doldunian language. This incident caused ratings to immediately plummet in East Doldunia. The Eel of Fortune producers want the ability to identify "problem words" for any given offensive word.

Write a function that, given a secret word and an offensive word, returns true if the board could theoretically display the offensive word (with no additional letters) during the course of solving the secret word.

# Examples

    problem("synchronized", "snond") -> true
    problem("misfunctioned", "snond") -> true
    problem("mispronounced", "snond") -> false
    problem("shotgunned", "snond") -> false
    problem("snond", "snond") -> true

# Optional challenges

1. Define the _problem count_ of an offensive word to be the number of words in the [enable1 word list](https://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt) that return true when paired with that offensive word as secret words. For instance, the problem count of "snond" is 6. What is the problem count of "rrizi" (Zarthan offensive slang for the air in potato chip bags)?
1. (Edited for clarity) What are the 10 largest problem counts of any sequence of 5 letters ("aaaaa", "aaaab", " aaaac", through "zzzzz")? _A solution to this problem needs to finish in less than a year. Aim for a few minutes, or an hour at most. Post your output along with your code._

*Thanks to /u/AtlasMeh-ed for submitting this challenge on /r/dailyprogrammer_ideas!*