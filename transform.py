#!/usr/bin/env python3

"""
Author: Tyler Nivin
Github: github.com/twn346
File: transform.py
Purpose: Used to rename directories to fit a specific naming scheme
i.e. Challenge 0001: {challenge title}
"""

import glob
import os
import regex

# This script will run on the Easy Medium and Hard directories.


def update_challenge_dir_name(oldName, difficulty):
    '''Update the specified challenge dirs names. Returns original name if it
    suspects that it would fail a valid transformation.'''

    temp = oldName.split()

    # Find the current challenge number.

    # This will match the first number in the string.
    # The extra stuff on either side makes sure that it will not match strings
    # longer than the specified amount in the middle.
    match = regex.search(r'(?<=[^\d]|^)\d{1,5}(?=[^\d]|$)', oldName)

    # n is the number of digits in the challenge number.
    # I will use this to know how many zeroes to enter.
    if (match):
        currNum = match.group()
        n = len(currNum)

        # Handle challenges that have multiple iterations, such as 166b
        if (regex.match(r'[.\S]', oldName[match.end()])):
            newNum = ' ' + '0'*(4-n-1) + currNum[-n:]
            newNum += oldName[match.end()] + ' '
        else:
            newNum = ' ' + '0'*(4-n) + currNum[-n:] + ' '
    else:
        return oldName

    newTitle = 'Challenge' + newNum + difficulty.capitalize()

    # Try to tease out the challenge name...
    # First, remove the number we found earlier from the string...

    notName = [i for i, number in enumerate(temp)
               if regex.search(currNum + r'|' +
                               r'challenge|' + difficulty,
                               number, regex.IGNORECASE)]

    # I squashed several "single" filters down to one OR'd filter.
    # This is the syntax for the "single" filters.
    # notName += [i for i, number in enumerate(temp)
    #             if re.search('challenge', number, re.IGNORECASE)]

    i = 0
    for curr in notName:
        temp.pop(curr - i)
        i += 1

    if len(temp) > 0:
        challengeName = " - " + " ".join(temp)
    else:
        challengeName = ""

    newTitle = newTitle + challengeName
    return newTitle


def main():

    levels = ['easy', 'intermediate', 'hard']

    for level in levels:
        rawChallengeNames = glob.glob(level + ' Challenges/*')

        numCharsToRemove = len(level + ' Challenges/')

        # remove the directory from the name
        challengeNames = list(map(lambda x: x[numCharsToRemove:],
                                  rawChallengeNames))

        parent_dir = level.capitalize() + ' Challenges/'

        for each in challengeNames:
            if each != update_challenge_dir_name(each, level):
                os.renames(parent_dir + each,
                           parent_dir + update_challenge_dir_name(each, level))
                # print(each + ' <::> ' + update_challenge_dir_name(each, level))
        print(level.capitalize() + ' Challenges!')
    return

if __name__ == '__main__':
    main()
