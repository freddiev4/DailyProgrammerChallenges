#Description:

Swiss Tournament with a Danish Twist

For today's challenge we will simulate and handle a [Swiss System Tournament] (http://en.wikipedia.org/wiki/Swiss-system_tournament)
that also runs the Danish Variation where players will only player each other at most once during the tournament.

We will have a 32 person tournament. We will run it 6 rounds. Games can end in a win, draw or loss. Points are awarded. You will have to accomplish some tasks.

* Randomly Generate 32 players [using the Test Data challenge](http://www.reddit.com/r/dailyprogrammer/comments/28vgej/6232014_challenge_168_easy_final_grades_test_data/) you can generate names
* Generate Random Pairings for 16 matches (32 players and each match has 2 players playing each other)
* Randomly determine the result of each match and score it
* Generate new pairings for next round until 6 rounds have completed
* Display final tournament results.


#Match results and Scoring.

Each match has 3 possible outcomes. Player 1 wins or player 2 wins or both tie. You will randomly determine which result occurs.

For scoring you will award tournament points based on the result. 

The base score is as follows.

* Win = 15 points
* Tie = 10 points
* Loss = 5 Points.

In addition each player can earn or lose tournament points based on how they played. This will be randomly determined. Players can gain up to 5 points or lose up to 5
tournament points. (Yes this means a random range of modifying the base points from -5 to +5 points.

##Example:

Player 1 beats player 2. Player 1 loses 3 bonus points. Player 2 gaines 1 bonus points. The final scores:

* Player 1 15 - 3 = 12 points
* Player 2 5 + 1 = 6 points

#Pairings:

Round 1 the pairings are random who plays who. After that and all following rounds pairings are based on the Swiss System with Danish variation. This means:

* #1 player in tournament points players #2 and #3 plays #4 and so on.
* Players cannot play the same player more than once.

The key problem to solve is you have to track who plays who. Let us say player Bob is #1 and player Sue is #2. They go into round 5 and they should play each other.
The problem is Bob and Sue already played each other in round 1. So they cannot play again. So instead #1 Bob is paired with #3 Joe and #2 Sue is played with #4 Carl.

The order or ranking of the tournaments is based on total tournament points earned. This is why round 1 is pure random as everyone is 0 points. As the rounds progress the tournament point totals will change/vary and the ordering will change which effects who plays who. (Keep in mind people cannot be matched up more than once in a tournament)

#Results:

At the end of the 6 rounds you should output by console or file or other the results.
It should look something like this. Exact format/heading up to you.

    Rank 	Player 	ID  Rnd1 	Rnd2 	Rnd3 	Rnd4 	Rnd5 	Rnd6 	Total
    =========================================================================
    1		Bob		23	15		17		13		15		15		16		91
    2		Sue		20	15		16		13		16		15		15		90
    3		Jim		2 	14		16		16		13		15		15		89
    ..
    ..
    31		Julie 	30	5		5		0		0		1		9		20
    32		Ken		7	0		0		1		5		1		5		12
	

#Potential for missing Design requirements:

The heart of this challenge is solving the issues of simulating a swiss tournament using a random algorithm to determine results vs accepting input that
tells the program the results as they occur (i.e. you simulate the tournament scoring without having a real tournament) You also have to handle the Danish requirements
of making sure pairings do not have repeat match ups. Other design choices/details are left to you to design and engineer. You could output a log showing pairings on each
round and showing the results of each match and finally show the final results. Have fun with this. 


#Our Mod has bad Reading comprehension:

So after slowing down and re-reading the wiki article the Danish requirement is not what I wanted. So ignore all references to it. Essentially a Swiss system but I want players only to meet at most once.


The hard challenge of handling this has to be dealing with as more rounds occur the odds of players having played each other once occurs more often. You will need to do more than 1 pass through the player rooster to handle this. How is up to you but you will have to find the "best" way you can to resolve this. Think of yourself running this tournament and using paper/pencil to manage the pairings when you run into people who are paired but have played before.

