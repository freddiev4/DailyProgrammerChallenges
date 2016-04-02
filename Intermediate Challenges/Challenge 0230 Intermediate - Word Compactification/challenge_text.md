# [](#IntermediateIcon) _(Intermediate)_: Word Compactification

Sam is trying to create a logo for his company, but the CEOs are fairly stingy and only allow him a limited number of [metal letter casts](https://en.wikipedia.org/wiki/Movable_type#Typesetting) for the letter head, so as many letters should be re-used in the logo as possible. The CEOs also decided to use every single word that came up in the board meeting for the company name, so there might be a lot of words. Some puzzles such as crosswords work like this, by putting words onto a grid in such a way that words can share letters; in a crossword, this is an element of the puzzle. For example:

           D
       L   N
     FOURTEEN
       F   D
       R   I
       O   V
      ALSATIAN
       O   D
       C

This reduces the total letter count by four, as there are four "crossings". Your challenge today is to take a list of words, and try to find a way to compact or pack the words together in crossword style while reducing the total letter count by as much as possible.

# Formal Inputs and Outputs

## Input Specification

You'll be given a set of words on one line, separated by commas. Your solution should be case insensitive, and treat hyphens and apostrophes as normal letters - you should handle the alphabet, `'` and `-` in words. 

## Output Description

Output the the compactified set of words, along with the number of crossings (ie. the number of letters you saved). Words may be touching, as long as all of the words present in the input are present in the output (the words may travel in any direction, such as bottom-to-top - the company's logo is /r/CrappyDesign material).

**There may be several valid outputs with the same number of crossings. Try to maximise the number of crossings.**

# Sample Inputs and Outputs

## Example 1

### Input

    neat,large,iron

### Output

      NEAT
      O
    LARGE
      I
    
    Crossings: 2

## Example 2

This corresponds to the example in the challenge description.

    colorful,dividend,fourteen,alsatian

### Output

           D
       L   N
     FOURTEEN
       F   D
       R   I
       O   V
      ALSATIAN
       O   D
       C
    
    Crossings: 4

## Example 3

### Input

    graphic,yellow,halberd,cardboard,grass,island,coating

### Output
    
    COATING
          R     G
    CARDBOARD   A
          P   Y R
          HALBERD
          I   L E
          C ISLAND
              O 
              W
    
    Crossings: 7

## Challenge Input

    lightning,water,paper,cuboid,doesn't,raster,glare,parabolic,menagerie

# Finally

With packing challenges like this, randomising the input order may yield better results.

Got any cool challenge ideas? Submit them to /r/DailyProgrammer_Ideas!