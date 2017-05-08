#Description

The bomb defusing becomes a little more complicated, but the upside is, we only have 5 wires now: white, black, red, orange and green.

The rules for defusing a bomb are as following now:

    You have to start with either with a white or a red wire.
    If you picked white wire you can either pick another white wire again or you can take an orange one.
    If you picked a red wire you have the choice between a black and red wire.
    When a second red wire is picked, you can start from rule one again.
    Back to the second rule, if you picked another white one you will have to pick a black or red one now
    When the red wire is picked, you again go to rule one.
    On the other hand if you then picked an orange wire, you can choose between green, orange and black.
    When you are at the point where you can choose between green, orange and black and you pick either green or orange you have to choose the other one and then the bomb is defused.
    If you ever pick a black wire you will be at the point where you have to choose between green, orange and black


Try to draw this out if it is confusing, it is a part of the challenge. My drawing is available in the notes.

The bomb is defused when you reach the end, so by either cutting a green or orange cable. If you can't do that, bomb will explode

#Formal Inputs & Outputs

##Input description

You will be givin a sequence of wires

### Input 1

    white
    white
    red
    white
    orange
    black
    black
    green
    orange

### Input 2

    white
    white
    green
    orange
    green

##Output description

### Output 1

    defused

### Output 2

    Booom


## Challenge Inputs


### 1

    white
    white
    red
    red
    red
    white
    white
    black
    green
    orange


### 2

    white 
    black
    black
    black
    black
    green
    orange

### 3 


    black
    green
    green

### 4

    red
    red
    white
    orange
    black
    green


#Notes/Hints

For those who had a hard time following the rules, I've mapped it out for you with this [image](http://i.imgur.com/b0hoNrp.png)

#Bonus

You will be a number of wires and need to state if it is possible to defuse the bomb

##Bonus input 1

    white 4
    red 3
    black 4
    green 1
    orange 1

##Bonus output 1

    defusable

##Bonus input 2

    white 4
    red 3
    black 4
    green 0
    orange 1

##Bonus output 2

    not defusable

##Bonus challenge input 1

    white 3
    red 1
    black 48
    green 1
    orange 2

##Bonus challenge input 2

    white 3
    red 1
    black 48
    green 1
    orange 1


##Bonus Note

You do have to use all wires, you can't leave some uncut

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

#Edit

/u/cheers pointed out a logical error.