#**Description:**

An interpreter is a program that executes commands written in a programming language. Today you will be writing 2 of these!

Taking a language of your choice, write an interpreter and within that language, write a Brainfuck interpreter.

For instance;

Let's say your programming language of choice is Ruby. Your languages could be linked like so:

Ruby -> Scheme -> Brainfuck

Ruby parses and evaluates the Scheme syntax. The Scheme syntax will parse the Brainfuck syntax.

I chose Scheme as an example here because there is a lot of reading material on building an interpreter for Scheme.


#**Input**

You will be given Brainfuck code, within your program, convert this code back to its string equivalent.

    ++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+
    [<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.

    
#**Output**

    Hello World!


#**Challenge Input**

    ++++++++[>+>++>+++>++++>+++++>++++++>
    +++++++>++++++++>+++++++++>++++++++++>
    +++++++++++>++++++++++++>+++++++++++++>++++++++++++++>
    +++++++++++++++>++++++++++++++++
    <<<<<<<<<<<<<<<<-]>>>>>>>>>+.-<<<<<<<<<>>
    >>>-.+<<<<<>>>>>>>>>>>>>>---.+++<<<<<<<<<<<
    <<<>>>>.<<<<>>>>>>>>>>>>>>+++.---<<<<<<<<<
    <<<<<>>>>>>>>>>>>>>-.+<<<<<<<<<<<<<<>>>>>>>>>>>>>>++.--<<<<
    <<<<<<<<<<>>>>>>>>>>>>>
    >++.--<<<<<<<<<<<<<<>>>>>>>>>>>>>>>+.-<<<<<<<<<<<<<<<.



#**Bonus:**

For extra points, have your chain add an extra language.
E.g.

Ruby -> Scheme -> Brainfuck -> Whitespace


(Only the mentally ill would attempt such a feat.)

#**Further Reading**

[Structure and Interpretation of Computer Programs](http://mitpress.mit.edu/sicp/full-text/book/book-Z-H-4.html#%_toc_start)

This book will serve you extremely well. Large portions of the book are on interpreters/compilers and its main dialect is Scheme.


[AWIB](https://code.google.com/p/awib/)

This is a Brainfuck compiler written in Brainfuck. Potentially very useful to poke around and see how it works.

[Lispy](http://norvig.com/lispy.html)

A Lisp interpreter written in Python