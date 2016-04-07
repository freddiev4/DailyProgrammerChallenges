Are you ready to take the [Game of Threes](https://www.reddit.com/r/dailyprogrammer/comments/3rhzdj/20151104_challenge_239_intermediate_a_zerosum/) to the next level? 

# Background

As it turns out, if we chain the steps of a Threes solution into a sequence (ignoring their signs), the sequence becomes a [ternary](https://en.wikipedia.org/wiki/Ternary_numeral_system) representation of numeric data. In other words, we can use base 3 (instead of decimal or binary) to store numbers! 

For example, if we were to use [ASCII character values](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/ASCII-Table-wide.svg/2000px-ASCII-Table-wide.svg.png) as our "data", then we could encode the letter `a` into a Threes solution like this:

- `a` is `97` in decimal
- `97` in base 3 (ternary) is `10121`
- We can "reverse" the Threes process in order to come up with a number that has a threes solution containing the numbers `[1, 0, 1, 2, 1]` in that order.
  - Start at 1 (where Threes ends)
  - `1 * 3 + 1` = `4`
  - `4 * 3 - 2` = `10`
  - `10 * 3 - 1` = `29`
  - `29 * 3 + 0` = `87`
  - `87 * 3 + 1` = `262`
- A "Threes-encoded" `a` is then the number `262`. 

Note that at a couple steps, we subtracted instead of adding. Since the sign in the solution is not significant, additions can be flipped for subtractions to achieve different results. That means that `a` could actually be encoded as: `260`, `278`, `386`, `388`, or others. For example, `260` could be decoded like this:

    260 1
    87 0
    29 1
    10 2
    4 -1
    1

That still results in `10121`, in base 10 is `97`, or ASCII `a`. However, there is now the possibility to go wrong in the decoding!

    262 2
    88 2
    30 0
    10 -1
    3 0
    1
    1

That decoding resulted in `22010`, which is base 10 `219`, or ASCII `Û`. Oops!

# The Problem

Now that we have a way to encode/decode characters into "Threes", let's encode words:

- `three` -&gt; `[11022, 10212, 11020, 10202, 10202]` (ternary)
- Concatenate them all into: `1102210212110201020210202`
- Encode that string by working Threes backwards so it becomes: `1343814725227`

Where is this all going? Your mission for this challenge is to take a Threes-encoded English word as input, and output the original, un-encoded word. You may want to use a dictionary file containing a list of valid words. See: [enable1.txt](https://raw.githubusercontent.com/fsufitch/dailyprogrammer/master/common/enable1.txt). Since enable1.txt is all lowercase, you should make your word checking case-insensitive (e.g. "ExtrapOlation" is a word). Just remember that encoded upper and lower case letters have very different codes.

*Note:* Some encoded numbers have multiple possible word solutions. If you get a slightly different word, that's okay. Alternatively, you could make your solution output *all* possible word solutions!

## Sample Input 1

    1343814725227

## Sample Output 1

    three

## Sample Input 2

    66364005622431677379166556

## Sample Output 2

    Programming

## Challenge Input

    1023141284209081472421723187973153755941662449

# Bonus Points

Solve the problem without using a words file (like "enable1.txt"). *Note:* This may or may not be possible; I'm not actually sure. **Update:** The bonus is actually impossible. As [others](https://www.reddit.com/r/dailyprogrammer/comments/3rrtxh/20151106_challenge_239_hard_an_encoding_of_threes/cwqwn5s) and [I](https://www.reddit.com/r/dailyprogrammer/comments/3rrtxh/20151106_challenge_239_hard_an_encoding_of_threes/cwr5cnt) remarked, there are just too many possible solutions/combinations. A dictionary or other language guide is necessary.

# Fluff

This concludes the Game of Threes series. Since this was my (/u/Blackshell's) first series of posted problems, I would really appreciate feedback on how it went. Thanks for playing!