
# [](#EasyIcon) *(Easy)*: Permutation of a string
Write a function that prints all of the permutatons of the unique characters of a given string. For example, permute("baz") would print:

    baz
    bza
    abz
    azb
    zba
    zab

Find all the permutations of daily.

*Author: skeeto*
# Formal Inputs & Outputs
## Input Description
Your function should accept a single string variable which is guaranteed to be at least 1 character long.
## Output Description
Print all permutations of the given string variable.
# Sample Inputs & Outputs
## Sample Input
Let the string argument be "ab"
## Sample Output
All permutations of "ab" would be ["ab", "ba"]
# Challenge Input
Let the string argument be "abbccc"
## Challenge Input Solution
abbccc abcbcc abccbc abcccb acbbcc acbcbc acbccb accbbc accbcb acccbb babccc bacbcc baccbc bacccb bbaccc bbcacc bbccac bbccca bcabcc bcacbc bcaccb bcbacc bcbcac bcbcca bccabc bccacb bccbac bccbca bcccab bcccba cabbcc cabcbc cabccb cacbbc cacbcb caccbb cbabcc cbacbc cbaccb cbbacc cbbcac cbbcca cbcabc cbcacb cbcbac cbcbca cbccab cbccba ccabbc ccabcb ccacbb ccbabc ccbacb ccbbac ccbbca ccbcab ccbcba cccabb cccbab cccbba 
# Note
* Bonus 1: Instead of printing, be functional. Return a collection (array, etc.) of the permutations.

* Bonus 2: Correctly handle the case when the input contains a character multiple times. That is, don't output repeats and ensure the output contains the same number of characters as the input. For example, there are three permutations of foo: foo, ofo, oof.

* Note that this challenge is a near-duplicate of challenge #12, hence why there is the above "bonus" challenges
				