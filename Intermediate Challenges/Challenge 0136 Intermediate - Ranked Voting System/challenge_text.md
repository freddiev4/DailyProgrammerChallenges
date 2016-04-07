# [](#IntermediateIcon) *(Intermediate)*: Ranked Voting System

A [Ranked Voting System](http://en.wikipedia.org/wiki/Ranked_voting_systems) is a system that chooses a result based on a ranked-preference rather than a simple majority. A standard ranked ballot generally has multiple choices, only one of which one can be picked. A ranked ballot allows you to choose the order in which you prefer candidates. An example could be that you prefer choice **B** first, then choice **C**, and finally choice **A**.

There are some neat implications on how this differs from conventional voting systems, and is used in many different countries and states (check out the same [article's list of current uses](http://en.wikipedia.org/wiki/Ranked_voting_systems#Use_by_polities\). [CGP Grey has a great explanation](http://www.youtube.com/watch?v=3Y3jE3B8HsE) on the overall system; well worth a watch! The overall difference between the two system is that a more agreed-upon candidate could win during a heavily split election.

Your goal is to take a list of candidates and voter's ballots, implement this voting system (using the [Instant-runoff rules](http://en.wikipedia.org/wiki/Instant-runoff_voting)), and print the results of the fictional election.

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be given two space-delimited integers, N and M. N is the number of votes, while M is the number of candidates. After this line, you will be given the candidates line, which is a space-delimited set of M-number of candidate names. These names are one-word lower-case letters only. This is followed by N-lines of ballots, where each ballot is a list of M-integers, from 0 to M-1, representing the order of preference.

Note that the order of preference for ballots goes from left-to-right. The integers are the index into the candidate list. For the example below, you can map 0: Knuth, 1: Turing, 2: Church. This means that if the ballot row is "1 0 2", that means the voter prefers Turing over Knuth over Church.

## Output Description

Given the candidates and ballots, compute the first-round of successful candidates (e.g. rank them based on all ballot's first choice). If the percentage of votes for any one candidate is more than 50%, print the candidate name as the winner. Else, take all the votes of the least-successful candidate, and use their ballot's 2nd choice, summing again the total votes. If needed (e.g. there is no candidate that has more than 50% of the votes), repeat this process for the 3rd, 4th, etc. choice, and print the winner of the election.

For each round of computation, print the percentage of votes for each candidate, and rank them based on that percentage, using the output format.

# Sample Inputs & Outputs
## Sample Inputs

    5 3
    Knuth Turing Church
    1 0 2
    0 1 2
    2 1 0
    2 1 0
    1 2 0

## Sample Outputs

    Round 1: 40.0% Turing, 40.0% Church, 20.0% Knuth
    Round 2: 60.0% Turing, 40.0% Church
    Turing is the winner
