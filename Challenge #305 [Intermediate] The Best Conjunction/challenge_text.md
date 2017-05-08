#Description

Your job is to find the best conjunction—that is, find the word with the most sub-words inside of it given a list of English words. Some example include:

- Something (3 words: So, me, thing)
- Awesomeness (3 words: awe, some, ness)

#Formal Inputs & Outputs

##Input description

Use a [list of English words](http://www-personal.umich.edu/~jlawler/wordlist) and a "minimum sub-word length" (the smallest length of a sub-word in a conjuncted word) to find the "best conjunction" (most sub-words) in the dictionary!

##Output description

minSize 3: disproportionateness (6: dis, pro, port, ion, ate, ness)

minSize 4: dishonorableness (4: dish, onor, able, ness)

Find minSize 5

#Notes/Hints

- Be aware the file is split by \r\n instead of \n, and has some empty lines at the end
- In order to run in a reasonable amount of time, you will need an O(1) way of checking if a word exists. (Hint: It won't be O(1) memory)
- Make sure you're checking all possibilities—that is, given the word "sotto", if you begin with "so", you will find that there is no word or combination of words to create "tto". You must continue the search in order to get the conjunction of "sot" and "to".

#Bonus

- Each sub-word must include the last letter of the previous subword. For example "counterrevolutionary" would become "count, terre, evolution, nary"
- Instead of simply the last letter, allow any number of letters to be shared between words (e.g. consciencestricken => conscience, sciences, stricken

#Credit

This challenge was suggested by user /u/DemiPixel, many thanks!

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas