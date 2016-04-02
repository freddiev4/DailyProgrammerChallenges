#Description

A word snake is (unsurprisingly) a snake made up of a sequence of words. 

For instance, take this sequence of words: 

    SHENANIGANS SALTY YOUNGSTER ROUND DOUBLET TERABYTE ESSENCE

Notice that the last letter in each word is the same as the first letter in the next word. In order to make this into a word snake, you simply snake it across the screen

    SHENANIGANS        
              A        
              L        
              T        
              YOUNGSTER
                      O
                      U
                      N
                TELBUOD
                E      
                R      
                A      
                B      
                Y      
                T      
                ESSENCE

Your task today is to take an input word sequence and turn it into a word snake. Here are the rules for the snake:

 * It has to start in the top left corner
 * Each word has to turn 90 degrees left or right to the previous word
 * The snake can't intersect itself 

Other than that, you're free to decide how the snake should "snake around". If you want to make it easy for yourself and simply have it alternate between going right and going down, that's perfectly fine. If you want to make more elaborate shapes, that's fine too. 

#Formal inputs &amp; outputs

##Input

The input will be a single line of words (written in ALL CAPS). The last letter of each word will be the first letter in the next.

##Output

Your word snake! Make it look however you like, as long as it follows the rules.

#Sample inputs &amp; outputs

There are of course many possible outputs for each inputs, these just show a sample that follows the rules

##Input 1

    SHENANIGANS SALTY YOUNGSTER ROUND DOUBLET TERABYTE ESSENCE

##Output 1

    SHENANIGANS       DOUBLET
              A       N     E
              L       U     R
              T       O     A
              YOUNGSTER     B
                            Y
                            T
                            ESSENCE

##Input 2

    DELOREAN NEUTER RAMSHACKLE EAR RUMP PALINDROME EXEMPLARY YARD

##Output 2

    D                                       
    E                                       
    L                                       
    O                                       
    R                                       
    E            DRAY                       
    A               R                           
    NEUTER          A                           
         A          L                           
         M          P                           
         S          M                           
         H          E       
         A          X
         C PALINDROME
         K M
         L U
         EAR

#Challenge inputs

##Input 1

    CAN NINCOMPOOP PANTS SCRIMSHAW WASTELAND DIRK KOMBAT TEMP PLUNGE ESTER REGRET TOMBOY

##Input 2

    NICKEL LEDERHOSEN NARCOTRAFFICANTE EAT TO OATS SOUP PAST TELEMARKETER RUST THINGAMAJIG GROSS SALTPETER REISSUE ELEPHANTITIS

#Notes

If you have an idea for a problem, head on over to /r/dailyprogrammer_ideas and let us know about it!

By the way, I've set the sorting on this post to default to "new", so that late-comers have a chance of getting their solutions seen. If you wish to see the top comments, you can switch it back just beneath this text. If you see a newcomer who wants feedback, feel free to provide it!