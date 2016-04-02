When linguists study ancient and long dead languages, they sometimes come upon a situation where a certain word only appears once in all of the collected texts of that language. Words like that are obviously very bothersome, since they are exceedingly hard to translate (there's almost no context to what the word might mean).

Such a word is refered to as a *[hapax legomenon](http://en.wikipedia.org/wiki/Hapax_legomenon)* (which is Greek for roughly "word once said"). The proper plural is *hapax legomena*, but they are frequently refered to as just "hapaxes". 

However, a hapax legomenon doesn't just need to be a word that appears only once in an entire language; they can also be words that appears only once in a single work, or the body of work of an author. Lets take Shakespeare as an example. In all the works of Shakespeare, the word "correspondance" occurs only in one place, the beginning of Sonnet 148:

>*O me! what eyes hath love put in my head,*    
>*Which have no correspondence with true sight,*    
>*Or if they have, where is my judgment fled,*    
>*That censures falsely what they see aright?*    

Now, "correspondance" is 14 letters long, which is a pretty long word. It is, however, not the longest hapax legomenon in Shakespeare. The longest by far is *[honorificabilitudinitatibus](http://en.wikipedia.org/wiki/Honorificabilitudinitatibus)* from *Love's Labour's Lost* (drink a couple of shots of whiskey and try and pronounce that word, I dare you!)

[Here is a link](http://www.gutenberg.org/cache/epub/100/pg100.txt) to a text-file containing the Complete Works of William Shakespeare (it's 5.4 mb big), provided by the good people of Project Gutenberg. Write a program that analyses that file and finds all words that 

1. Only occur once in the entire text
2. Are longer than "correspondance", i.e. words that are 15 letters long or longer. 

***
Bonus: If you do the first part of this problem, you will likely come up with a list of words that cannot be said to be "true" hapax legomenon. For instance, you might have found the word "distemperatures" which appears only once in *The Comedy of Errors*. But that is simply the plural of *distemperature*, and *distemperature* appears in *A Midsummer's Night Dream*, so "distemperatures" cannot be said to be a "true" hapax. Same thing with the word *superstitiously*: it also occurs only once but *superstitious* occurs many times. Even the example I used above can be said to not be a true hapax, because while *correspondance* only appears once, variations of *correspond* appears a number of times. 

Modify your program to identify and make it detect when a word appears twice or more in a simple variation, like a plural or adverbial form (hint: words ending in "s", "ly", "ing" and "ment"), so that it can sort it out. Then, find the *true* number of hapax legomena in Shakespeare that are longer than 14 characters. By my count (which may very well be wrong), there are less than 20 of them. 
