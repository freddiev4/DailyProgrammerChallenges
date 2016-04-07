# [](#IntermediateIcon) _(Intermediate)_: Rummy Checker

[Rummy](http://en.wikipedia.org/wiki/Rummy) is another very common card game. This time, the aim of the game is to match cards together into groups (**melds**) in your hand. You continually swap cards until you have such melds, at which point if you have a valid hand you have won. Your hand contains 7 cards, and your hand will contain 2 melds - one that is 3 long and one that is 4 long. A meld is either:

* 3 or 4 cards of the same rank and different suit (eg. 3 jacks or 4 nines) called a **set**

* 3 or 4 cards in the same suit but increasing rank - eg. Ace, Two, Three, Four of Hearts, called a **run**

Ace is played low - ie. before 2 rather than after king.

Your challenge today is as follows. You will be given a Rummy hand of 7 cards. You will then be given another card, that you have the choice to pick up. The challenge is to tell whether picking up the card will win you the game or not - ie. whether picking it up will give you a winning hand. You will also need to state which card it is being replaced with.
    
## Input Description

First you will be given a comma separated list of 7 cards on one line, as so:

    Two of Diamonds, Three of Diamonds, Four of Diamonds, Seven of Diamonds, Seven of Clubs, Seven of Hearts, Jack of Hearts

Next, you will be given another (**new**) card on a new line, like so:

    Five of Diamonds
    
## Output Description

If replacing a card in your hand with the new card will give you a winning hand, print which card in your hand is being replaced to win, for example:

    Swap the new card for the Jack of Hearts to win!

Because in that case, that would give you a run (Two, Three, Four, Five of Diamonds) and a set (Seven of Diamonds, Clubs and Hearts). In the event that picking up the new card will do nothing, print:

	No possible winning hand.

# Notes

You may want to re-use some code for your card and deck structure from your solution to [this challenge](http://www.reddit.com/r/dailyprogrammer/comments/29zut0) where appropriate.