#Description

As we saw on monday, a "word snake" is a snake made from words.

For instance, take this sequence of words:

`SHENANIGANS SALTY YOUNGSTER ROUND DOUBLET TERABYTE ESSENCE`

Notice that the last letter in each word is the same as the first letter in the next word. In order to make this into a word snake, you can simple snake it across the screen


     SHENANIGANS       DOUBLET
               A       N     E
               L       U     R
               T       O     A
               YOUNGSTER     B
                             Y
                             T
                       ECNESSE

Your task on monday was to take an input word sequence and turn it into a word snake. Your task today is to take an input word snake and turn it into a word sequence. The rules for wod snakes are the same as the previous problem, with one addition:

- The snake starts at the top left corner
- Each word will turn 90 degrees left or right to the previous word
- The snake will not intersect itself
- The snake will be unambiguous

The next letter in the snake's path will always be clear, here's an example of an ambiguous snake:

    CMYE
    HLOG
    IADN
    LPEA
    LALR
    INSO

In this case it's unclear whether snake's inital direction is right or down solving this kind of ambiguous snake would require a dictionary.

Specifically, "unambiguous" means that every letter will only ever have two neighbors, except for the end-points, which will have only one. 

#Formal inputs &amp; outputs

##Input

The input will first be a number specifying how many lines the snake will cover. After that follows the word snake (written in ALL CAPS).

Note that the word-snake will not have any trailing spaces on any line, so you can't assume that every line will be equally long. However, you can assume that no input will be wider than 80 characters. 

##Output

The resulting sequence of words from unraveling the word snake! Each word will be in all caps and each word will be separated by a space.

#Sample inputs &amp; outputs

##Input 1
    
    6
    SNAKE
        A   DUSTY
        T   N   U
        SALSA   M
                M
                YACHTS

##Output 1

    SNAKE EATS SALSA AND DUSTY YUMMY YACHTS

##Input 2

    8
    W    DINOSAUR
    I    E      E
    Z  CAR  Y   A
    A  I    L   C
    R  D    T  OT
    D  R    B  V
    R  O    U  A
    YAWN    SGEL

##Ouput 2

    WIZARDRY YAWN NORDIC CAR RED DINOSAUR REACT TO OVAL LEGS SUBTLY

###Challenge inputs

##Input 1

    8
    NUMEROUS
           Y
    LUXURY M
    O    E B
    B O  A O
    M DAOR L
    Y      I
    SDRATSUC

##Input 2

    10
    R       TIGER
    E       O   E
    S       H   T  SO
    I  GRAPES   U  N
    G  A        R  R
    NULL  GNIHTON  E
          R        T
          A        N
          N        A
          DELIGHTFUL

#Notes

If you have an idea for a problem, head on over to /r/dailyprogrammer_ideas and let us know about it! 

Huge thanks to /u/hutsboR for helping me prepare this challenge, and who did most of this write-up! For his good works he's been rewarded with a gold medal.