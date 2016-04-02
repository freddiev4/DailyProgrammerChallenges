#Description:

The study of balance is interesting. Take for example a forest. Forests are very complex eco-systems with lots of things happening. For this challenge we will
simulate a virtual forest and watch over simulated time the effects of a forest. We will see trees grow and be harvested. We will see the impact of 
industry upon the forest and watch as the wild life "fights" back.


For this simulated forest we will be dealing with 3 aspects.


* Trees which can be a Sapling, Tree or Elder Tree.
* Lumberjacks (He chops down down trees, he eats his lunch and goes to the Lava-try)
* Bears (He maws the lumberjacks who smells like pancakes)

##Cycle of time:

The simulation will simulate by months. You will progessive forward in time with a "tick". Each "tick" represents a month. Every 12 "ticks" represents a year.
Our forest will change and be in constant change. We will record the progress of our forest and analyze what happens to it.

##Forest:

The forest will be a two dimensional forest. We will require an input of N to represent the size of the forest in a grid that is N x N in size.
At each location you can hold Trees, Bears or Lumberjacks. They can occupy the same spot but often events occur when they occupy the same spot.

Our forest will be spawned randomly based on the size. For example if your value of N = 10. You will have a 10 by 10 forest and 100 spots.

    10% of the Forest will hold a Lumberjack in 10 random spots. (using our 100 spot forest this should be 10 lumberjacks)
    50% of the Forest will hold Trees (Trees can be one of 3 kinds and will start off as the middle one of "Tree") in random spots.
     2% of the Forest will hold Bears.

How you get the size of the forest is up to you. Either users enter it in, read it from a file, pass by argument or hard coded. Your choice. But you have
to spawn the initial forest with the above percentages. I would recommend keeping N like 5 or higher. Small Forests are not much fun.

##Events:

During the simulation there will be events. The events occur based on some logic which I will explain below. The events essentially are the spawning of 
new Trees, Lumberjacks, Bears or the decay of Trees, Lumberjacks and Bears. I will detail the events below in each description of the 3 elements of our forest.

## Trees:

Every month a Tree has a 10% chance to spawn a new "Sapling". In a random open space adjacent to a Tree you have a 10% chance to create a "Sapling". 
For example a Tree in the middle of the forest has 8 other spots around it. One of these if they do not have a type of Tree in it will create a "Sapling".


After 12 months of being in existence a "Sapling" will be upgrade to a "Tree". A "Sapling" cannot spawn other trees until it has matured into a "Tree".


Once a "Sapling" becomes a tree it can spawn other new "Saplings". At this point once a "Sapling" matures into a "Tree" it exists and matures. When a "Tree"
has been around for 120 months (10 years) it will become an "Elder Tree".


Elder Trees have a 20% chance to spawn a new "Sapling" instead of 10%.

If there are no open adjacent spots to a Tree or Elder Tree it will not spawn any new Trees.


## Lumberjacks:

They cut down trees, they skip and jump they like to press wild flowers. 

Lumberjacks each month will wander. They will move up to 3 times to a randomly picked spot that is adjacent in any direction. So for example a Lumberjack in the middle of your grid has
8 spots to move to. He will wander to a random spot. Then again. And finally for a third time.

When the lumberjack moves if he encounters a Tree (not a sapling) he will stop and his wandering for that month comes to an end. 
He will then harvest the Tree for lumber. Remove the tree. Gain 1 piece of lumber. Lumberjacks will not harvest "Sapling". They will harvest an Elder Tree. 
Elder Trees are worth 2 pieces of lumber.

Every 12 months the amount of lumber harvested is compared to the number of lumberjacks in the forest. If the lumber collected equals or exceeds the amount of lumberjacks
in the forest a new lumberjack is hired and randomly spawned in the forest. Actually a math formula is used to determine if we hire 1 or many lumberjacks. We hire a number
of new lumberjacks based on lumber gathered. Let us say you have 10 lumberjacks. If you harvest 10-19 pieces of lumber you would hire 1 lumberjack. But if you harvest 20-29
pieces of lumber you would hire 2 lumberjacks. If you harvest 30-39 you would gain 3 lumberjacks. And so forth.

However if after a 12 month span the amount of lumber collected is below the number of lumberjacks then a lumberjack is let go to save money and 1 random lumberjack
is removed from the forest. However you will never reduce your Lumberjack labor force below 0.

## Bears:

They wander the forest much like a lumberjack. Instead of 3 spaces a Bear will roam up to 5 spaces. If a bear comes across a Lumberjack he will stop his wandering
for the month. (For example after 2 moves the bear lands on a space with a lumberjack he will not make any more moves for this month)

Lumberjacks smell like pancakes. Bears love pancakes. Therefore the Bear will unfortunately maw and hurt the lumberjack. The lumberjack will be removed from the 
forest (He will go home and shop on wednesdays and have buttered scones for tea).

We will track this as a "Maw" accident. During the course of 12 months if there 0 "Maw" accidents then the Bear population will increase by 1. 
If however there are any "Maw" accidents the Lumberjacks will hire a Zoo to trap and take a Bear away. Remove 1 random Bear. Note that if your Bear population reaches
0 bears then there will be no "Maw" accidents in the next year and so you will spawn 1 new Bear next year.

If there is only 1 lumberjack in the forest and he gets Maw'd. He will be sent home. But a new one will be hired immediately and respawned  somewhere else in the forest.
The lumberjack population will not drop below 1.


## Time:

The simulation occurs for 4800 months (400 years). Or until the following condition occur.

* You have 0 Trees left in the forest. So no Saplings, Trees or Elder Trees exist.


#Output:

Every month you will print out a log of spawn or decay events. If nothing happens then nothing is logged.


Example:

    Month [0001]: [3] pieces of lumber harvested by Lumberjacks.
    Month [0001]: [10] new Saplings Created.
    Month [0002]: [2] pieces of lumber harvested by Lumberjacks.
    Month [0002]: [9] new Saplings Created.
    Month [0003]: [1] Lumberjack was Maw'd by a bear.
	Month [0120]: [10] Trees become Elder Trees

Every year you will print out a log of events for yearly events:

    Year [001]: Forest has 30 Trees, 20 Saplings, 1 Elder Tree, 9 Lumberjacks and 2 Bears.
	Year [001]: 1 Bear captured by Zoo.
	Year [001]: 9 pieces of lumber harvested 1 new Lumberjack hired.
	Year [002]: Forest has 50 Trees, 25 Saplings, 2 Elder Tree, 10 Lumberjacks and 1 Bears.
	Year [002]: 1 new Bear added.
	Year [003]: Forest has 100 Trees, 99 Saplings, 10 Elder Tree, 1 Lumberjacks, and 0 Bears.
	Year [003]: 1 new Bear added.
	Year [003]: 3 Pieces of lumber harvested 3 new Lumberjacks hired.
	
	
#Optional Output 1:

At the end of the simulation you can bring out an ASCII graph showing the yearly populations of Bears, Trees, Lumberjacks and open space (BTL Graph)
I recommend 50 Spots and each spot = 2%. 

Example:

    year 1: [BTTTTTTTTTTTTTTTTTTTTLLL______________________]  
    year 2: [BBTTTTTTTTTTTTTTTTTTTLLLL_____________________]
    year 3: [BTTTTTTTLLLLLLLL______________________________]
    year 4: [BBBTTTTTTTTTTTTTTTTTLLLLLLLL__________________]

So for year 1 we had 2% Bears, 40% Trees (Saplings+Trees+Elder Trees), 6% Lumberjacks and the rest was open space
Each spot is 2%. We have 50 characters. So 100%. We round "up" for figuring out how many to display and just use "_" as filler at the end for open space.

#Optional Output 2:

You can over the course of the simulation output the "Map" in ASCII or any other form you wish. Use like "B" For bear "S" for sapling "T" for tree "E" for Elder Tree, "L" For lumberjack and "." for empty.
Some people can use "animated" ascii via like a ncurses library and show in realtime what is happening. (logs go to a file or not shown) Etc. Ultimately be creative
here in how you might want to show over time the impact of how the forest is changing.

Or you can just print out the forest every year or every 10 years.

#Ackward events/issues/etc:

When bears and lumberjacks roam if the random spot already has a bear or lumberjack in it a new spot is picked. If the 2nd attempt at a spot still has a same kind of element then it will stop roaming for the month. More or less we don't want more than 1 lumberjacks or bears in the same spot.


Bears can roam into a Tree spot. Nothing happens. If a bear roams into a lumberjack he maws him. If a lumberjack roams into a Bear spot he will get maw'd by the bear. 


#Spawn/Decay/Removal Rates:

You might encounter issues with these. Feel free to tweak as needed. The challenge is more a test of design. Picking/playing with and testing these rates is part of design work. It might look good on paper but when tested it might not work without some minor tweaks.