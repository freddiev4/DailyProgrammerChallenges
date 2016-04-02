#Description:

For the last part of this week's theme challenge. You have choices.

## Choice 1: Betting

Poker is about money. The betting system is interesting in Texas Hold Em. It involves assigning and moving blinds and inbetween shared cards coming out you have a chance to bet in a cycle until some conditions are meet. For this challenge implement a Texas Hold 'Em Poker betting system with your current progress from the Easy and Intermediate Challenge.

## Choice 2: Simulation

At this point we have a way to run games of different game lengths. We have built a fold AI system based on just cards and not betting. The questions remains, how good is the AI we developed? I think a good way to test it out is run many games and gather some data and see.

For this path of the challenge we want to run many simulations of the game. You will ask for how many players and how many games. At the end you will output data gathered to show some results.

#Betting:

At this point the design/flow of this I would leave to you to develop. Some things to consider in your design:

* Starting Money amount
* CPU betting AI
* Game Ending Conditions. (Player runs out of money or is last player left in game)

I would try to use the fold AI to morph it a bit to help the CPU decide how strong of a hand it thinks it has for the size of the bet. Again the design of how much to bet and if to raise/check/call is up to you. There is no wrong or right choice just the design of how you want it to work.

#Simulation:

Gather the number of cycles to run by asking the user after the amount of players. At the end of all the games we want to see the following data

* Number of Total Rounds/Games played out
* Number of Wins-losses each player had and a percentage of each
* Number of times the best hand equals the highest hand (Remember the best hand includes all hands, including folded AI players vs winning hand was only just best hand of players who did not fold. This potentially could check how good the Fold AI is at deciding to fold)
* Winning hand count - By method (High card, pair, 2 pairs, 3 of a kind, etc) This could be interesting to see what is the most common winning hand

Thank you to everyone for participating this week.

