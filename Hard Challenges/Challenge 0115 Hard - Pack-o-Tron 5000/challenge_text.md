**Description:**

Overdrive Mega-Corporation is coming out with a new and brilliant commercial electronic device that packs your bags for you! It is named "Pack-o-Tron 5000": an automated box-packing solution. Moving to a new home? Traveling overseas? Going on a business trip? No matter what, this device will help you pack your boxes optimally, reducing empty space and fitting more objects in less area!

As the lead engineer, you are tasked with designing the code that generates the "optimal placement" of items in a given area. Fortunately for you, the "Pack-o-Tron 5000" only works with very specific definitions of "items" and "areas". (Shh, don't tell the customers that, marketing is still working on it).

An "area" is an empty 2D grid, where the length and width are integers representing inches. As an example, a suitcase could be defined as a 36-inch by 48-inch grid. An "item" is a 2D object, whose length and width are integers representing inches. As an example, a tooth-brush item can be 1-inch in width, and 3-inches long.

Your goal is to place all given items in a given area as optimally as possible. "Optimally" is defined as having the smallest minimum-rectangle that spans your set of items.

Note that the "area" is defined as a grid where the origin is in the top-left and X+ grows to the right, with Y+ growing to the bottom. An item's origin is in the top-left, with X+ growing to the right, and Y+ growing to the bottom. A minimum-rectangle that spans your set of items is a rectangle on the grid that includes all items placed, and is either equal to or smaller than the given area. Your goal is to make this minimum-span as small as possible. You are allowed to place your objects in any position, as long as it is in the grid. You are also allowed to rotate your objects by 90 degrees.

[Here is an album of several examples of how objects are placed, and how they can be moved and rotated to minimized the minimum-span rectangle.](http://imgur.com/a/M3MNk)

**Formal Inputs & Outputs:**

*Input Description:*

You will first be given two integers: the width and height of your starting (empty) grid. After, you will be given another integer representing the number of following items you are to place in this grid. For each item, you will be given two integers: the width and height of the object. All of this is done through standard input. (i.e. console).

*Output Description:*

Once you have optimally placed the given items in the given grid such that it as the smallest minimum-span possible, you must print each item's x and y coordinate (as an integer), and the object's size (to show us if there has been any rotations).

**Sample Inputs & Outputs:**

[Take a look at the example images here.](http://imgur.com/a/M3MNk) For all images that have the two 1x3 items, you would be given the following sample input:

    8 8
    2
    1 3
    1 3

The most optimal result (the last image) is a 2x3 minimum-span, which can be described in the following:

    0 0 1 3
    1 0 1 3

For those who are keen observers, an equivalent solution is the same pair of objects, but mirrored on the diagonal axis:

    0 0 3 1
    0 1 3 1

*Note:*

This is essentially a clean version of the [Packing Problem](http://en.wikipedia.org/wiki/Packing_problem). Since the packing problem is in the computational complexity class of NP-hard, there is no known algorithm to run in P-time (...yet! Maybe there is! But that's the whole P-NP relationship problem, isn't it? :P). Instead, look into heuristic algorithm designs, and try to avoid brute-force solutions.

Us mods are putting together an achievement system - those who give us a good solution will get some sort of cool title in their user-flare, since this challenge is frankly very *very* difficult.