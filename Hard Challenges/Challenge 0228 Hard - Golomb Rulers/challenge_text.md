# Description

A typical ruler has many evenly spaced markings. For instance a standard 12” ruler has 13 marks along its edge, each spaced 1” apart. This is great, and allows the measurement all (integer) values of length between 1” and 12”.

However, a standard ruler is grossly inefficient. For example, the distance of length 1” can be measured multiple ways on this ruler: 0 to 1, 1 to 2, 2 to 3, etc. 

A mathematician named Solomon W. Golomb had an idea about making rulers more efficient, and rulers of this type are named after him. A Golomb ruler comprises a series of marks such that no two pairs of marks are the same distance apart. Below is an example. This ruler has markings that allow all integer distances between 1-6 units to be measured. Not only that, but each distance can be measured in only way way.

    0 1     4    6
    +-+-----+----+

You can see how you can measure every integer distance between 1 and 6:

      0 1     4    6
      +-+-----+----+

    1 +-+
    2         +----+
    3   +-----+
    4 +-------+
    5   +----------+
    6 +------------+  

Golomb rulers are described by their **order**, which is the number of marks on their edge. The example above is an order 4 ruler. The length of a Golomb ruler is the distance between the outer two marks and, obviously, represents the longest distance it can measure. The above example has a length of 6.

There is no requirement that a Golomb ruler measures all distances up to their length – the only requirement is that each distance is only measured in one way. However, if a ruler does measure all distances, it is classified as a *perfect* Golomb ruler. The above example is a perfect Golumb ruler. Finally, a Golomb ruler is described as *optimal* if no shorter ruler of the same order exists.

Today's challenge is to determine where to place the marks on an optimal (but not necessarily perfect) Golomb ruler when given its order. 

# Input Description

You'll be given a single integer on a line representing the optimal Golomb ruler order. Examples:

    3
    5

# Output Description

Your program should emit the length of the optimal Golomb ruler and the placement of the marks. Note that some have multiple solutions, so any or all of the solutions can be yielded. Examples:

    3   3   0 1 3
    5   11  0 1 4 9 11
            0 2 7 8 11

Here you can see that we have two solutions for a Golomb ruler of order five and length 11. 

# Challenge Input

    8
    7
    10
    20
    26

# Challenge Output

Beware the word wrap!

    8   34  0 1 4 9 15 22 32 34
    7   25  0 1 4 10 18 23 25
            0 1 7 11 20 23 25
            0 1 11 16 19 23 25
            0 2 3 10 16 21 25
            0 2 7 13 21 22 25
    10  55  0 1 6 10 23 26 34 41 53 55
    20  283 0 1 8 11 68 77 94 116 121 156 158 179 194 208 212 228 240 253 259 283
    26  492 0 1 33 83 104 110 124 163 185 200 203 249 251 258 314 318 343 356 386 430 440 456 464 475 487 492
