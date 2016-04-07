# Description

You run a business where you sell doohickies, and business is booming. You're customers are all local, but you're just getting off the ground and you don't have a large fleet of trucks, just one driver. Your truck has a finite capacity, and you have to keep costs down as you make deliveries - minimize milage, maximize deliveries, etc. That's where today's challenge program comes in. 

As you make delivery runs, your truck will run out of enough doohickies and so you have to return to the depot and restock it. Assume that you refill the truck to its full capacity on visiting the depot. You may visit them in any order but must visit them all and satisfy all orders. Finally, assume the truck has an infinite energy source, so don't worry about refueling.

# Input Description

You'll be given a line with an integer *N*, which tells you how many doohickies your truck can hold, and a two-tuple of coordinates (x & y) where the doohickie depot is. Then you'll be given a line with another single integer *M*, which tells you how many customers to read. Each customer line (of which there are *M*) will be how many units they want and then a two-tuple telling you the x,y coordinated where the customer is located. 

# Output Description

Your program should emit the sequence of stops you need to make, including depot stops, that *minimizes* the distance driven. You must deliver enough units for every customer when you stop! No customer will ask for more than *N* doohickies (your truck's capacity), and you *should* expect to travel from one customer to the next without stopping at the depot if you can deliver enough units at once. 

# Challenge Input

	40 (20,20)
	12
	10 (20,8)
	15 (31,20)
	18 (13,21)
	17 (30,20)
	3 (20,10)
	5 (11,29)
	9 (28,12)
	4 (14,14)
	6 (32,8)
    12 (1,1)
    18 (3,32)
    23 (5,5)
