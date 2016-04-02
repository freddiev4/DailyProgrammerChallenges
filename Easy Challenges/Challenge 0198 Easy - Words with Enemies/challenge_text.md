#Description:

I had a dream a few weeks back that I thought would be a good challenge. I woke up early and quickly typed up a text description so I wouldn't forget (Seriously, it was about 5am and when I explained it to my wife she just laughed at me)

Okay so there is a valley. On each side you got cannons. They are firing words at each other. In the middle of the valley the words would make contact and explode. Similar letters from each word would cancel out. But the left over unique letters from each word would fall to the valley and slowly fill it up.


So your challenge is to come up with the code given two words you eliminate letters in common at a ratio of 1 for 1 and produce a set of letters that are left over from each word after colliding in mid air. Which ever side has the most letters left over "wins". If each side donates an equal amount of letters it is a "tie".


#Examples:

     hat cat

both have an "a" and a "t". They will explode and cancel each other out so you get an "h" and a "c" left and so the answer will be "hc" that falls to the valley. Each side donates 1 letter so a "tie"

     miss hiss

both have an "i" and "s" and a 2nd "s" so the "m" and "h" falls into the valley below. Again each side donates a letter so a "tie"

     because cause

one word "cause" is in the bigger word "because" and so all those letters cancel out. "be" is donated from the left side. Left side "wins" 2 letters to 0 letters donated.

     hello below

an "e" "l" "o" cancel out. The left side donates "hl" and the right side donates "bw". Again a tie. Notice that hello has two "l" and below only had the one "l" so only 1 "l" in hello is cancelled out and not both. It has to be a 1 letter for 1 letter. It is not a 1 letter for all letters relationship.

All words will be lower case. They will be in the set [a-z] 

#Input:

Two words ordered from which side of the valley they come from:

     <left side word> <right side word>

#Output:

List the extra letters left over after they collide and explode in mid air and determine which side wins or if it was a tie. The design of the output I leave it for you to design and create.

#Challenge inputs:

     because cause
     hello below
     hit miss
     rekt pwn
     combo jumbo
     critical optical
     isoenzyme apoenzyme
     tribesman brainstem
     blames nimble
     yakuza wizard
     longbow blowup
