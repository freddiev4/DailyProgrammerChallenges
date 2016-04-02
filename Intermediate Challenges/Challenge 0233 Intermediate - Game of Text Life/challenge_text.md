#Description

John Conway's [Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) is a classic game among computer programmers and mathematicians. 

The basic idea is this: the game takes place on an infinite 2D grid of cells. Cells can be either "alive" or "dead". The game evolves in generations, where old cells die out or are born again according to very simple rules. The game can inhibit remarkably complex patterns despite the simplicity of the rules, which is why it's called "Game of Life". It's as if the little cells become living organisms. 

The rules are as follows: 

 * Any cell that is alive and zero or just one living neighbor is dead in the next generation
 * Any cell that is alive and has two or three living neighbors lives happily on to the next generation
 * Any cell that is alive and has four or more neighbors get "smothered" and is dead in the next generation
 * Any cell that is dead and has exactly three neighbors is "born", and is thus alive in the next generation. 

To be clear, a "neighbor" is defined as a cell that's right next another cell, either horizontally, vertically or diagonally.

If something is unclear or you need more information, I highly recommend reading [Game of Life's Wikipedia entry](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) for a more thorough description of the rules. 

Usually, "alive" cells are filled in and black and "dead" cells are just white. In ASCII you could represent alive cells with asterisks and dead cells with spaces. So, if one generation of the Game of Life looks like this

     **
    **
     *

Then the next generation will look like this: 

    ***
    * 
    ** 

Poor little middle dude has died, but a bunch of new ones have been born. 

There is, however, no law that says that the alive cells *have* to be represented by asterisks. It could be any text, really. So then we could have this first generation: 

     He
    ll
     o

Which leads to this generation

    lHe
    l 
    lo

Notice that the character that represents newly born cells are selected randomly from the three neighbors that spawned it.
Your challenge today is to implement this variation of the Game of Life. 

#Formal inputs & outputs

Since there's a random component to this challenge (i.e. which character a newly born cell will be, your solutions obviously don't have to match these character for character)

##Inputs

You will receive a number of lines which you will play the Game of Life on.

##Outputs

You will output the next generation of the "textual" Game of Life according to the rules laid up above.

There is one more rule that deserves mention: in normal Game of Life, you play on an infinite grid. Here, the size of the grid is the smallest rectangle that can fit the input. No cells can be born outside of it. 

#Sample inputs
##Input 1

     He
    ll
     o

##Output 1

    lHe
    l 
    lo

##Input 2

    What? 
    This is exceedingly silly. 
    
    Really, we would like some ACTUAL programming challenges around here. 

##Output 2

    W   ??   exceeding   sill
    T    i   xceedingl   illy
                              . ACTU   programmi   challeng   arou   her
     eally      oul   ik   om   CTUA   rogrammin   hallenge   roun   ere



#Challenge inputs

The challenge outputs will perhaps be a bit long, so consider using a service like [hastebin](http://hastebin.com) or  [gist](http://gist.github.com) to share your results instead of pasting them into your comments. 

##Challenge 1

The full text of this post (either the markdown source, or just copy the text itself)

##Challenge 2

The source code for your own program. If you use tabs instead of spaces to indent your code, you can treat those like a single space, or you can treat them like four or eight spaces, whichever it is you use when you write your code. 

#Bonus

Apply your program over and over again to your source code, so that you get an animated game of life (maybe make a plugin that does this for your favorite editor?) and upload a video of it. It can be an animated gif, a webm, a giphy, a youtube, or whatever it is the kids are using nowadays (if you want to make a Vine of your code being destroyed by the Game of Life, don't let me stop you). 


#Notes

As always, if you have a challenge suggestion, head on over to /r/dailyprogrammer_ideas and suggest it. 

By the way, I've gotten several comments saying that the easy problem from this week was a bit too difficult. Mea culpa, sometimes you misjudge the difficulty of a problem when you design it. I do really appreciate it when readers point out whether they think a problem is too difficult or too easy for the difficulty level, as long as you do so in a pleasant manner. Constructive feedback is always welcome. :)