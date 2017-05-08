**Description**

Our hero is trapped in a maze once again. This time it's worse: There's mud up to our hero's knees, and there are monsters in the maze!
You must find a path so our hero can savely escape!

**Input**

Our input is an ASCII-map of a maze. The map uses the following characters:

'#' for wall - Our hero may not move here

' ' for empty space - Our hero may move here,  but only vertically or horizontally (not diagonally). Moving here costs our hero 1HP (health point) because of mud.

'm' for monster - Our hero may move here, but only vertically or horizontally (not diagonally). Moving here costs our hero 11HP because of mud and a monster.

'S' this is where our hero is right now, the start.

'G' this is where our hero wishes to go, the goal, you may move here vertically or horizontally, costing 1HP. Your route should end here.

**Output**

The same as the input, but mark the route which costs the least amount of HP with '*', as well as the cost of the route.

**Example**

input:

    ######
    #S  m#
    #m## #
    # m G#
    ######

output:

    ######
    #S***#
    #m##*#
    # m G#
    ######
    Cost: 15HP

**Challenge**

[Input](https://gist.githubusercontent.com/Wysaard/e3699bc26149d2b575c5/raw/a493af3066422cb3673182d969b36a58cf653cf5/data.in) 

Or possibly, as intermediate challenge:

[Input](https://gist.githubusercontent.com/Wysaard/2820f86e9ff0ddfb5627/raw/572b6e0fbf821d5809f520a6d4e50c8841b38169/intermediate.in)

**Note**

You may use the fact that this maze is 201*201, (the intermediate maze is 25x25) either by putting it at the top of the input file or hardcoding it. The maze may contain loops (this is intended).


#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas 

PS: Sorry about the intermediate. My account was locked...