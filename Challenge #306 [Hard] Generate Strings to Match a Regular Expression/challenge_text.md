# Description

Most everyone who programs using general purpose languages is familiar with regular expressions, which enable you to match inputs using patterns. Today, we'll do the inverse: given a regular expression, can you generate a pattern that will match?

For this challenge we'll use a subset of regular expression syntax:

- character literals, like the letter A
- \* meaning zero or more of the previous thing (a character or an entity)
- + meaning one or more of the previous thing 
- . meaning any single literal
- [a-z] meaning a range of characters from *a* to *z* inclusive

To tackle this you'll probably want to consider using a finite state machine and traversing it using a random walk.  

# Example Input

You'll be given a list of patterns, one per line. Example:

	a+b
	abc*d

# Example Output

Your program should emit strings that match these patterns. From our examples:

	aab
	abd

Note that `abcccccd` would also match the second one, and `ab` would match the first one. There is no single solution, but there are wrong ones. 

# Challenge Input

	[A-Za-z0-9$.+!*'(){},~:;=@#%_\-]*
	ab[c-l]+jkm9*10+
	iqb[beoqob-q]872+0qbq*

# Challenge Output

While multiple strings can match, here are some examples.

	g~*t@C308*-sK.eSlM_#-EMg*9Jp_1W!7tB+SY@jRHD+-'QlWh=~k'}X$=08phGW1iS0+:G
	abhclikjijfiifhdjjgllkheggccfkdfdiccifjccekhcijdfejgldkfeejkecgdfhcihdhilcjigchdhdljdjkm9999910000
	iqbe87222222222222222222222222222222222222222220qbqqqqqqqqqqqqqqqqqqqqqqqqq
