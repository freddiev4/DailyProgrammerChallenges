#Description:
Across the land the people whisper "Beware the Wumpus. For it slumbers in the cave up yonder in the hills. Only the brave seek him."  


This challenge will be about implementing a simple rogue like game. You will create a game engine that will accept simple commands from the user. You will parse the commands and process them. You will score the moves with a point system. The goal of the player is to score the most points with 1 life. The cave will be a randomly generated N sized cave. 

#Design:

##Cave Creation:

On running the game the user picks the size of the cave by entering a number N. This creates a cave NxN in size. N must be 10 to 20 in size.

The cave has rooms that scale with the size of the cave. The location of these rooms are picked randomly and the amount of each type is fixed on single number or percentage of how many rooms in the cave.

**Entrance**: Only 1 of the rooms must be an entrance/exit point. This is where the player controlled hero spawns and can choose to leave the cave to end it.


**Wumpus**: 15% of the rooms must spawn a Wumpus. (A monster your hero seeks to slay). So if you have 100 rooms, 15 of them will spawn a Wumpus.

**Pit Trap**: 5% of the rooms must be a pit trap. If you walk into this room you fall to your doom. (And the game is over)

**Gold**: 15% of the rooms must have a gold to loot. 

**Weapon**: 15% of the rooms must have a weapon on the ground for the player to pick up to use for slaying monsters.

**Empty**: The remainder of rooms not assigned one of the above will be empty.


##Game Engine:

The game engine is an endless loop. It will display to the user basic info for the game and prompt for a single letter command. It will parse the command then refresh the basic info and continue to prompt for a move. 

**How the Game Ends:**

* The hero leaves the cave by the entrance. 
* The hero dies by moving into a pit trap room.
* The hero dies by moving into a room with a Wumpus without having picked up a weapon.
* The player chooses X to hard exit out of the game right of way.

***
The player scores points. The higher the points the better they do at the game. The following is the point system.

**Point system:**

* Explore an empty room not visited before: 1 point
* Find and Pickup a weapon: 5 points
* Find and kill a Wumpus: 10 points
* Find and loot gold: 5 points

***

**Game Commands:**

When prompted the following commands can be entered and causes an action for the player:
(Note: Case insensitive -- uppercase shown for easy to read)

* ? -- help to show this list of moves a player can make
* N  -- move north 1 space - cannot move north if the cave ends (outside of grid)
* S  -- move south 1 space - cannot move south if the cave ends (outside of grid)
* E  -- move east 1 space - cannot move east if the cave ends (outside of grid)
* W -- moves west 1 space - cannot move west if the cave ends (outside of grid)
* L -- loot either gold or weapon in the room
* R -- run out of the cave entrance and head to the local inn to share your tale
* X -- this is a hard exit out of the game. The game ends with no points awarded.

##Environment Changes:

As the game progresses the cave changes based on the actions.

* Once a weapon is picked up all other weapon rooms turn into gold rooms.

* Entering a Wumpus room with a weapon that has been picked up instantly slays the Wumpus and turns that room into an empty explored room (only points for kill the Wumpus are given not points for exploring an empty room as well)

* Picking up a weapon/gold will turn that room into an empty explored room (only points for the items and not for exploring an empty room)


##Understanding Walls & Environment:

There are walls surrounding your cave. So for example if you pick N to be 10 you will have a 10x10 cave. But really the cave is 12x12 with the Border of the Cave being Walls. You cannot go in a direction that would put you into a wall. (This is not a game for mining) Trying to move into a wall will display an error describing how you bump into a wall or such and continue then to redisplay the current room you are in and prompt for another command.


As you move in the cave you will be given hints to nearby dangers (see below on output). If to the n, s, e, w of your position you are next ta Wumpus you will "Detect a Foul Stench in the Air". If to the n, s, e, w of your position you are next to a pit trap you will "Hear a howling wind".


There are no clues to being near an empty room, gold or weapons. 


#Input & Output:

##Start of Game:
either pass the N size of the cave as a start up value, you can prompt for it, you can hard code it. Whatever you like but somehow you must set the N value of the cave.

##Status:

The program will give status to the user in the following format



(Ascii Display of surrounding rooms)

(Description of Room you are in)

(Environment Clues/Description)

[x Points Earned] You are (Weaponless/Armed).

Enter Move (? for help) >

**Ascii Display**


You will show the 8 rooms surrounding you. Use the following ASCII values to represent rooms as such.

* @ - the hero in the middle of the 9 rooms (8 surrounding and the one in the middle which you occupy)
* ? - unexplored room that could be empty, weapon, gold, wumpus or a pit trap
* . - explored/empty room
* # - wall showing the boundary of the cave
* ^ - Entrance to the cave where you can run out
* W - weapon in an explored weapon room that you did not bother to loot which would be odd. You can't beat a Wumpus Unarmed.
* $ - gold in an explored gold room that you did not bother to loot. Not looting this means you did not understand the goal of the game.

Examples:

You are in the upper left corner of the cave.

    ###
    #@?
    #.?

Just left the entrance and started to explore. Hey why did you leave that gold there?

    ^??
    .@$
    .??

You are not having luck finding anything right now

    ###
    .@.
    ...

**Description of Room:**



Examples of how you might describe the rooms. Feel free to customize to your liking or humor. 


Entrance Room -- you see see the entrance here. You wish to run away?

Empty Room -- you see nothing which is something

Pit trap -- aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhhhhhhhhh noooooooooooooooooo *Splat*

Wumpus Room -- Overwhelmed in Stench a Wumpus stands before you ready to eat you.

Gold Room - before you lies the the gold of adventure seekers who feed a Wumpus Recently

Weapon Room - Cast before you in a rock a sword awaits to be looted and name yourself King.


**Environmental Clues/Description:**


This is giving you clues to nearby threats as well as describing any battles if you enter a room with a Wumpus and you are armed.

If next to a pit room you see a message like "Howling Winds Fill the Room"
If next to a Wumpus room you see a message like "A fowl Stench fills the room"
If you enter a room with a wumpus you describe if you kill it or you get eaten based on if you have a weapon or not.
If you enter a pit trap room - have fun describing how one falls before showing the game over.


***

So putting it all together you might see these screen shots

    ###
    #@?
    #.?
    Empty Room - there is nothing here but air.
    You hear howling winds.
    [10 points earned] You are weaponless.
    Enter Move (? for help) >


    ###
    .@.
    ...
    Empty Room - there is nothing here but air.
    [23 points earned] You are armed and dangerous.
    Enter Move (? for help) >


##End of Game Message:

When the game ends due to the conditions display why the game is over. Say the game is over and show the final points.


Examples: 

Say you find a wumpus unarmed.


    A Wumpus attacks you and makes you his lunch.
    ***GAME OVER***
    You scored 24 Points!

Say you find that pit trap:

    You fall to your death. Your screams are heard by no one.
    ***GAME OVER***
    You scored 1 whole point!

Say you exit out of the dungeon


    You exit the Wumpus cave and run to town. People buy you ales as you tell the story of your adventure.
    ***GAME OVER***
    You scored 120 points! Well Played!




#**Notes:**

I have done what I can to layout the challenge with a very large design requirement. There will be potential for holes or missing elements in the design or things I perhaps did not address in the design. Please find a suitable solution that fits your desire and implementation and consider this part of the challenge. However if you wish to ask questions about the design or point out obvious things missing from the design, please comment and I can make adjustments.


Be creative. There are lots of strings for feedback or descriptions. Come up with your own or perhaps find a way to do random strings to keep the game fresh and unique. Add other features or monsters or whatever. This design for the challenge is much like the pirate code - it is just a bunch of guidelines for you to bend to your need and liking.


Remember to add Error messages. If you loot an empty cave or move to a direction towards a wall you must display what happens and then either redisplay the whole status or just the prompt for a move. Up to you to decide.


This hard challenges builds on skills learned in doing easy and intermediate challenges. The difficulty comes from following a larger design than normal and putting it all together to make a very fun game. Have fun and enjoy the challenge!
