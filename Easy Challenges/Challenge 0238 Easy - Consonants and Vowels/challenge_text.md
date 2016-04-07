#Description

You were hired to create words for a new language. However, your boss wants these words to follow a strict pattern of consonants and vowels. You are bad at creating words by yourself, so you decide it would be best to randomly generate them.

Your task is to create a program that generates a random word given a pattern of consonants (c) and vowels (v).

#Input Description

Any string of the letters c and v, uppercase or lowercase.

#Output Description

A random lowercase string of letters in which consonants (bcdfghjklmnpqrstvwxyz) occupy the given 'c' indices and vowels (aeiou) occupy the given 'v' indices.

#Sample Inputs

    cvcvcc

    CcvV

    cvcvcvcvcvcvcvcvcvcv

#Sample Outputs

    litunn

    ytie

    poxuyusovevivikutire

# Bonus

* Error handling: make your program react when a user inputs a pattern that doesn't consist of only c's and v's.
* When the user inputs a capital C or V, capitalize the letter in that index of the output.

# Credit

This challenge was suggested by /u/boxofkangaroos. If you have any challenge ideas please share them on /r/dailyprogrammer_ideas and there's a good chance we'll use them.