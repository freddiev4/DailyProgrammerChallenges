# Description

Use either an [Evolutionary](http://en.wikipedia.org/wiki/Evolutionary_algorithm) or [Genetic Algorithm](http://en.wikipedia.org/wiki/Genetic_algorithm) to evolve a solution to the fitness functions provided!

# Input description

The input string should be the target string you want to evolve the initial random solution into.

The target string (and therefore input) will be 

    'Hello, world!'

However, you want your program to initialize the process by randomly generating a string of the same length as the input. The only thing you want to use the input for is to determine the fitness of your function, so you don't want to just cheat by printing out the input string!

# Output description
The ideal output of the program will be the evolutions of the population until the program reaches 'Hello, world!' (if your algorithm works correctly). You want your algorithm to be able to turn the random string from the initial generation to the output phrase as quickly as possible!

    Gen: 1  | Fitness: 219 | JAmYv'&L_Cov1
    Gen: 2  | Fitness: 150 | Vlrrd:VnuBc
    Gen: 4  | Fitness: 130 | JPmbj6ljThT
    Gen: 5  | Fitness: 105 | :^mYv'&oj\jb(
    Gen: 6  | Fitness: 100 | Ilrrf,(sluBc
    Gen: 7  | Fitness: 68  | Iilsj6lrsgd
    Gen: 9  | Fitness: 52  | Iildq-(slusc
    Gen: 10 | Fitness: 41  | Iildq-(vnuob
    Gen: 11 | Fitness: 38  | Iilmh'&wmsjb
    Gen: 12 | Fitness: 33  | Iilmh'&wmunb!
    Gen: 13 | Fitness: 27  | Iildq-wmsjd#
    Gen: 14 | Fitness: 25  | Ihnlr,(wnunb!
    Gen: 15 | Fitness: 22  | Iilmj-wnsjb!
    Gen: 16 | Fitness: 21  | Iillq-&wmsjd#
    Gen: 17 | Fitness: 16  | Iillq,wmsjd!
    Gen: 19 | Fitness: 14  | Igllq,wmsjd!
    Gen: 20 | Fitness: 12  | Igllq,wmsjd!
    Gen: 22 | Fitness: 11  | Igllq,wnsld#
    Gen: 23 | Fitness: 10  | Igllq,wmsld!
    Gen: 24 | Fitness: 8   | Igllq,wnsld!
    Gen: 27 | Fitness: 7   | Igllq,!wosld!
    Gen: 30 | Fitness: 6   | Igllo,!wnsld!
    Gen: 32 | Fitness: 5   | Hglln,!wosld!
    Gen: 34 | Fitness: 4   | Igllo,world!
    Gen: 36 | Fitness: 3   | Hgllo,world!
    Gen: 37 | Fitness: 2   | Iello,!world!
    Gen: 40 | Fitness: 1   | Hello,!world!
    Gen: 77 | Fitness: 0   | Hello, world!
    Elapsed time is 0.069605 seconds.

# Notes/Hints

One of the hardest parts of making an evolutionary or genetic algorithm is deciding what a decent fitness function is, or the way we go about evaluating how good each individual (or potential solution) really is.

One possible fitness function is [The Hamming Distance](http://en.wikipedia.org/wiki/Hamming_distance)

# Bonus

As a bonus make your algorithm able to accept any input string and still evaluate the function efficiently (the longer the string you input the lower your mutation rate you'll have to use, so consider using scaling mutation rates, but don't cheat and scale the rate of mutation with fitness instead scale it to size of the input string!)

# Credit

This challenge was suggested by /u/pantsforbirds. Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas.
