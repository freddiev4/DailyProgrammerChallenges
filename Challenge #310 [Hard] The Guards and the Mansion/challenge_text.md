# Description

I recently came into some money and built myself a mansion. And I'm afraid of robbers who now want to come and steal the rest of my money. I built my house in the middle of my property, but now I need some guard towers. I didn't make *that* much money, so I can't build an *infinite* number of towers with an infinite number of guards - I can only afford 3. But I do need your help - how many towers do I need to build to give my house adequate coverage, and sufficient variety of coverage to keep thieves at bay?

For this problem ...

- Assume a Euclidean 2 dimensional space with my mansion at the center (0,0)
- My mansion is circular with a unit radius of 1
- I'll tell you the locations of the guard towers as Euclidean coordinates, for example (1,1). They may be negative.
- The towers only work if they form a triangle that fully emcompasses my mansion (remember, a circle centered at (0,0))

I'll give you the locations of the towers, one at a time, as a pair of integers *x* and *y* representing the coordinates. For *every* row of input please tell me how many different triangles I can have - that is arrangements of 3 occupied towers. I like diversity, let's keep the thieves guessing as to where the towers are occupied every night.

# Input Description

You'll be given an integer on the first line telling you how many lines of tower coordinate pairs to read. Example:

    4
    3 -1
    -1 3
    -1 -1
    -5 -2

# Output Description

For *every row of input* tell me how many triangles I can make that fully enclose my mansion at (0,0) with a unit radius of 1. Example:

    0
    0
    1
    2

# Challenge Input

    10
    2 -7
    2 2
    4 -9
    -4 -6
    9 3
    -8 -7
    6 0
    -5 -6
    -1 -1
    -7 10
