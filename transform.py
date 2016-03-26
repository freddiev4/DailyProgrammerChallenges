#!/usr/bin/env python3

"""
Author: Tyler Nivin (github.com/twn346)
File: transform.py
Purpose: Used to rename directories to fit a specific naming scheme
i.e. Challenge #0001 [Easy]
"""

import glob
import os
import re
# import string

# assuming this script is in the same directory as the
# challenges you want to rename

test = glob.glob('*')
test.remove('transform.py')


def update_challenge_dir_name_hard(oldName):

    temp = oldName.split()
    # location of the challenge number in the string.
    loc = [i for i, number in enumerate(temp) if re.search('##*', number)]

    # the current challenge number.
    currNum = temp[loc[0]]

    # n is the number of digits in the challenge number.
    # I will use this to know how many zeroes to enter.
    n = len(currNum) - 1

    newNum = '#' + '0'*(4-n) + currNum[-n:]

    newTitle = 'Challenge ' + newNum + ' [Hard]'

    # Try to tease out the challenge name...
    notName = [i for i, number in enumerate(temp)
               if re.search('##*|challenge|\[hard\]|\[difficult\]',
                            number, re.IGNORECASE)]

    # I squashed several "single" filters down to one OR'd filter.
    # This is the syntax for the "single" filters.
    # notName += [i for i, number in enumerate(temp)
    #             if re.search('challenge', number, re.IGNORECASE)]

    i = 0
    for curr in notName:
        temp.pop(curr - i)
        i += 1

    if len(temp) > 0:
        challengeName = " " + " ".join(temp)
    else:
        challengeName = ""

    newTitle = newTitle + challengeName
    return newTitle


def update_challenge_dir_name_intermediate(oldName):

    # print('DEBUG: ' + oldName)
    temp = oldName.split()
    # location of the challenge number in the string.
    loc = [i for i, number in enumerate(temp) if re.search('##*', number)]

    # the current challenge number.
    currNum = temp[loc[0]]

    # n is the number of digits in the challenge number.
    # I will use this to know how many zeroes to enter.
    n = len(currNum) - 1

    newNum = '#' + '0'*(4-n) + currNum[-n:]

    newTitle = 'Challenge ' + newNum + ' [Intermediate]'

    # Try to tease out the challenge name...

    notName = [i for i, number in enumerate(temp)
               if re.search('##*|challenge|\[intermediate\]|\[medium\]',
                            number, re.IGNORECASE)]

    # I squashed several "single" filters down to one OR'd filter.
    # This is the syntax for the "single" filters.
    # notName += [i for i, number in enumerate(temp)
    #             if re.search('challenge', number, re.IGNORECASE)]

    i = 0
    for curr in notName:
        temp.pop(curr - i)
        i += 1

    if len(temp) > 0:
        challengeName = " " + " ".join(temp)
    else:
        challengeName = ""

    newTitle = newTitle + challengeName
    return newTitle

#
for each in test:
    if each != update_challenge_dir_name_intermediate(each):
        # os.rename(each, update_challenge_dir_name_intermediate(each))
        print(update_challenge_dir_name_intermediate(each))
