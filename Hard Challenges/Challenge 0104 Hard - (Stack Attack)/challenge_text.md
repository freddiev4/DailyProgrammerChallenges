**Description:**

You are a devilish engineer designing a new programming language titled D++, which stands for a "Dijkstra++", named after your favorite computer scientist. You are currently working on the math-operations parsing component of your interpreter: though the language only supports [infix-notation](http://en.wikipedia.org/wiki/Infix_notation) (such as "1 + 2 * 3"), your interpreter internals require you to represent all math strings in [reverse polish notation](http://en.wikipedia.org/wiki/Reverse_Polish_notation) (for easier, stack-based, computing). Your goal is to simply take a guaranteed valid infix-notation string of math operations and generate (printing it out) an equivalent and valid reverse polish notation string.

**Formal Inputs & Outputs:**

*Input Description:*

string MathOperations - A valid string of infix math notation.

*Output Description:*

Print the converted RPN form of the given math operations string.

**Sample Inputs & Outputs:**

"1 + 2" should be printed as "1 2 +". "(1+2)*3" should be printed as "3 2 1 + *". "(6 (7 – 2)) / 3 + 9 * 4" should be printed as "6  7  2 - * 3 / 9  4  * +".

**Notes:**

Do not get trapped in overly-complex solutions; there are formal solutions, though many ways of solving for this problem. Check out the [Shunting Yard Algorithm](http://en.wikipedia.org/wiki/Shunting_yard_algorithm) for details on how to convert math-operation strings (a stack of tokens) from one notation system to another.