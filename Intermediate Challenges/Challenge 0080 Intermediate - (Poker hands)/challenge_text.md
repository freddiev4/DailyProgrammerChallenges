Your intermediate task today is to write a program that can identify a hand in poker. 

Let each hand be represented as a string composed of five different cards. Each card is represented by two characters, "XY", where X is the rank of the card (A, 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q or K) and Y is the suit of the card (H, D, C or S). 

So, for instance, "AH" would be the Ace of Hearts, "2C" would be the 2 of Clubs, "JD" would be the Jack of Diamonds, "TS" would be the Ten of Spades, and so on. Then a hand with a full house could be represented as "2C 2H TS TH TC" (a pair of twos and three tens).

Write a program that takes a string like this and prints out what type of hand it is. So, for instance, given "2C 2H TS TH TC" it would print out "Full house". Note that the cards will not necessarily be in any kind of particular order, "2C 2H TS TH TC" is the same hand as "TC 2C 2H TS TH". 

For reference, here are the different possible hands in poker, from most valuable to least valuable. Your program should be able to recognize all of these:

* Royal flush: a hand with a Ten, Jack, Queen, King and Ace in the same suit
* Straight flush: a hand with five cards of consecutive rank in the same suit
* Four of a kind: a hand with four cards of the same rank
* Full house: a hand with a pair and a three of a kind
* Flush: a hand with all cards the same suit
* Straight: a hand with five cards of consecutive rank
* Three of a kind: a hand with three cards of the same rank
* Two pair: a hand with two pairs
* Pair: and hand with two cards of the same rank
* High card: a hand with nothing special in it

Obviously, any one hand can qualify for more than one of these; every royal flush is obviously also a straight flush, and every straight flush is obviously also a flush. But you should only print out the kind with the most value, so "2H 3H 4H 5H 6H" should print out "Straight flush", not "Flush". 

***

Bonus: write a function that given two different poker hands tells you which hand is the winner. When there are apparent ties, standard poker rules apply: if both players have a pair, the player with the highest pair wins. If both have pairs of the same rank, the player with the highest card not in the pair wins (or second highest, or third highest, if there are more ties). Note that poker hands can be absolute ties: for instance, if two players both have flushes in different colors but with identical ranks, that's an absolute tie, and your function should return with that result. 
