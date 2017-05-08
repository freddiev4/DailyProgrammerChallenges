**Description**

The zombie apocalypse is still happening from the [previous challenge](https://www.reddit.com/r/dailyprogrammer/comments/3z1cxs/20160101_challenge_247_hard_zombies_on_the/).

Our team has survived the journey to Last Chance, CA. only to find the city is abandonded!  Luckily for us, the last people to inhabit the once great city have left information behind for others to know where they population has moved to.  So to speak; our princess is in another castle!  That's not all, it seems the forebearers have compiled a helpful map detailing the minimum number of zombies one can expect to encounter while traveling between *select, major cities*.  Our DailyProgrammer group helpfully updates the entries from our previous use of the BFZG 3000.  The batteries on our handhelds are running lower than ever -- we need something fast and efficient.  Some of our moderators are too injured to fight off any more zombies than they absolutely must -- our solution needs be the best path with no compromises!

**Input description**

The input will be broken up into two parts separated by a blank line.

The first section has information about the available roads.  This section follows the same format from the previous challenge.  It is a list of 3-tuples: The first two numbers indicate an undirected edge between cities, and the third number lists the number of zombies on that road.  Our team starts at city 0 and ends at the highest city of the input. In this section, a `(0,7,900)` indicates there are 900 zombies on the road between city 0 and city 7.

The second section has information about the landmark cities.  This section is split into lines of N numbers.  The first number indicates the landmark city.  The remaining 0 .. n-1 numbers indicate how many zombies one can expect on a path to the landmark from that city. In this section, a line `4 100 150 150 200 0 100 200 250` indicates city 4 is the landmark and the following `100 150 150 200 0 100 200 250` values are the minimum number of zombies from every other city in order, 0 .. N-1, and the landmark.  The third entry is a 0 because the number of zombies between itself is always 0.

Example 1:

    (0, 7, 900), (0, 1, 50), (1, 2, 50), (2, 3, 50), (3, 7, 50), (0, 4, 100), (4, 5, 100), (5, 6, 100), (6, 7, 100), (2,5,50)

    1 50 0 50 100 150 100 200 150
    4 100 150 150 200 0 100 200 250
    6 250 200 150 200 200 100 100


Here's a [visual layout](http://imgur.com/ognf7sF) of example 1.

**Output description**

Display the the BEST possible path between start and end cities and the total time in milliseconds.  The solution to the example above is:

    0 1 2 3 7

**Notes/Hints**

*Spoilers*: here are [the slides](http://www.ukuug.org/events/agm2010/ShortestPath.pdf) from a talk Simon Peyton Jones/Andrew Goldberg gave on the different shortest path algorithms that will be *very* helpful to this challenge.

**Bonus**

Make your implementation take a city's "reach" into consideration.  See linked slides for information.  TODO add inputs that exercise implementations with reach.

#Finally

Are you like /u/wizao and you have a fantastic idea for a challenge?

Consider submitting it to /r/dailyprogrammer_ideas