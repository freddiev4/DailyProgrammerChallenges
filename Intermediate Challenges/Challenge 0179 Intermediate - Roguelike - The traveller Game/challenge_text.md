#Description:

So I was fooling around once with an idea to make a fun Rogue like game. 
If you do not know what a Rogue Like is check out [Wikipedia Article] (http://en.wikipedia.org/wiki/Roguelike) on what it is about.

I got this really weak start at just trying to generate a more graphical approach than ASCII text. If you want to see my attempt. Check out my incomplete project [FORGE] (http://coderd00d.com/Forge/index.html)

For this challenge you will have to develop a character moving in a rogue like environment. So the design requirements.

* 1 Hero character who moves up/down/left/right in a box map.
* Map must have boundary elements to contain it -- Walls/Water/Moutains/Whatever you come up with
* Hero does not have to be a person. Could be a spaceship/sea creature/whatever - Just has to move up/down/left/right on a 2-D map
* Map has to be 20x20. The boundary are some element which prevents passage like a wall, water or blackholes. Whatever fits your theme.
* Your hero has 100 movement points. Each time they move up/down/left/right they lose 1 movement points. When they reach 0 movement points the game ends.
* Random elements are generated in the room. Gold. Treasure. Plants. Towns. Caves. Whatever. When the hero reaches that point they score a point. You must have 100 random elements.
* At the end of the game when your hero is out of movement. The score is based on how many elements you are able to move to. The higher the score the better.
* Hero starts either in a fixed room spot or random spot. I leave it to you to decide.

#input:

Some keyboard/other method for moving a hero up/down/left/right and way to end the game like Q or Esc or whatever.

#output:

The 20x20 map with the hero updating if you can with moves. Show how much movement points you have and score.

At the end of the game show some final score box. Good luck and have fun.

#Example:

ASCII Map might look like this. (This is not 20x20 but yours will be 20x20) 

* % = Wall
* $ = Random element
* @ = the hero

A simple dungeon.


     %%%%%%%%%%
     %..$.....%
     %......$.%
     %...@....%
     %....$...%
     %.$......%
     %%%%%%%%%%
     Move: 100
     Score: 0

#Creative Challenge:

This is a creative challenge. You can use ASCII graphics or bmp graphics or more. You can add more elements to this. But regardless have fun trying to make this challenge work for you.

