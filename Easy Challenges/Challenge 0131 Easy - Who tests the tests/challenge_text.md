# [](#EasyIcon) *(Easy)*: Who tests the tests?

[Unit Testing](http://en.wikipedia.org/wiki/Unit_testing) is one of the more basic, but effective, tools for [software testing](http://en.wikipedia.org/wiki/Software_testing) / quality assurance. Your job, as an expert test-engineer, is to double-check someone else's test data, and make sure that the expected output is indeed correct. The two functions you are testing is string-reversal and string-to-upper functions.

For each line of input, there are three space-delimited values: the first being the test index (as either 0 or 1), then the test input string, and finally the "expected" output. You must take the test input string, run it through your implementation of the appropriate function based on the test index, and then finally compare it to the "expected" output. If you are confident your code is correct and that the strings match, then the "expected" output is indeed good! Otherwise, the "expected" output is bad (and thus invalid for unit-testing).

*Author: nint22*

# Formal Inputs & Outputs
## Input Description

You will be given an integer N on the first line of input: it represents the following N lines of input. For each line, you will be given an integer T and then two strings A and B. If the integer T is zero (0), then you must reverse the string A. If the integer T is one (1), then you must upper-case (capitalize) the entire string A. At the end of either of these operations, you must test if the expected result (string B) and the result of the function (string A) match.

## Output Description

If string A, after the above described functions are executed, and B match, then print "Good test data". Else, print "Mismatch! Bad test data". "Matching" is defined as two strings being letter-for-letter, equivalent case, and of the same length.

# Sample Inputs & Outputs
## Sample Input

    6
    0 Car raC
    0 Alpha AhplA
    0 Discuss noissucsiD
    1 Batman BATMAN
    1 Graph GRAPH
    1 One one

## Sample Output

    Good test data
    Mismatch! Bad test data
    Mismatch! Bad test data
    Good test data
    Good test data
    Mismatch! Bad test data