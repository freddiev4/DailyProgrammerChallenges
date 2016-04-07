**Description:**

[BrainFuck](http://en.wikipedia.org/wiki/Brainfuck), is a [Turing-complete](http://en.wikipedia.org/wiki/Turing_completeness) (i.e. computationally-equivalent to modern programming languages), esoteric programming language. It mimics the concept of a [Turing machine](http://en.wikipedia.org/wiki/Turing_machine), a Turing-complete machine that can read, write, and move an infinite tape of data, through the use of the language's eight (that's right: 8!) operators.

An example is:

     ++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.

Which prints "Hello World!"

Your goal is to write a BrainFuck interpreter from scratch, and have it support both single-character output to standard-out and single-character input from standard-in.

**Formal Inputs & Outputs:**

*Input Description:*

String BFProgram - A string of a valid BrainFuck program.

*Output Description:*

Your function must execute and print out any data from the above given BrainFuck program.

**Sample Inputs & Outputs:**

*See above*

**Notes:**

This is a trivial programming challenge if you understand the basis of a Turing-machine. I strongly urge you to read all related Wikipedia articles to prepare you for this. A more significan't challenge would be to write a BF interpreter through the BF language itself.