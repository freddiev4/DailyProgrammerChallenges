**Description:**

Write a function, where given a string of arbitrary characters, returns true if all brackets ([defined as parentheses, square-brackets, curly-braces, and chevrons](http://en.wikipedia.org/wiki/Bracket)) are correctly paired and ordered. This is to say that all brackets, if they enclose other brackets, enclose both the paired opening and closing characters.

**Formal Inputs & Outputs:**

*Input Description:*

string data - a given string that may or may not have correctly formed brackets.

*Output Description:*

Return True or False - true if the given string is correctly bracket formed.

**Sample Inputs & Outputs:**

"123", "(abc)", "()abc()", and "([<{abc123abc}>])" should return true, but "(abc[123)abc]" (wrong pairing) and "(abc>" (not closed) should return false.

**Notes:**

This is a very easy problem if you use a specific primitive data-structure.