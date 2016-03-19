Make a function that generates an array of 1,000 2-dimensional points, where both the x-coordinate and the y-coordinate are between 0.0 and 1.0. So (0.735, 0.167) and (0.456, 0.054) would be examples.
(Most computer languages have a simple random function that returns a double precision floating point number in this range, so you can use that to generate the coordinates. Python has random.random(), Java has Math.random(), Perl has rand(), etc. )

Create a program that finds the two points in this array that are closest to each other, and print that distance.
As a reminder, the distance between the two points (x1, y1) and (x2, y2) is sqrt( (x1 - x2)^2 + (y1 - y2)^2 ).

Bonus 1: Do the same thing, but instead of using 1,000 points, use 1,000,000 points and see if you can create an algorithm that runs in a reasonable amount of time [edit: something like one minute or less].

Bonus 2: Do the same thing but for 3-dimensional points.

* thanks to oskar_s for today's challenge at [/r/dailyprogrammer_ideas](/r/dailyprogrammer_ideas) ...  
[LINK](http://www.reddit.com/r/dailyprogrammer_ideas/comments/rjdi1/difficult_find_the_closest_pair_of_points/)

