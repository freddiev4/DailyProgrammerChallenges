# [](#HardIcon) _(Hard)_: Logo De-compactification

After Wednesday's meeting, the board of executives drew up a list of several thousand logos for their company. Content with their work, they saved the logos in ASCII form (like below) and went home.

    ROAD    
      N B   
      I R   
    NASTILY 
      E T O 
      E I K 
      DISHES
        H   

However, the "Road Aniseed dishes nastily British yoke" company execs forgot to actually save the name of the company associated with each logo. There are several thousand of them, and the employees are too busy with a Halo LAN party to do it manually. You've been assigned to write a program to decompose a logo into the words it is made up of.

You have access to [a word list](https://gist.githubusercontent.com/Quackmatic/512736d51d84277594f2/raw/words) to solve this challenge; every word in the logos will appear in this word list.

# Formal Inputs and Outputs

## Input Specification

You'll be given a number **N**, followed by **N** lines containing the logo. Letters will all be in upper-case, and each line will be the same length (padded out by spaces).

## Output Description

Output a list of all the words in the logo in alphabetical order (in no particular case). All words in the output must be contained within the word list.

# Sample Inputs and Outputs

## Example 1

### Input

    8
    ROAD    
      N B   
      I R   
    NASTILY 
      E T O 
      E I K 
      DISHES
        H   

### Output

    aniseed
    british
    dishes
    nastily
    road
    yoke

## Example 2

    9
       E
       T   D 
       A   N 
     FOURTEEN
       T   D 
       C   I 
       U   V 
       LEKCIN
       F   D    

Note that "fourteen" could be read as "four" or "teen". Your solution must read words greedily and interpret as the longest possible valid word.

### Output

    dividend
    fluctuate
    fourteen
    nickel

## Example 3

### Input

    9
    COATING          
          R     G    
    CARDBOARD   A    
          P   Y R    
         SHEPHERD    
          I   L E    
          CDECLENSION
              O      
              W      

Notice here that "graphic" and "declension" are touching. Your solution must recognise that "cdeclension" isn't a word but "declension" is.

### Output
    
    cardboard
    coating
    declension
    garden
    graphic
    shepherd
    yellow

# Finally

Some elements of this challenge resemble the [Unpacking a Sentence in a Box](/r/dailyprogrammer/comments/322hh0/20150410_challenge_209_hard_unpacking_a_sentence/) challenge. You might want to re-visit your solution to that challenge to pick up some techniques.

Got any cool challenge ideas? Submit them to /r/DailyProgrammer_Ideas!