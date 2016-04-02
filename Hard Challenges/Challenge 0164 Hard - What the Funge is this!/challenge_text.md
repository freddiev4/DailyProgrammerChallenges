#Description

Befunge is a programming language invented by Chris Pressey. The language was made with the goal of being extremely difficult to compile. Well, what makes it so difficult? Consider this 'Hello World' program written by /u/Elite6809 in Befunge:

    0 952**7+    v
    >:3-        v6
     >-  :3-::7v:6
     1         -8*
     *         :+  
    +8         2  
    66 v-+9**25<  
    :^     **464< 
    ^         +8:<
    
       >        :v
       ^    ,+*88_@

At first glance, this may look like gibberish (similar to BrainFuck) This is because this language isn't read in the same way as normal programming languages, which are read in a linear fashion. Instead, it is read in two dimensions, by following an instruction pointer throughout the file. The pointer defaults at moving from left to right, but characters such as [^, v, <, >] will change the direction of the instruction pointer to any of the cardinal directions. Variables are stored on a stack, and all operations pop one or more values off the stack, then either push the result back onto the stack, or change the direction of the instruction pointer. This results in a puzzling programming language, forcing you to work with space management and a limited-access value stack.

Your job is to create a Befunge interpreter that will take in a list of user inputs (read in order by any & or ~ command) and a two-dimensional Befunge program, and output the result.

Be careful! Befunge is a self-modifying programming language (using the p command) and can change itself during runtime!

#Inputs & Outputs
##Input Description
Line 1 will consist of any values that will be used as input to the program. every time a user input command is called, it will use the next value in your list of inputs. If there is no input needed, it should be a single zero.

The rest of your input will be the Befunge program to interpret. Befunge-93 has a maximum size of 80 characters horizontally by 25 characters vertically, so it should be within those parameters.

##Output Description

The program should output a new value or character whenever an output command (. or ,) is called in your program.

##Sample Inputs

Ex.1 (Simple 'Hello World')

    0

    "!dlrow olleH">:#,_@

Ex.2 (Factorial program written by /u/AJ_Black)

    9

    0&>:1v
      |:-<
    <$<v:\
    ^ *_$.@


##Sample Outputs

Sample outputs:

Ex.1:

Hello world!

Ex.2:

362880

#Bonus

Challenge:

Now that you've made an interpreter, put it to the test by making a Befunge program of your own. Make it serenade you by singing "99 Bottles,", or challenge yourself to a game of "higher or lower." 

#Help

If you're stuck, try reading a few resources such as the Wiki page

http://en.wikipedia.org/wiki/Befunge

There's a good example of Befunge code here, written for our [Easy] challenge

http://www.reddit.com/r/dailyprogrammer/comments/26ijiu/5262014_challenge_164_easy_assemble_this_scheme/chrdyfa

#Notes

You can verify that your interpreter works using the following online interpreter - 


http://www.bedroomlan.org/tools/befunge-93-playground