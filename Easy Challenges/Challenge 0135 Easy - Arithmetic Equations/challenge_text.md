# [](#EasyIcon) *(Easy)*: Arithmetic Equations

[Unix](http://en.wikipedia.org/wiki/Unix), the famous multitasking and multi-user operating system, has several standards that defines Unix commands, system calls, subroutines, files, etc. Specifically within [Version 7](http://en.wikipedia.org/wiki/Version_7_Unix) (though this is included in many other Unix standards), there is a game called "arithmetic". To quote the [Man Page](http://en.wikipedia.org/wiki/Man_page):

    Arithmetic types out simple arithmetic problems, and waits for an answer to be typed in. If the answer
    is correct, it types back "Right!", and a new problem. If the answer is wrong, it replies "What?", and
    waits for another answer. Every twenty problems, it publishes statistics on correctness and the time
    required to answer.

Your goal is to implement this game, with some slight changes, to make this an [Easy]-level challenge. You will only have to use three arithmetic operators (addition, subtraction, multiplication) with four integers. An example equation you are to generate is "2 x 4 + 2 - 5".

*Author:* nint22

# Formal Inputs & Outputs
## Input Description

The first line of input will always be two integers representing an inclusive range of integers you are to pick from when filling out the constants of your equation. After that, you are to print off a single equation and wait for the user to respond. The user may either try to solve the equation by writing the integer result into the console, or the user may type the letters 'q' or 'Q' to quit the application.

## Output Description

If the user's answer is correct, print "Correct!" and randomly generate another equation to show to the user. Otherwise print "Try Again" and ask the same equation again. Note that all equations must randomly pick and place the operators, as well as randomly pick the equation's constants (integers) from the given range. You are allowed to repeat constants and operators. You may use either the star '*' or the letter 'x' characters to represent multiplication.

# Sample Inputs & Outputs
## Sample Input / Output

*Since this is an interactive application, lines that start with '>' are there to signify a statement from the console to the user, while any other lines are from the user to the console.*

    0 10
    > 3 * 2 + 5 * 2
    16
    > Correct!
    > 0 - 10 + 9 + 2
    2
    > Incorrect...
    > 0 - 10 + 9 + 2
    3
    > Incorrect...
    > 0 - 10 + 9 + 2
    1
    > Correct!
    > 2 * 0 * 4 * 2
    0
    > Correct!
    q