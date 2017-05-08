**Description**

I'm organising a dinner party with the help of my partner.  We've invited some other couples to come and we want to get everyone talking with someone new and so we don't want partners to sit next to each other at our circular table.  For example, given three couples (one person being denoted as `a` and the other as `A`), we would be able to position them like so:

    abcABC

Due to the fact that no touching letters are the same.  An invalid layout would be:

    acbBCA

For two reasons, not only are the two "b"s next to each other, but also on this circular table, so are the two "a"s.

However, during this party, two mathematicians got into an argument about how many different arrangements there were for a certain.  To try to placate the issue, you (a plucky computer scientist) wishes to create a program to settle the matter once at for all.

**Inputs and Outputs**

Your input will be a single number, `n`, the number of couples there are.  Your output will be the number of permutations of acceptable arrangements with the number of couples `n`.  Some example values are given:

| **Couples** | **Permutations** |
|-------------|------------------|
| 1           | 0                |
| 2           | 2                |
| 3           | 32               |

Note: This is a circular table, so I count "aAbB" to be the same as "BaAb", since they are simply rotations of each other.

**Bonus**

You just can't get the guests sometimes, some of them have already sat down and ignored your seating arrangements!  Find the number of permutations given an existing table layout (underscores represent unknowns):

    <<< ab_B
    >>> 1

In this case, there is only one solution (abAB).

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

#Side note

Sorry for being late, my cat was overrun by a car and we had to do some taking care of it first.

I'm sorry for the delay