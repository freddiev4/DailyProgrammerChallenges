# [](#HardIcon) _(Hard)_: Recurrence Relations, part 2

In [Monday's challenge](/r/dailyprogrammer/comments/2z68di/), we wrote a program to compute the first *n* terms of a simple recurrence relation. These recurrence relations depended only on the directly previous term - that is, to know *u*(n), you only need to know *u*(n-1). In today's challenge, we'll be investigating more complicated recurrence relations.

In today's recurrence relations, the relation given will only depend on terms *preceding* the defined tern, not terms *following* the defined term. For example, the relation for *u*(n) will never depend on *u*(n+1). Let's look at the Fibonacci sequence as defined by [OEIS](http://oeis.org/A000045):

    u(0) = 0
    u(1) = 1
    u(n) = u(n-1) + u(n-2)

This relation provides a definition for the first two terms - the 0th term and the 1st term. It also says that the *n*-th term is the sum of the two previous terms - that is, the *(n-1)*-th term and the *(n-2)*-th term. As we know terms 0 and 1, we therefore know term 2. As we know term 1 and 2, we know term 3, and so on - for this reason, the Fibonacci sequence is **completely defined** by this recurrence relation - we can compute an infinite number of Fibonacci numbers after the first two, given two defined terms.

However, now let's look at this recurrence relation:

    u(0) = 0
    u(1) = 1
    u(2) = 3
    u(n) = u(n-1) * u(n-2) + u(n-5)

We're given the 0th, 1st and 2nd terms. However, the relation for the *n*-th term depends on the *(n-5)*-th term. This means we can't calculate the value of *u*(3), as we'll need the term 5 before that - ie. *u*(-2), which we don't have. We can't calculate *u*(4) for the same reason. We find that, to try and define the 3rd term and beyond, we don't have enough information, so this series is **poorly defined** by this recurrence relation. Therefore, all we know about the series is that it begins `[0, 1, 3]` - and, as far as we know, that's the end of the series.

Here's another example of a recurrence relation with a twist:

    u(1) = 0
    u(n) = u(n-2) * 2 + 1

This relation defines the 1st term. It also defines the *n*-th term, with respect to the *(n-2)*-th term. This means we know the 3rd term, then the 5th term, then the 7th term... but we don't know about the even-numbered terms! Here is all we know of the series:

    0, ?, 1, ?, 3, ?, 7, ?, 15, ?, ...

There are an infinite number of terms that we *do* know, but there are terms in-between those that we don't know! We only know half of the series at any given time. This is an example of a series being **partially defined** by a recurrence relation - we can work out some terms, but not others.

Your challenge today is, given a set of initial terms and a recurrence relation, work out *as many further terms as possible*.

# Formal Inputs and Outputs

## Input Description

You will accept the recurrence relation in **reverse Polish notation** (or postfix notation). If you solved [last Wednesday's challenge](/r/dailyprogrammer/comments/2yquvm/), you may be able to re-use some code from your solution here. To refer to the *(n-k)*-th term, you write `(k)` in the RPN expression. Possible operators are `+`, `-`, `*` and `/` (but feel free to add any of your own). For example, this recurrence relation input defines the *n*-th term of the Fibonacci sequence:

    (2) (1) +

This means that the *n*-th term is the *(n-2)*-th term and the *(n-1)*-th term, added together. Next, you will accept any number of pre-defined terms, in the format `index:value`. For example, this line of input:

    2:5.333

Defines the 2nd term of the series to be equal to 5.333. For example, the initial terms for the Fibonacci sequence are:

    0:0
    1:1

Finally, you will accept a number - this will be the maximum *n* of the term to calculate. For example, given:

    40

You calculate as many terms as you possibly can, up to and including the 40th term.

## Output Description

The output format is identical to the Easy challenge - just print the term number along with the term value. Something like this:

    0: 0
    1: 1
    2: 1
    3: 2
    4: 3
    5: 5
    6: 8
    7: 13
    8: 21

is good.

# Sample Input and Outputs

## Fibonacci Sequence

This uses the OEIS definition of the Fibonacci sequence, starting from 0.

### Input

    (1) (2) +
    0:0
    1:1
    20

### Output

    0: 0
    1: 1
    2: 1
    3: 2
    4: 3
    5: 5
    6: 8
    7: 13
    8: 21
    9: 34
    10: 55
    11: 89
    12: 144
    13: 233
    14: 377
    15: 610
    16: 987
    17: 1597
    18: 2584
    19: 4181
    20: 6765

## Oscillating Sequence

This defines an oscillating sequence of numbers starting from the 5th term. The starting term is not necessarily zero!

### Input

    0 (1) 2 * 1 + -
    5:31
    14

### Output

    5: 31
    6: -63
    7: 125
    8: -251
    9: 501
    10: -1003
    11: 2005
    12: -4011
    13: 8021
    14: -16043

## Poorly Defined Sequence

This sequence is poorly defined.

### Input

    (1) (4) * (2) 4 - +
    0:3
    1:-2
    3:7
    4:11
    20

### Output

The 5th term can be defined, but no further terms can.

    0: 3
    1: -2
    3: 7
    4: 11
    5: -19

## Staggered Tribonacci Sequence

This uses the [OEIS definition](https://oeis.org/A000073) of the Tribonacci sequence, but with a twist - the odd terms are undefined, so this is partially defined.

### Input

    (2) (4) (6) + +
    0:0
    2:0
    4:1
    30

### Output

    0: 0
    2: 0
    4: 1
    6: 1
    8: 2
    10: 4
    12: 7
    14: 13
    16: 24
    18: 44
    20: 81
    22: 149
    24: 274
    26: 504
    28: 927
    30: 1705

# Notes

Relevant links:

* [Reverse Polish notation](http://en.wikipedia.org/wiki/Reverse_Polish_notation)
* [Recurrence relation](http://en.wikipedia.org/wiki/Recurrence_relation)

Declarative languages might be handy for this challenge!