# [](#HardIcon) *(Hard)*: Verify Your Language!
[Context-free grammar](http://en.wikipedia.org/wiki/Context-free_grammar) is a tool heavily used in programming language design, verification, compiling, and execution. It is, essentially, a formal language used to define a grammar (i.e. another language). CFG are "more powerful" (in that they can verify more complex languages) than other grammars, such as regular-expressions.

Programming language expressions are generally validated through CFGs. This is done by applying several products on an expression, subdividing the statement into known components, and finally into "terminal" components (i.e. parts of an expression that cannot be more subdivided). An example could be a CFG that only accepts addition expressions, such as "123 + 456". Such a CFG would have two rules that could be applied to verify if this expression was valid: A -> Int + Int, and Int -> '0123456789'Int | NULL

It is ** extremely important** that the reader understands CFG and the formal language associated with it - the above is simply a refresher / casual introduction to the subject.

Your goal is to write a program that accepts a CFG definition and a series of expressions, printing true or false for each expression if it is a valid expression of the given CFG.

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
First, your program must accept an integer N, where there will be N products, one per line, right below this integer.

To keep things simple, products must be a single upper-case letter, such as "S". The letter "E" is reserved as the null-terminator. The equal-character "=" is reserved as the product definition operator. Finally, the pipe-character "|" is reserved for defining sets of possible products.

This syntax is similar to the "on-paper" definition, with the small difference of substituting "E" and "->" for the greek-letter and arrow symbols.

Assume that the grammar is valid; you do not have to error-check or handle "bad" CFG definitions.

Next, you program must accept an integer M, where there will be M expressions, one per line, that must be tested by the above-defined grammar.
## Output Description
For each expression M, print true or false, based on wether or not the expression is a valid expression of the given CFG.
# Sample Inputs & Outputs
## Sample Input
    3
    S = SS
    S = (S)
    S = ()
    4
    ()
    ((()))
    (()(()))
    (()
## Sample Output
    True
    True
    True
    False
# Challenge Input
    8
    S = x
    S = y
    S = z
    S = S + S
    S = S - S
    S = S * S
    S = S / S
    S = ( S )
    3
    ( x + y ) * x - z * y / ( x + x )
    (xx - zz + x / z)
    x + y * x - z * y / x + x
## Challenge Input Solution
    True
    False
    False
# Note
Some grammars may be ambiguous! Make sure to research what that means, though it should not affect your solution - I mention this simply to give you a warning if you see odd parsing behavior while debugging.

*Bonus*: A short-hand method of having multiple products from one function-name is the "pipe operator", such as "S = x | y | z", instead of three separate "S = x", "S = y", "S = z". Support this notation system as a bonus.