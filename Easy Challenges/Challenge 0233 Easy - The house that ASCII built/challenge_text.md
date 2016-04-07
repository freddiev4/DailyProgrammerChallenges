#Description

Christopher has always dreamed of living in a really fancy ASCII house, and he's finally decided to make it happen. He works in a hedgefund and has made a lot of money in the Unicode markets (buying cheap Cyrillic code-points and selling them to Russia), and he feels like he's finally able to afford it. 

He hires Melinda the ASCII architect, who designs and delivers the following asterisk blue-print:

       *
      ***
    ******

To make this beautiful drawing into reality, he hires Lilly the ASCII contractor to build it. It takes a few months, but finally Lilly delivers this beautiful creation: 

                  A
                 / \
        A     A +---+ A
       / \   / \|   |/ \
      /   \ +---+   +---+ A
     /     \| o         |/ \
    +-------+           +---+
    |     o      | |      o | 
    +-----------------------+ 

In case it isn't clear: the `o`'s are windows, the `A`'s are the tops of the roof, and the `| |` is a door. Notice that each asterisk has been transformed into a box that is 5 characters wide and 3 characters tall (and notice that two neighboring boxes share an edge). 

Today, you are to step into the shoes of Lilly the ASCII contractor! You are to be given an ASCII blueprint of a house, which you will then turn in to glorious reality.

#Formal inputs &amp; outputs
##Inputs

On the first line, you will recieve a number telling you how many lines the blueprint will occupy. 

After that, you will recieve some number of lines containing the blueprint. Each line is guaranteed to be less than 30 characters long. The only two characters allowed in the lines are spaces and asterisks, and there are a two assumptions you can make regarding the asterisks: 

 * The bottom line of asterisks (i.e. the "bottom floor"), will be one continous line of asterisks. 
 * All asterisks on lines except for the bottom line are guaranteed to have an asterisk directly below it. That is, there are no "free hanging" asterisks. So no balconies. 

##Outputs

You will draw that the input asterisks describe. 

There are four essential features of the ASCII house: 

 * The outline: the basic outline of the house. The outline is just the shape you get by replacing the asterisks by 3x5 boxes made of `+`'s, `-`'s and `|`'s. (Edit: to make it more clear what I mean with "outline", [read this comment](https://www.reddit.com/r/dailyprogrammer/comments/3ltee2/20150921_challenge_233_easy_the_house_that_ascii/cv93tdz))
 * The door: One box has a door on it that looks like `| |`. The door should be placed in a random box on the ground floor. 
 * The windows: the windows consist of a single `o` in the middle of the box. If a box doesn't have a door on it, there should be a 50% random chance of having a window on it. 
 * The roofs: Each asterisk that has no asterisk above it should have a roof over it. The roof is made of `/`, `\` and `A` characters. If there are two or more boxes next to each other which don't have any boxes above them, they should share a wider roof. In other words, if you have three boxes next to each other without any boxes on top, then this is right: 

     
              A 
             / \ 
            /   \ 
           /     \  
          /       \ 
         /         \ 
        +-----------+
        |           | 
        +-----------+
      

 And this is wrong:

          A   A   A
         / \ / \ / \
        +-----------+
        |           | 
        +-----------+


**You are given large leeway in which of these features you choose to implement**. At a minimum, you should make your program draw the outline of the house according to the blueprint, but if you don't want to implement the windows, doors and roofs, that's fine. 

#Sample inputs and outputs

Given that there's a random component in this challenge (where the doors and windows are located), your outputs obviously don't have to match these character-by-charcter. 

##Input 1

    3
       *
      ***
    ******

##Output 1
                  A
                 / \
        A     A +---+ A
       / \   / \|   |/ \
      /   \ +---+   +---+ A
     /     \| o         |/ \
    +-------+           +---+
    |     o      | |      o | 
    +-----------------------+ 

##Input 2

    7
     *
    ***
    ***
    ***
    ***
    ***
    ***

##Output 2

          A
         / \
      A +---+ A
     / \|   |/ \
    +---+   +---+
    |     o     |
    |           |
    | o       o |
    |           |
    |     o   o |
    |           |
    | o   o     |
    |           |
    | o       o |
    |           |
    |    | |    |
    +-----------+

(it's ASCII Empire State Building!)


#Challenge inputs

##Input 1

    3 
        **
    *** **
    ******

##Input 2

(Edit: I just realized that the output for this challenge is a bit too wide to be able to fit in a nicely formatted reddit comment, so feel free to use a service like [gist](http://gist.github.com) or [hastebin](http://hastebin.com) if you want to show off your results)

    7
    ***                    ***
    ***     **  ***  **    ***
    ***   ***************  ***
    ***   ***************  ***
    ***   ***************  ***
    **************************
    **************************

#Notes

If you have a suggestion for a problem, head on over to /r/dailyprogrammer_ideas and suggest them!