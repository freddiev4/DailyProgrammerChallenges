#Theme Week:

We continue our theme week challenge with a more intermediate approach to this game. We will be adding on to the challenge from monday. Those who have done monday's challenge will find this challenge a little easier by just modifying what they have done from monday.


[Monday's Part 1 Challenge] (http://www.reddit.com/r/dailyprogrammer/comments/23lfrf/4212014_challenge_159_easy_rock_paper_scissors/)

#Description:

We are gonna upgrade our game a bit. These steps will take the game to the next level.

Our computer AI simply randoms every time. We can go a step further and implement a basic AI agent that learns to create a better way in picking. Please add the following enhancements from monday's challenge.


* Implement a Game Loop. This should be a friendly menu that lets the player continue to play matches until they pick an option to quit. 
* Record the win and tie record of each player and games played.
* At termination of game display games played and win/tie records and percentage (This was the extra challenge from monday)
* Each time the game is played the AI agent will remember what the move of the opponent was for that match. 
* The choice of what move the computer picks in future games will be based on taking the top picks so far and picking from the counter picks. In the case of a tie for a move the computer will only random amongst the counter moves of those choices and also eliminate from the potential pool of picks any moves it is trying to counter to lessen the chance of a tie.


Example of this AI.

Game 1 - human picks rock

Game 2 - human picks paper

Game 3 - human picks lizard

Game 4 - human picks rock

For game 5 your AI agent detects rock as the most picked choice. The counter moves to rock are Spock and Paper. The computer will randomized and pick one of these for its move.


Game 5 - human picks lizard.


For game 6 your AI agent sees a tie between Rock and Lizard and then must decide on a move that counters either. The counters could be Spock, Paper, Rock, Scissors. Before picking eliminate counters that match any of the top picks. So since Rock was one of the top picks so far we eliminate it as a possible counter to prevent a tie. So random between Spock, Paper and Scissors.


if for any reason all choices are eliminated then just do a pure random pick.



#Input:

Design a menu driven or other interface for a loop that allows the game to play several games until an option/method is used to terminate the game.


Design and look is up to you.


#Output:

Similar to monday. So the moves and winner. On termination of the game show the number of games played. For each player (human and computer) list how many games they won and the percentage. Also list how many tie games and percentage.

#For Friday:

Friday we will be kicking this up further. Again I suggest design solutions so that you can pick which AI you wish to use (Either a pure random or this new AI for this challenge) as the Bot for making picks.

#Extra Challenge:

The menu system defaults to human vs new AI. Add a sub-menu system that lets you define which computer AI you are playing against. This means you pick if you are human vs random AI (from monday) or you can do human vs Learning AI (from this challenge).


Play 10 games against each AI picking method and see which computer AI has the better win rate.

#Note on the AI:

Friday will have a few steps. One is make your AI that is better than this one. The intent of this AI was to either give guidance to those who don't wish to develop their own AI and also to test to see if it is better than a true random pick. It was not intended to be good or bad.


Those who wish to develop their own AI for the intermediate I would encourage you to do so. It has to be more complex than just simply doing a pure random number to pick. Doing so will get you a step ahead.
