
# Description

Our robot has been deployed on an infinite plane at position (0, 0) facing north. He's programmed to *indefinitely* execute a command string. Right now he only knows three commands

* S - Step in the direction he's currently facing
* R - Turn right (90 degrees)
* L - Turn left (90 degrees)

It's our job to determine if a command string will send our robot into an endless loop. (It may take many iterations of executing the command!) In other words, will executing some
command string enough times bring us back to our original coordinate, in our original orientation.

Well, technically he's stuck in a loop regardless.. but we want to know if he's going in a circle!

# Input Description

You will accept a command string of arbitrary length. A valid command string will only contain the characters "S", "R", "L" however it is not required that a command string utilizes all commands. Some examples of valid command strings are

* S
* RRL
* SLLLRLSLSLSRLSLLLLS

# Output Description

Based on robot's behavior in accordance with a given command string we will output one of two possible solutions

A) That a loop was detected and how many cycles of the command string it took to return to the beginning of the loop


B) That no loop was detected and our precious robot has trudged off into the sunset 

# Input

* "SR" (Step, turn right)
* "S" (Step)

# Output

* "Loop detected! 4 cycle(s) to complete loop" [[Visual](http://i.imgur.com/kGsoPSX.png)]
* "No loop detected!"

# Challenge Input

* SRLLRLRLSSS
* SRLLRLRLSSSSSSRRRLRLR
* SRLLRLRLSSSSSSRRRLRLRSSLSLS
* LSRS

# Credit

Many thanks to Redditor /u/hutsboR for this submission to /r/dailyprogrammer_ideas. If you have any ideas, please submit them there!