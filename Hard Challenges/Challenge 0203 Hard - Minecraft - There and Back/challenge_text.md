#Description:

In the popular game Minecraft (http://en.wikipedia.org/wiki/Minecraft) you navigate a 3-D block world. Each block can be various types. You gather blocks to place blocks. More or less. 

Part of the challenge is navigating this world such that you have to mine down and be able to get back up. So for this challenge we will be throwing at you some combined challenges to solve. Users can select which level of involvement. If you feel you have time or ability solve which challenges you can.

The 3 challenges to solve (Easy, Intermediate and Hard)

* Generate a 3-D Minecraft Map with a fixed starting point and fixed point for the goal.
* Navigate the map to find a *shortest* and *safe*path down and back again. (if possible)
* Generate a 3-D map with a fixed starting point but a random end point. You must develop an agent program to seek out the unknown goal safely and return.

#The Map

To generate a world we are going to keep our minecraft world simple. Each block can be the following:

* Air - Basically nothing
* Dirt - Block which can be removed
* Sand - Block which can be removed but obeys differently than dirt
* Lava - Dangerous block which we have to avoid.
*Diamond block - Our goal block we wish to mine that block and leave air.

##Air Block

Our player can occupy an Air block. If they are standing on top of an air block they will drop down to the block below the air block. As you can imagine if it is another air block they keep dropping down until they hit the bottom of the map.

## Dirt Block

Our player can remove any dirt block adjacent to the player that is not diagonal. So if you image 3x3x3 blocks. And if the player is in the exact middle they can only remove dirt blocks up, down and the 4 blocks around him. The corners could not be removed because it would be diagonal.

A removed dirt block becomes air.

## Sand Block

A sand block works like a dirt block. It follows our gravity. If there is an air block below a sand block it will fall (leaving an air block where it was) until the block below the sand block is not an air block. After generating a map you will have to adjust the map to have any sand fall into place.

##Lava Block

A Lava block if you touch it you die. Not good. Lava as a liquid can flow. To keep it simple the rule for lava is if you have air below a lava block the block below lava becomes lava. It will keep becoming lava until the block below lava is not air. Think of it as a Sand Block but it does not "fall" and leave behind air blocks but "flows"

## Hero

The hero occupies only air blocks. He cannot be inside any other block. To move he will be removing blocks. He can remove Dirt and sand blocks trying to get to the diamond block. He can only remove blocks next to him but not diagonal. Once a block is removed or mined it becomes air. He cannot mine or move into lava. His goal is to mine the Diamond block.

#Easy Challenge:

Generate a 100x100x10 minecraft world. Once it generates you must act on it the laws defined above (sand and lava mostly) 

Think of the world as x and y coordinates define the 2-D surface. Then you have a z coordinate to shift up or down a "plane". The top x-y surface of blocks will always be all air. 
The block at 0, 0, 1 will always be dirt. Your Hero will start and occupy at 0, 0, 0. 
The only diamond block in this world is at 99,99,9 . All the other blocks in the world will be randomly determined to be Air, Sand, Dirt or Lava.

#Navigation:

For the intermediate challenge you have to navigate the world. For the hero to move you can move to any air block. Again if they move to an air block if the block below it is not air they will move "down" automatically by "Falling" until they are above a non-air block. If the block they stand on is lava they die. They can be next to lava but never on top of lava as they will fall into the liquid and die.(Note for those who play mine craft we are making the liquid lava more simple. I realize Lava flows over blocks but we aren't going that complex)

Moving down is pretty easy. You just move your hero until they keep falling. The problem is going back up. Your hero can only "jump" if the blocks allow it. Example.

* D = safe block like dirt, sand or diamond to be on top of
* A = Air - nothing
* H = Hero occupying a block which is an air block

Imagine these blocks since the hero wants to move up to be on top of the blocks:

     AAA
     DAA
     DDH

He has to move up. He can only move up by jumping up. Since the block above him is air and then the block above the block next to him has air above it and is next to the block he jumps up to he can safely move on top of that block to be as follows.

     AAA
     DHA
     DDA

He can continue to jump and move over as he can jump up 1 block and over 1 safely always.

     HAA
     DAA
     DDA

The problem is if he jumps up into an air block but the adjacent blocks to that block are not air over a safe block he cannot jump.

     AAA
     DAD
     DHD
     DDD

The above is a pit. The poor hero jumps up into the air block above him but the blocks next to that air block do not allow him to move. 

Keep in mind I am showing you 2-D examples. Our world will be 3-D. If he can move up 1 block into air and any of the 4 blocks next to that adjacent not diagonal are air he can move safely into that air. 

You cannot jump also if the block of air you will occupy is on top of a lava block (you die)

(Note in real mine craft your hero takes up 2 blocks height. We are making this more simple in that you will occupy 1 block)

Keeping all this in mine now you need to find the shortest and safest path to mine the diamond and get back. You start by occupying 0, 0, 0 which is air. Below it at 0, 0, 1 is a dirt block. So you are always safe. The diamond block is 99,99, 9 you want to move such that you can mine dirt or sand to create air to make a path to occupy 99,99,9 then you need to get back.

The key here is getting back. You cannot simply mine down You will create a "pit" that you cannot get back. If you cannot get a path to the diamond and back up to 0,0,0 you are unable to do the idea of the challenge of getting there and back. So when you make your path you will have to probably mine down and then mine over creating a "step" that allows you to "jump" back up to navigate safely.

##Lava and Sand Danger

Everytime you "mine" a sand or dirt block you make it an air block. You will have to check the case if sand or lava is above it. If Sand was above that block then the sand block will fall down until the block below is no longer air. If it was your goal to move into that space you cannot because you have to mine it again. Keep in mind there could be a chain reaction of sand. If you can a Sand Above a sand. The bottom sand drops down to an Air. It leaves behind an air and guess what that sand above that sand will drop down as well.

Lava drops down as well but it doesn't leave behind air, it flows (thus growing) If the hero mines the block above the lava will fall into his air spot and kill him. So don't do that.

If sand wants to fall on the air spot occupied by the hero it will kill him. So don't mine up if the block above that is sand (Note in minecraft you get pushed to an adjacent space so to keep it simple I am saying death but if you want to do a "push" here then go for it.)

#Intermediate level challenge:

Find the shortest and safe path down that lets you mine blocks to the diamond and then let you move back to the starting point following the above rules of jumping up and mining. 

#Hard level challenge:

Generate a random map as always. The only difference from the easy generation is that the map will randomly place the 1 diamond block. The hero agent will seek out this diamond to get it. The hero also can only see blocks next to him. He will avoid moving down into air that has him falling more than 5 blocks in height (we didn't worry about this in intermediate as we had to leave a path back and that would mean he couldn't get back)
The hero will only remember or know about blocks he has been adjacent to. If for example he removes a dirt block above him. He does not know the block above that which is lava or sand and it kills him. However if he was adjacent to that block above the block he wants to mine he knows it will be sand or lava and he will not choose to mine it to seek out the diamond. 

#Very Hard Challenge:

Do the hard challenge a path to the random diamond then find another path (or same path if safe) to get back to 0,0,0. If the first path was not always safe then the agent will try to navigate back to his starting spot if possible or until he dies.

#Questions:

This is a very long winded challenge. I will no doubt miss something. I hope you see the intent of the challenge and can address any missing element I did not cover. If you think it is important enough to bring up - go for it - share with all or ask and I will do what I can to answer. Sometimes it is hard to come up with air tight descriptions that cover ALL basis. In some cases the design of how to handle it is left to you to solve however you feel you want to solve it. Have patience with the challenge and see the intent. Thanks!


#FAQ:

* Failed maps seem to be common with pure random. If you wish to weight what is created to increase our hero's chances I would say go for it.

* No jump and removing blocks.
* No Placing blocks. We only remove. 

#Co-Credit:

Thanks to /u/Godspiral. His post of this idea http://pv.reddit.com/r/dailyprogrammer_ideas/comments/299qci/intermediate_generate_a_simple_minecraft_world/ - helped shape this challenge.