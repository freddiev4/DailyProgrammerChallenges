#Description

You are the game master of the game "Guess my hat color".

The game goes as following:

- You put a group of `n` people in one row, each facing the same direction
- You assign a collored hat to each person of the group
- Now you let each person guess the color of their own hat, starting with the last person in the row.

There are only 2 colors of hats and each person can only see the color of hats in front of them.
The group wins from the gamemaster if they can win by making only 1 mistake.

The challenge today is to write the logic to make the guess.

The person guessing can only see the persons in front of them (and their hats) and can hear the guesses from the persons behind them. 
They can **NEVER** look behind them or look at their own hat.

#Formal Inputs & Outputs

##Input description

You get the list of hat colors starting with the person in the back and going to the front

###Input 1 - 10 hats

    Black
    White
    Black
    Black
    White
    White
    Black
    White
    White
    White

###Input 2 - 11 hats

    Black
    Black
    White
    White
    Black
    Black
    White
    Black
    White
    White
    White

###Input 3 - 10 hats

    Black
    Black
    Black
    Black
    Black
    Black
    Black
    Black
    Black
    White

##Output description

You have to show the guesses of the persons and whether they passed the challenge (they should if your logic is correct).

#Notes/Hints

Obviously if you return at random `Black` or `White` this won't work. The person units will have to work togheter to get a result with maximum 1 mistake.

There is no fixed ratio, neither do the participants know what the ratio is.

#An example for the layout

You have 4 people with lined up like this:

    Black -> White -> White -> Black

The one in the back can see:

    White -> White -> Black

The second one sees:

    White -> Black

And so on...

#Bonus

[Here you have a large set (10000 hats)](https://gist.github.com/fvandepitte/8ab2e2ab0e42e3d4c731). 
Make sure your program can handle this.

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

**EDIT** Added notes

Thanks to /u/355over113 for pointing out a typo