#Description:

For today's challenge you must do the [Intermediate Traveller Game] (http://www.reddit.com/r/dailyprogrammer/comments/2g1c80/9102014_challenge_179_intermediate_roguelike_the/) challenge from wednesday. If you have already done it then you have a head start.

We will modify our Traveller game by adding Torch light. Seeing the whole map is too easy. If you are limited in what you can see then you have a tougher time planning your moves.

You will modify your game the following ways.


* Add Torch view You only see 3 spaces away from your hero
* Add 5 Random Wall barriers -- These are 3 walls in a row either vertical or horizontal. Or have a fixed map with hallways/wallls. Your choice.
* Continue to generate random gold/goal spots for scoring.
* Same Map size as the itnermediate.

#Examples:

Here are 3 examples of how the torchlight should work. 




        Full Sight
		%%%%%%%%%%
		%..$.....%
		%......$.%
		%...@....%
		%....$...%
		%.$......%
		%%%%%%%%%%

		Torch Level 3
		   %
		  $..
		 .....
		...@...
		 ...$.
		  ...
		   %	 

		Full Sight (corner case)
		%%%%%%%%%%
		%@.$.....%
		%......$.%
		%........%
		%....$...%
		%.$......%
		%%%%%%%%%%

		Torch Level 3
		%%%%
		%@.$.
		%...
		%..
		.

		Full Sight (Barrier case)
		%%%%%%%%%%
		%..$.....%
		%.%%...$.%
		%...@....%
		%.%%%%%%.%
		%.$......%
		%%%%%%%%%%

		Torch Level 3
		   %
		   ..
		 %%...
		...@...
		 %%%%%
 
#Harder:

Torches have a power of 5 instead of 3 -- every 2 Steps the Torch degenerates in power to 4 then 3 then 2 then 1 then none. In the room you will random place other "T" for torches or a light source which will refresh your torch power by +2 up to a max of 10. Again your Torch view will degenerate by 1 every 2 steps used (so if you can gain more than 5 torch power up to 10 but then it will degenerate 10-9-8 etc)

You will add 10 random pit traps. If the hero ends in the pit trap they die and game is over. 

