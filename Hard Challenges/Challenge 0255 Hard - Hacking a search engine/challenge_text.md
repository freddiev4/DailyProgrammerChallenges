# Problem description

Let's consider a simple search engine: one that searches over a large list of short, pithy sayings. It can take a 5+ letter string as an input, and it returns any sayings that contain that sequence (ignoring whitespace and punctuation). For example:

     Search: jacka
    Matches: Jack and Jill went up the hill to fetch a pail of water.
            All work and no play makes Jack a dull boy.
            The Manchester United Junior Athletic Club (MUJAC) karate team was super good at kicking.

     Search: layma
    Matches: All work and no play makes Jack a dull boy.
            The MUJAC playmaker actually kinda sucked at karate.


Typically, a search engine does not provide an easy way to simply search "everything", especially if it is a private service. Having people get access to all your data generally devalues the usefulness of only showing small bits of it (as a search engine does). 

We are going to force this (hypothetical) search engine to give us all of its results, by coming up with just the right inputs such that every one of its sayings is output at least once by all those searches. We will also be minimizing the number of searches we do, so we don't "overload" the search engine.

# Formal input/output

The input will be a (possibly very long) list of short sayings, one per line. Each has at least 5 letters.

The output must be a list of 5+ letter search queries. Each saying in the input must match at least one of the output queries. Minimize the number of queries you output.

# Sample input

    Jack and Jill went up the hill to fetch a pail of water.
    All work and no play makes Jack and Jill a dull couple.
    The Manchester United Junior Athletic Club (MUJAC) karate team was super good at kicking.
    The MUJAC playmaker actually kinda sucked at karate.

# Sample output

    layma
    jacka

There are multiple possible valid outputs. For example, this is another solution:

    djill
    mujac

Also, while this is technically a valid solution, it is *not* an optimal one, since it does not have the minimum possible (in this case, 2) search queries:

    jacka
    allwo
    thema
    themu

# Challenge input

Use this file of 3877 one-line UNIX fortunes: https://raw.githubusercontent.com/fsufitch/dailyprogrammer/master/common/oneliners.txt

# Notes

This is a hard problem not just via its tag here on /r/dailyprogrammer; it's in a [class of problems](https://en.wikipedia.org/wiki/NP-completeness#NP-complete_problems) that is generally known to computer scientists to be difficult to find efficient solutions to. I picked a "5+ letter" limit on the outputs since it makes brute-forcing hard: 26^5 = 11,881,376 different combinations, checked against 3,877 lines each is 46 billion comparisons. That serves as a very big challenge. If you would like to make it easier while developing, you could turn the 5 character limit down to fewer -- reducing the number of possible outputs. Good luck!

# Lastly...

Got your own idea for a super hard problem? Drop by /r/dailyprogrammer_ideas and share it with everyone!