# Description

Alliteration is defined as "the occurrence of the same letter or sound at the beginning of adjacent or closely connected words." It's a stylistic literary device identified by the repeated sound of the first consonant in a series of multiple words, or the repetition of the same sounds or of the same kinds of sounds at the beginning of words or in stressed syllables of a phrase. The first known use of the word to refer to a literary device occurred around 1624. A simple example is "Peter Piper Picked a Peck of Pickled Peppers".

## Note on Stop Words

The following are some of the simplest English "stop words", words too common and uninformative to be of much use. In the case of Alliteration, they can come in between the words of interest (as in the Peter Piper example):

    I 
    a 
    about 
    an 
    and
    are 
    as 
    at 
    be 
    by 
    com 
    for 
    from
    how
    in 
    is 
    it 
    of 
    on 
    or 
    that
    the 
    this
    to 
    was 
    what 
    when
    where
    who 
    will 
    with
    the

# Sample Input

You'll be given an integer on a line, telling you how many lines follow. Then on the subsequent ines, you'll be given a sentence, one per line. Example:

    3
    Peter Piper Picked a Peck of Pickled Peppers
    Bugs Bunny likes to dance the slow and simple shuffle
    You'll never put a better bit of butter on your knife

# Sample Output

Your program should emit the words from each sentence that form the group of alliteration. Example:

    Peter Piper Picked Peck Pickled Peppers
    Bugs Bunny      slow simple shuffle
    better bit butter

# Challenge Input

    8
    The daily diary of the American dream
    For the sky and the sea, and the sea and the sky
    Three grey geese in a green field grazing, Grey were the geese and green was the grazing.
    But a better butter makes a batter better.
    "His soul swooned slowly as he heard the snow falling faintly through the universe and faintly falling, like the descent of their last end, upon all the living and the dead."
    Whisper words of wisdom, let it be.
    They paved paradise and put up a parking lot.
    So what we gonna have, dessert or disaster?

# Challenge Output

    daily diary
    sky sea
    grey geese green grazing
    better butter batter better
    soul swooned slowly
    whisper words wisdom
    paved paradise
    dessert disaster

**EDITED** to add the word "and" to the stop word list. My bad, a mistake to omit.