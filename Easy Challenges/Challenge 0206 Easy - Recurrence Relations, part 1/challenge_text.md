# [](#EasyIcon) _(Easy)_: Recurrence Relations, part 1

A recurrence relation is a mathematical construct for defining a series of numbers. It works by first giving an initial term, and then recursively defining the rest of the series as functions of the first one. For example, let's say we have a series of numbers called **u**, which is defined by this recurrence relation:

    u[0] = 1
    u[n+1] = 2 * u[n]

The first relation tells us that *u*(0), the first term in the series, is 1. The second relation says that, given the *n*-th term *u*(n), the next term (*u*(n+1)) is the previous term multiplied by two. So, to get the second term in the series, you multiply the first term by two, to get 2. To get the third term in the series, you multiply the second term by two, to get 4.

Recurrence relations get their name in part due to their *recursive* nature, as successive terms are essentially defined as recursive application of a function, like this Python example:

    def recurrence(n):
        return n * 2
    
    first_term = 1
    second_term = recurrence(first_term)
    third_term = recurrence(recurrence(first_term))
    fourth_term = recurrence(third_term) # or recurrence(recurrence(recurrence(first_term)))

Or, with the help of another function to apply the `recurrence` function for us:

    def get_nth_term(recurrence_relation, first_term, n):
        if n == 0:
            return first_term
        else:
            return get_nth_term(recurrence_relation, recurrence_relation(first_term), n - 1)

    sixteenth_term = get_nth_term(recurrence, first_term, 16) #65536

You get the idea. Today you will be writing a program to compute the *n*-th term of a given series defined by a recurrence relation.

# Formal Inputs and Outputs

## Input Description

You will first accept a line of input like this one:

    *3 +2 *2

This string means that, to get the next term in the series, you multiply by three, add two, then multiply by two. The operation that takes place is the first character of every space-separated part of the line, and the possible characters are `+` for add, `-` for subtract, `*` for multiply, and `/` for divide; the number given can be any real number. Next, you will accept the starting value, like so:

    0

Finally, you will accept the term number to print to (where the first term in the series is term **0**):

    7

(this input can be viewed on [Wolfram|Alpha](http://www.wolframalpha.com/input/?i={+u%280%29%3D0%3B+u%28n%29%3D%28u%28n-1%29*3%2B2%29*2+}).)

## Output Description

You are to print all terms in the series, up to the given term number, like so:

    Term 0: 0
    Term 1: 4
    Term 2: 28
    Term 3: 172
    Term 4: 1036
    Term 5: 6220
    Term 6: 37324
    Term 7: 223948

# Sample Inputs and Outputs

## Series 1

This series starts with 1, and for each successive member of the series, will multiply the last one by two and add one.

### Input

    *2 +1
    1
    10

### Output

    Term 0: 1
    Term 1: 3
    Term 2: 7
    Term 3: 15
    Term 4: 31
    Term 5: 63
    Term 6: 127
    Term 7: 255
    Term 8: 511
    Term 9: 1023
    Term 10: 2047

## Series 2

This one is a bit different. This just multiplies each successive term by `-2`. Notice how the series oscillates between positive and negative numbers?

### Input

    *-2
    1
    8

### Output

    Term 0: 1
    Term 1: -2
    Term 2: 4
    Term 3: -8
    Term 4: 16
    Term 5: -32
    Term 6: 64
    Term 7: -128
    Term 8: 256

## Series 3

### Input

    +2 *3 -5
    0
    10

### Output

    Term 0: 0
    Term 1: 1
    Term 2: 4
    Term 3: 13
    Term 4: 40
    Term 5: 121
    Term 6: 364
    Term 7: 1093
    Term 8: 3280
    Term 9: 9841
    Term 10: 29524

# Notes

More on recurrence relations [on Wikipedia](http://en.wikipedia.org/wiki/Recurrence_relation). Have a cool idea for a challenge? Submit it to /r/DailyProgrammer_Ideas!