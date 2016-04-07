# [](#IntermediateIcon) *(Intermediate)*: Foot-Traffic Generator

This week's [Easy] challenge was [#133: Foot-Traffic Analysis](http://www.reddit.com/r/dailyprogrammer/comments/1iambu/071513_challenge_133_easy_foottraffic_analysis/): part of the challenge was to parse foot-traffic information and print out some room-usage information. What if we wanted to test this program with our own custom data-set? How can we generate a custom log to test our Foot-Traffic Analysis tool with? Real-world programming requires you to often write your own test-generating code! Your goal in this challenge is to do exactly that: write a foot-traffic generator!

Read up on the original [[Easy] challenge here](http://www.reddit.com/r/dailyprogrammer/comments/1iambu/071513_challenge_133_easy_foottraffic_analysis/), and take a look at the input-data format as well as the important data-consistency rules. It's very important to understand the previous challenge's input format, as your output here will have to match it!

*Original author: /u/nint22*

*Note: This is not a particularly difficult challenge, but it is a great example of real-world programming! Make sure you actually test your generator with the previous challenge's program you wrote.*

# Formal Inputs & Outputs
## Input Description

On standard console input, you will be given one line of five space-delimited integers: E (for the number of events to generate), V (for the number of visitors), R (for the number of rooms), I (for the time at which the earliest event can occur), and O (for the time at which the last event can occur).

## Output Description

You must output a data-set that follows the input format for the Foot-Traffic Analysis challenge. You must print off E x2 lines (the x2 is because one "event" is defined as both a visitor going into a room and then eventually out of it), only referring to user indices 0 to V (inclusive) and room indices 0 to R (inclusive). Make sure that the time for any and all events are within the range of I and O (inclusive)! Remember that time is defined as the minute during the day, which will always be between 0 and 24H x 60 minutes (1440).

Though your data set can randomly pick the visitor and room index, you must make sure it is logically valid: users that enter a room eventually have to leave it, users cannot enter a room while being in another room, and must always enter a room first before leaving it. Note that we do not enforce the usage of all visitor or room indices: it is possible that with a small E but a large R and V, you only use a small subset of the room and visitor indices.

Make sure to [seed your random-number generator](http://en.wikipedia.org/wiki/Random_seed)! It does not matter if your resulting list is ordered (on any column) or not.

# Sample Inputs & Outputs
## Sample Input

    18 8 32 300 550

## Sample Output

    36
    0 11 I 347
    1 13 I 307
    2 15 I 334
    3 6 I 334
    4 9 I 334
    5 2 I 334
    6 2 I 334
    7 11 I 334
    8 1 I 334
    0 11 O 376
    1 13 O 321
    2 15 O 389
    3 6 O 412
    4 9 O 418
    5 2 O 414
    6 2 O 349
    7 11 O 418
    8 1 O 418
    0 12 I 437
    1 28 I 343
    2 32 I 408
    3 15 I 458
    4 18 I 424
    5 26 I 442
    6 7 I 435
    7 19 I 456
    8 19 I 450
    0 12 O 455
    1 28 O 374
    2 32 O 495
    3 15 O 462
    4 18 O 500
    5 26 O 479
    6 7 O 493
    7 19 O 471
    8 19 O 458