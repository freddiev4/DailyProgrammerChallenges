# Description

You are the biggest, baddest mahjong player around. Your enemies tremble at your presence on the battlefield, and you can barely walk ten steps before a fan begs you for an autograph.

However, you have a dark secret that would ruin you if it ever came to light. You're terrible at determining whether a hand is a winning hand. For now, you've been able to bluff and bluster your way, but you know that one day you won't be able to get away with it.

As such, you've decided to write a program to assist you!

## Further Details

Mahjong (not to be confused with [mahjong solitaire](http://en.wikipedia.org/wiki/Mahjong_solitaire)) is a game where hands are composed from combinations of tiles. There are a number of variants of mahjong, but for this challenge, we will consider a simplified variant of Japanese Mahjong which is also known as Riichi Mahjong.

## Basic Version
There are three suits in this variant, "Bamboo", "Circle" and "Character". Every tile that belongs to these suits has a value that ranges from 1 - 9.

To complete a hand, tiles are organised into groups. If every tile in a hand belongs to a single group (and each tile can only be used once), the hand is a winning hand.

For now, we shall consider the groups "Pair", "Set" and "Sequence". They are composed as follows:

Pair - Two tiles with the same suit and value

Set - Three tiles with the same suit and value

Sequence - Three tiles with the same suit, and which increment in value, such as "Circle 2, Circle 3, Circle 4". There is no value wrapping so "Circle 9, Circle 1, Circle 2" would not be considered valid.

A hand is composed of 14 tiles.

## Bonus 1 - Adding Quads

There is actually a fourth group called a "Quad". It is just like a pair and a set, except it is composed of four tiles.

What makes this group special is that a hand containing quads will actually have a hand larger than 14, 1 for every quad. This is fine, as long as there is *1, and only 1 pair*.

## Bonus 2 - Adding Honour Tiles

In addition to the tiles belonging to the three suits, there are 7 additional tiles. These tiles have no value, and are collectively known as "honour" tiles.

As they have no value, they cannot be members of a sequence. Furthermore, they can only be part of a set or pair with tiles that are exactly the same. For example, "Red Dragon, Red Dragon, Red Dragon" would be a valid set, but "Red Dragon, Green Dragon, Red Dragon" would not.

These additional tiles are:

* Green Dragon
* Red Dragon
* White Dragon
* North Wind
* East Wind
* South Wind
* West Wind

## Bonus 3 - Seven Pairs

There are a number of special hands that are an exception to the above rules. One such hand is "Seven Pairs". As the name suggests, it is a hand composed of seven pairs.

# Formal Inputs & Outputs

## Input description

### Basic

You will be provided with N on a single line, followed by N lines of the following format:

<tile suit>,<value>

### Bonus 2

In addition, the lines may be of the format:

<honour tile>

## Output description

You should output whether the hand is a winning hand or not.

# Sample Inputs and Outputs

## Sample Input (Standard)

    14
    Circle,4
    Circle,5
    Circle,6
    Bamboo,1
    Bamboo,2
    Bamboo,3
    Character,2
    Character,2
    Character,2
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9

## Sample Output (Standard)

    Winning hand

## Sample Input (Standard)

    14
    Circle,4
    Bamboo,1
    Circle,5
    Bamboo,2
    Character,2
    Bamboo,3
    Character,2
    Circle,6
    Character,2
    Circle,1
    Bamboo,8
    Circle,1
    Bamboo,7
    Bamboo,9

## Sample Output (Standard)

    Winning hand

## Sample Input (Standard)

    14
    Circle,4
    Circle,5
    Circle,6
    Circle,4
    Circle,5
    Circle,6
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9
    Circle,4
    Circle,5
    Circle,6

## Sample Output (Standard)

    Winning hand

## Sample Input (Bonus 1)

    15
    Circle,4
    Circle,5
    Circle,6
    Bamboo,1
    Bamboo,2
    Bamboo,3
    Character,2
    Character,2
    Character,2
    Character,2
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9

## Sample Output (Bonus 1)

    Winning hand

## Sample Input (Bonus 1)

    16
    Circle,4
    Circle,5
    Circle,6
    Bamboo,1
    Bamboo,2
    Bamboo,3
    Character,2
    Character,2
    Character,2
    Character,2
    Circle,1
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9

## Sample Output (Bonus 1)

    Not a winning hand

## Sample Input (Bonus 2)

    14
    Circle,4
    Circle,5
    Circle,6
    Bamboo,1
    Bamboo,2
    Bamboo,3
    Red Dragon
    Red Dragon
    Red Dragon
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9

## Sample Output (Bonus 2)

    Winning hand

## Sample Input (Bonus 2)

    14
    Circle,4
    Circle,5
    Circle,6
    Bamboo,1
    Bamboo,2
    Bamboo,3
    Red Dragon
    Green Dragon
    White Dragon
    Circle,1
    Circle,1
    Bamboo,7
    Bamboo,8
    Bamboo,9

## Sample Output (Bonus 2)

    Not a winning hand

## Sample Input (Bonus 3)

    14
    Circle,4
    Circle,4
    Character,5
    Character,5
    Bamboo,5
    Bamboo,5
    Circle,5
    Circle,5
    Circle,7
    Circle,7
    Circle,9
    Circle,9
    Circle,9
    Circle,9

## Sample Output (Bonus 3)

    Winning hand

# Notes

None of the bonus components depend on each other, and can be implemented in any order. The test cases do not presume completion of earlier bonus components. The order is just the recommended implementation order.

Many thanks to Redditor /u/oketa for this submission to /r/dailyprogrammer_ideas. If you have any ideas, please submit them there!