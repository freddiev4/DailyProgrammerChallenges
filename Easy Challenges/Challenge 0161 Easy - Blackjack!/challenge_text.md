#Description:

So went to a Casino recently. I noticed at the Blackjack tables the house tends to use several decks and not 1. My mind began to wonder about how likely natural blackjacks (getting an ace and a card worth 10 points on the deal) can occur.


So for this monday challenge lets look into this. We need to be able to shuffle deck of playing cards. (52 cards) and be able to deal out virtual 2 card hands and see if it totals 21 or not. 

* Develop a way to shuffle 1 to 10 decks of 52 playing cards.
* Using this shuffle deck(s) deal out hands of 2s
* count how many hands you deal out and how many total 21 and output the percentage.

#Input:

n: being 1 to 10 which represents how many deck of playing cards to shuffle together.

#Output: 

After x hands there was y blackjacks at z%.


##Example Output:


After 26 hands there was 2 blackjacks at %7.


##Optional Output:

Show the hands of 2 cards. So the card must have suit and the card.

* D for diamonds, C for clubs, H for hearts, S for spades or use unicode characters.
* Card from Ace, 2, 3, 4, 5, 6, 8, 9, 10, J for jack, Q for Queen, K for king




#Make Challenge Easier:

Just shuffle 1 deck of 52 cards and output how many natural 21s (blackjack) hands if any you get when dealing 2 card hands.

#Make Challenge Harder:


When people hit in blackjack it can effect the game. If your 2 card hand is 11 or less always get a hit on it. See if this improves or decays your rate of blackjacks with cards being used for hits. 

#Card Values:

Face value should match up. 2 for 2, 3 for 3, etc. Jacks, Queens and Kings are 10. Aces are 11 unless you get 2 Aces then 1 will have to count as 1.

#Source:

Wikipedia article on blackjack/21  [Link to article on wikipedia] (http://en.wikipedia.org/wiki/Blackjack)
