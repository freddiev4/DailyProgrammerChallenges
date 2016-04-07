We all know the classic game hangman, today we'll be making it. With the wonderful bonus that we are programmers and we can make it as hard or as easy as we want. [here](http://www.joereynoldsaudio.com/wordlist.txt) is a wordlist to use if you don't already have one. That wordlist comprises of words spanning 3 - 15+ letter words in length so there is plenty of scope to make this interesting!

#Rules

For those that don't know the rules of hangman, it's quite simple.

There is 1 player and another person (in this case a computer) that randomly chooses a word and marks correct/incorrect guesses.


The steps of a game go as follows:


* Computer chooses a word from a predefined list of words
* The word is then populated with underscores in place of where the letters should.
('hello' would be '_ _ _ _ _')
* Player then guesses if a word from the alphabet [a-z] is in that word
* If that letter is in the word, the computer replaces all occurences of '_' with the correct letter
* If that letter is NOT in the word, the computer draws part of the gallow and eventually all of the hangman until he is hung (see [here](http://en.wikipedia.org/wiki/Hangman_%28game%29) for additional clarification)

This carries on until either


* The player has correctly guessed the word without getting hung


or


* The player has been hung

#Formal inputs and outputs

##input description

Apart from providing a wordlist, we should be able to choose a difficulty to filter our words down further. For example, hard could provide 3-5 letter words, medium 5-7, and easy could be anything above and beyond!

On input, you should enter a difficulty you wish to play in.

##output description

The output will occur in steps as it is a turn based game. The final condition is either win, or lose.

#Clarifications

* Punctuation should be stripped before the word is inserted into the game ("administrator's" would be "administrators")
