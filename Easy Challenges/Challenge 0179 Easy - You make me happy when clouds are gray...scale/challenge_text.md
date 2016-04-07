#Description

The 'Daily Business' newspaper are a distributor of the most recent news concerning business. They have a problem though, there is a new newspaper brought out every single day and up to this point, all of the images and advertisements featured have been in full colour and this is costing the company.

If you can convert these images before they reach the publisher, then you will surely get a promotion, or at least a raise!

#Formal Inputs & Outputs

##Input description

On console input you should enter a filepath to the image you wish to convert to grayscale.

##Output description

The program should save an image in the current directory of the image passed as input, the only difference being that it is now in black and white.

#Notes/Hints

There are several methods to convert an image to grayscale, the easiest is to sum up all of the RGB values and divide it by 3 (The length of the array) and fill each R,G and B value with that number.

For example


    RED = (255,0,0)


Would turn to

    (85,85,85)       //Because 255/3 == 85.

There is a problem with this method though,

    GREEN = (0,255,0)

brings back the exact same value!

There is a formula to solve this, see if you can find it.


Share any interesting methods for grayscale conversion that you come across.


#Finally

We have an IRC channel over at 


irc.freenode.net in #reddit-dailyprogrammer


Stop on by :D


Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas