In intermediate problem #8 we did a number to english converter.  Your task this time is to write a function that 
can take in a string like "One-Hundred and Ninety-Seven" or "Seven-Hundred and Forty-Four Million", parse it, and
return the integer that it represents.

The definition of the exact input grammar is somewhat non-standard, so interpret it how you want and implement whatever grammar
you feel is reasonable for the problem.  However, try to handle at least up to one-billion, non-inclusive.  Of course, more is good too!

    parseenglishint("One-Thousand and Thirty-Four")->1034