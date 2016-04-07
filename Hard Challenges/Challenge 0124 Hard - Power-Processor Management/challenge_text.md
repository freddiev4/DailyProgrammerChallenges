# [](#HardIcon) *(Hard)*: Power-Processor Management

A co-worker has just finished designing and fabricating an incredibly powerful new processor architecture: this processor allows you to vary how fast you execute code, but in turn vary how much energy you consume. Your goal is to write a power-focused process scheduling system that minimizes both time and maximum processor speed for the given work.

The processor executes a set of programs, where each program Pn (where n is the program ID as an integer, so P0, P1, P2 are all valid programs) has the amount of work W (as an integer) to be done within a time interval of R (as an integer) and D (as an integer). One unit of time at one rate of power consumption does one unit of work: if you increase work done, the same increase is applied to power consumption. Time can be treated like seconds, thus one second of simulation at the rate of 10x power consumption, you can accomplish 10 units of work.

Note that the time intervals must be strictly enforced: you may not load a process until it is simulation-time R for the respective process. The end-time of a process must be before or on simulation-time D. This architecture allows process switching, thus you do not have to accomplish all work continuously. Process switching may occur at any point in time and occurs instantaneously. You may change work-speed (and thus power-consumption) only at the start of a new execution (so every time you swap a process).

*Author: nint22, with the base idea from challenge #4254 ACM Competitive Collegiate Programming challenges repository.*

# Formal Inputs & Outputs
## Input Description

You must read in, from standard console input, an integer T for the number of test cases. You should expect, for each test case, an integer N for the number of given programs you must execute. For each program, you will be given an integer an integer R for the start time, then (space-delimited) an integer D for end time, and then (space-delimited) an integer W for the amount of work. All input will be guaranteed well formed.

## Output Description

For each test-case, you must print how much simulation time it took to accomplish all given work, and the maximum work/power ratio set, both as integers and space-delimited.

# Sample Inputs & Outputs

## Sample Input

[The following inputs is visualized here in their **solution form**.](http://i.imgur.com/aL80vsb.png)

    1
    5
    1 4 2
    3 6 3
    4 5 2
    4 7 2
    5 8 1

## Sample Output

    8 5

# Note
"Minimize for both time and maximum power rate" is a weak definition, since you could end up in a situation where one or the other is absurdly optimized (we could do almost all work as fast as possible if we let the power rate be infinite...). So, for the sake of making this reasonable, we define "minimize for both.." with the constraint that *both* numbers should be as low as possible, even if that means they are local minima, and there is a significantly lower value for either one.