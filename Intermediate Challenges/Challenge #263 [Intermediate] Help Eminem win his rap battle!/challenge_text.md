#Description

Eminem is out of rhymes! He's enlisted you to help him out.

The typical definition of a rhyme is two words with their last syllable sounding the same.
E.g. "solution" and "apprehension", though their last syllable is not spelled the same (-tion and -sion), they still sound the same (SH AH N) and qualify as a rhyme.

For this challenge, we won't concern ourselves with syllables proper, only with the last vowel sound and whatever comes afterwards.
E.g. "gentleman" rhymes with "solution" because their phonetic definitions end in "AH N". Similarly, "form" (F AO R M) and "storm" (S T AO R M) also rhyme.

Our good friends from the [SPHINX project](http://cmusphinx.sourceforge.net/) at Carnegie Mellon University have produced all the tools we need.
Use [this pronouncing dictionary](http://svn.code.sf.net/p/cmusphinx/code/trunk/cmudict/cmudict-0.7b) in conjunction
with [this phoneme description](http://svn.code.sf.net/p/cmusphinx/code/trunk/cmudict/cmudict-0.7b.phones) to find rhyming words.

Note that the dictionary uses the [ARPAbet](https://en.wikipedia.org/wiki/Arpabet) phonetic transcription code and
includes stress indicators for the vowel sounds. Make sure to match the stress indicator of the input word.

#Input

A word from the pronouncing dictionary

    solution

#Output

A list of rhyming words, annotated by the number of matching phonemes and their phonetic definition,
sorted by the number of matching phonemes.

    [7] ABSOLUTION	AE2 B S AH0 L UW1 SH AH0 N
    [7] DISSOLUTION	D IH2 S AH0 L UW1 SH AH0 N
    [6] ALEUTIAN	AH0 L UW1 SH AH0 N
    [6] ANDALUSIAN	AE2 N D AH0 L UW1 SH AH0 N
    ...
    [2] ZUPAN	Z UW1 P AH0 N
    [2] ZURKUHLEN	Z ER0 K Y UW1 L AH0 N
    [2] ZWAHLEN	Z W AA1 L AH0 N
    [2] ZYMAN	Z AY1 M AH0 N

#Challenge

Eminem likes to play fast and loose with his rhyming!
He doesn't mind if the rhymes you find don't match the stress indicator.

Find all the words that rhyme the input word, regardless of the value of the stress indicator for the last vowel phoneme.

###Input
    noir

###Output
    [2] BOUDOIR	B UW1 D OY2 R
    [2] LOIRE	L OY1 R
    [2] MOIR	M OY1 R
    [2] SOIR	S OY1 R

# Credit

This challenge was suggested by /u/lt_algorithm_gt. If you have a challenge idea, please share it in /r/dailyprogrammer_ideas and there's a chance we'll use it. 