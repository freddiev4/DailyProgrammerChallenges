Given as input this [list of 20,000 twelve-character strings](http://pastebin.com/eJFn49vp), which contains 10,000 actual English words, and 10,000 random strings of characters, write a program that filters out the English words, with no false positives or negatives. [Your output must match this list exactly.](http://pastebin.com/trMz6nWQ)

Your program doesn't need to work on arbitrary lists of words, it can be custom tailored to this list. You could technically meet the challenge by simply including the solution in your program and outputting it, or by reading it from a file. But the point of the challenge is to make your program, combined with any data it inputs, as short/elegant as possible.

You will probably have an algorithm that does a pretty good job but requires some data to be coded in. That's fine, but the smaller the better.

This is not a "code golf" challenge: don't worry about the exact character count of your programs. It's more about how elegant your solution is. But for reference, I have a python solution that reads in no data and is about 1700 bytes.