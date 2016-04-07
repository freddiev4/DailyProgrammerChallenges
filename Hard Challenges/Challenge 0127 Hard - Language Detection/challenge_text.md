# [](#HardIcon) *(Hard)*: Language Detection

You are part of the newly formed ILU team, whose acronym spells Internet Language Usage. Your goal is to help write part of a web-crawler that detects which language a wep-page / document has been written in. The good news is you only have to support detection of five languages (English, Spanish, French, German, and Portuguese), though the bad news is the text input has been stripped to just space-delimited words. These languages have hundreds of thousands of words each, some growing at a rate of [~25,000 new words a year](http://en.wikipedia.org/wiki/English_language#Number_of_words_in_English)! These languages also share many words, called [cognates](http://en.wikipedia.org/wiki/Cognate). An example would be the French-English word "lance", both meaning a spear / javelin-like weapon.

You are allowed to use whatever resources you have, except for existing language-detection tools. I recommend using the [WinEdt dictionary set](http://www.winedt.org/Dict/) as a starting point for the five languages.

The more consistently correct you are, the most correct your solution is considered.

# Formal Inputs & Outputs
## Input Description

You will be give a large lower-case space-delimited non-punctuated string that has a series of words (they may or may not form a grammatically correct). The string will be unicode, to support accents in all of the five languages (except English). Note that a string of a certain language may make references to nouns in their own respective language. As an example, the sample input is in French, but references the American publication "The Hollywood Reporter" and the state "California".

## Output Description

Given the input, you must attempt to detect the language the text was written in, printing your top guesses. At minimum you must print your top guess; if your code is not certain of the language, you may print your ordered "best guesses".

# Sample Inputs & Outputs
## Sample Input 0

    l'école a été classé meilleure école de cinéma d'europe par la revue professionnelle de référence the hollywood reporter et 7e meilleure école de cinéma du monde juste derrière le california institute of the arts et devant l'université columbia

## Sample Output 0

    French
    English

## Sample Input 1

    few things are harder to put up with than the annoyance of a good example

## Sample Output 1

    English
