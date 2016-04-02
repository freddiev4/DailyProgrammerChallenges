

At some point or another, most programmers will encounter problems in text processing that has a very elegant solution using [regular expressions](http://en.wikipedia.org/wiki/Regex). But regular expressions can also be over-relied on and abused, and make code unreadable. There is a lot of truth in the old saying "Some people, when confronted with a problem, think 'I know, I'll use regular expressions.' Now they have two problems." So today, lets embrace those two problems and pound some regular expressions into submission!

Your task is to write a regular expression that will match a string if and only if the number of vowels (both upper and lower case) in that string is exactly divisible by 3. For instance, the regular expression will not match the string "Hello!", because there are only two vowels there, "e" and "o" (and 2 is not divisible by 3), but it will match "Daily programmer" because there are six vowels, "D**ai**l**y** pr**o**gr**a**mm**e**r" (and 6 is divisible by 3). 

For the purposes of this problem, the vowels of the English language are "A", "E", "I", "O", "U" and "Y" (in both upper and lower cases, obviously). 

Here are a few strings you can test your regular expressions on: 

1. "Friends, Romans, countrymen, lend me your ears!"
2. "Double, double, toil and trouble; Fire burn and cauldron bubble."
3. "Alas, poor Yorick! I knew him, Horatio. A fellow of infinite jest, of most excellent fancy."
4. "To be, or not to be- that is the question: Whether 'tis nobler in the mind to suffer The slings and arrows of outrageous fortune Or to take arms against a sea of troubles, And by opposing end them."
5. "Everybody stand back! I know regular expressions."
