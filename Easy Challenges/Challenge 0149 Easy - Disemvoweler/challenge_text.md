# _(Easy)_: Disemvoweler

Disemvoweling means removing the vowels from text. (For this challenge, the letters a, e, i, o, and u are considered vowels, and the letter y is not.) The idea is to make text difficult but not impossible to read, for when somebody posts something so idiotic you want people who are reading it to get extra frustrated.

To make things even harder to read, we'll remove spaces too. For example, this string:

    two drums and a cymbal fall off a cliff

can be disemvoweled to get:

    twdrmsndcymblfllffclff

We also want to keep the vowels we removed around (in their original order), which in this case is:

    ouaaaaoai

# Formal Inputs & Outputs

## Input description

A string consisting of a series of words to disemvowel. It will be all lowercase (letters a-z) and without punctuation. The only special character you need to handle is spaces.

## Output description

Two strings, one of the disemvoweled text (spaces removed), and one of all the removed vowels.

# Sample Inputs & Outputs

## Sample Input 1

    all those who believe in psychokinesis raise my hand

## Sample Output 1

    llthswhblvnpsychknssrsmyhnd
    aoeoeieeioieiaiea

## Sample Input 2

    did you hear about the excellent farmer who was outstanding in his field

## Sample Output 2

    ddyhrbtthxcllntfrmrwhwststndngnhsfld
    ioueaaoueeeeaeoaouaiiiie

# Notes

Thanks to /u/abecedarius for inspiring this challenge on /r/dailyprogrammer_ideas!

In principle it may be possible to reconstruct the original text from the disemvoweled text. If you want to try it, check out this week's Intermediate challenge!