A little while back we had a programming [challenge](https://www.reddit.com/r/dailyprogrammer/comments/2yquvm/20150311_challenge_205_intermediate_rpn/) to convert an infix expression (also known as "normal" math) to a postfix expression (also known as [Reverse Polish Notation](https://en.wikipedia.org/wiki/Reverse_Polish_notation)). Today we'll do something a little different: We will write a calculator that takes RPN input, and outputs the result.

# Formal input

The input will be a whitespace-delimited RPN expression. The supported operators will be:

* `+` - addition
* `-` - subtraction
* `*`, `x` - multiplication
* `/` - division (floating point, e.g. `3/2=1.5`, not `3/2=1`)
* `//` - integer division (e.g. `3/2=1`)
* `%` - modulus, or "remainder" division (e.g. `14%3=2` and `21%7=0`)
* `^` - power
* `!` - factorial (unary operator)

**Sample input:**

    0.5 1 2 ! * 2 1 ^ + 10 + *

# Formal output

The output is a single number: the result of the calculation. The output should also indicate if the input is not a valid RPN expression.

**Sample output:**

    7

Explanation: the sample input translates to `0.5 * ((1 * 2!) + (2 ^ 1) + 10)`, which comes out to `7`.

## Challenge 1

**Input:** `1 2 3 4 ! + - /  100 *`

**Output:** `-4`


## Challenge 2
**Input:** `100 807 3 331 * + 2 2 1 + 2 + * 5 ^ * 23 10 558 * 10 * + + *`

# Finally...

Hope you enjoyed today's challenge! Have a fun problem or challenge of your own? Drop by /r/dailyprogrammer_ideas and share it with everyone!

