Your intermediate task today is to write a function that can create "filler text", i.e. text that doesn't actually mean anything, but from a distance could plausibly look like a real language. This is very useful, for instance, if you're a designer and want to see what a design would look like with text in it, but you don't actually want to write the text yourself. 

The rules are:

* The argument to function is the approx number of words.
* The text is made up of sentences with 3-8 words
* Each word is made up of 1-12 chars
* Sentences have first word capitalized and a period at the end
* After each sentence there is a 15% chance of a linebreak and an additional 50% chance of this line break being a paragraph break. 

An example of what the text might look like [can be found here](http://pastebin.com/iLwDxghy). 

***

Bonus: Make it so that the character frequency roughly matches the English language. I.e. more e's and t's than x's and z's. Also, modify your code so that it will insert commas, exclamation points, question marks and the occassional number (as a separate word, obviously). 

***

* Thanks to [Racoonie](http://www.reddit.com/user/Racoonie) for suggesting this problem at /r/dailyprogrammer_ideas! 
