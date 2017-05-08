**Description**

Do you know the game ["Spot it!" (aka Dobble in Europe)](https://boardgamegeek.com/boardgame/63268/spot-it) ? This is a very entertaining game of visual perception and speed. The goal of the game is to be the first player to find the matching symbol between 2 cards drawn from the pile.

Your challenge today is to build a valid set of "Spot it!" cards of a given order. The standard set has 55 cards with 8 symbols on each card, and every pair of cards has exactly one symbol in common. It is a concrete and funny example of a beautiful mathematical structure called a finite projective plane of order 7.

A finite projective projective plane of order N has the following properties:

    It consists of N^2 + N + 1 points and N^2 + N + 1 lines.
    Each point has N+1 line incidents.
    Each line has N+1 point incidents.
    Given any two points, there is exactly one line incident with both of them.
    Given any two lines, there is exactly one point incident with both of them.

What if you replace "point" with "card" and "line" with "symbol" ? You get the rules to generate a valid set of cards !

    It consists of N^2 + N + 1 cards and N^2 + N + 1 symbols.
    Each card has N+1 symbols displayed on it.
    Each symbol is displayed on N+1 cards.
    Given any two cards, there is exactly one symbol in common between them.
    Given any two symbols, there is exactly one card that displays both of them.

You may have noticed that there are 2 cards missing in the standard set to make it fulfill the rules 1 and 3 above - there should be a total of 57 cards in it. But the fun is still the same, even if you lose cards you are still able to play because of rules 4 and 5 !

The challenge difficulty will strongly depend on the value of N:

- [Intermediate] when N is prime

- [Hard] when N is a power of prime (N = X^P with X prime and P &gt; 0)

Nobody ever succeeded in generating a finite projective plane for N not being a power of prime, but you may go for it and win the Fields medal ! It has been conjectured impossible for N = 6 by [Euler](https://en.wikipedia.org/wiki/Thirty-six_officers_problem), and more recently proven for N = 10 by... [brute force](https://www.maa.org/sites/default/files/pdf/upload_library/22/Ford/Lam305-318.pdf) ! N = 12 is still an open case.

Be aware that even for relatively small orders, brute force programs will take a long time to find a valid solution. A non-brute force algorithm exists and may be used instead.

Your program should be able to handle N &lt;= 101.


**Input description**

You will be given a card set order N &gt; 1.


**Output description**

N^2 + N + 1 lines of N+1 digits (one line per card, the digits identifying the symbol number)

Example for N=2

    1 2 5
    3 4 5
    1 4 6
    3 2 6
    1 3 7
    2 4 7
    5 6 7


**Bonus 1**

Check the validity of your output against the five rules listed above.


**Bonus 2**

Replace numbered symbols by a list of words of your choice, or even pictures !


**Have a good challenge idea?**

Consider submitting it to /r/dailyprogrammer_ideas
