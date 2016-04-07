You are an amateur computer scientist working at a mountain ranch for a summer retreat.  This ranch
consists of very narrow trails winding up and down a small mountain.  These trails form a series of interconnections
between various ranch buildings peppering the mountain.  Because the trails are so narrow, only one person or vehicle can be occupying a given section
of trail at once.  [Here is a map of the ranch.](http://i.imgur.com/ovGcc.jpg) ([original image](http://www.flickr.com/photos/acb/4290387040/sizes/l/) used with permission under cc-by-sa-nd)

All of a sudden a building at Sunset Peak on the far outskirts of the ranch catches fire from some honeymooners leaving the oven on!  
If the fire isn't put out quickly, a forest fire could start!

Although only base camp and lakeside station have access to running water, all the camps have an (for this purpose bottomless) [water buffalo](http://olive-drab.com/idphoto/id_photos_m149.php)
permenantly parked at each building to deposit water in.

A convoy of 8 fast humans travels 3.5 miles per hour and can carry 4 gallons of water for each person.

A truck can travel at an average speed of 10 miles per hour (country mountain roads) and can carry 100 gallons of water.

A train car can travel at an average speed of 30 miles per hour and can carry 250 gallons of water.

What is the maximum gallons of water per hour that can get to Sunset Peak to put out the fire?

EDIT:  To save you guys some busywork, I made a datafile out of the image.  Assigning each location to a numeric code like so:

	0 Basecamp
	1 Lakeside Lodge
	2 Logging Camp
	3 Radio Tower
	4 RV Park
	5 Creekfront Lodge
	6 North Camp A
	7 Mt. Greensparrow
	8 Aviary
	9 Greers Drop
	10 North Camp B
	11 Ranger Valley
	12 Old Mine
	13 Lookout Lodge
	14 Sunset Peak

I then was able to list the bidirectional graph as a list of connections like "node1 node2 weight type"
 
	1 2 8.6 R
	0 3 8.7 R
	4 5 11.3 R
	11 12 7.7 R
	12 14 7.7 R
	0 1 0.9 F
	2 3 1.1 F
	3 5 5.1 F
	4 8 7.5 F
	9 12 7.9 F
	7 11 5.6 F
	6 11 6.4 F
	11 13 3.9 F
	5 6 2.0 F
	0 4 8.3 T
	3 5 5.2 T
	4 9 7.6 T
	8 9 4.8 T
	7 8 5.2 T
	6 7 5.5 T
	6 10 7.1 T
	10 13 2.4 T
	10 11 3.4 T
	11 14 7.9 T
	13 14 4.5 T

This should save you some time implementing stuff.


HARD BONUS:  Imagine now that you have a limit on people and trucks (trains are stuck to their track, so those are fine).  
You only have 5 trucks and 50 people.  A truck takes two people to drive (safety in pairs!), a train requires 3 people to operate, (engineer, coalman, radioman)
and people cannot legally travel on foot in groups of less than 2.  How will you allocate people to get there fastest?  You are allowed to have people do multiple things at different times, like 
hike to a spot and then drive a truck if you want to make your answer super complicated.