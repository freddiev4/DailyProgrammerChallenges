#Description:

This builds off the [Easy #171] (http://www.reddit.com/r/dailyprogrammer/comments/2ao99p/7142014_challenge_171_easy_hex_to_8x8_bitmap/) Challenge. We take it to the next level.

We can read in an 8x8 picture from hex values. Once we have that image we can do some fun things to it.

* Zoom - zoom in or out of the image
* Rotate - turn the image 90 degrees clockwise or counter clockwise
* Invert - What was On is Off and what is Off becomes On. It inverts the image

Your challenge is implement these 3 abilities. If you completed Easy #171 then you have a headstart. Otherwise you will need to complete that first.

#Input:

Same as [Easy #171] (http://www.reddit.com/r/dailyprogrammer/comments/2ao99p/7142014_challenge_171_easy_hex_to_8x8_bitmap/) read in 8 hex values and use it to generate a 8x8 image.

#Zoom:

You will zoom in x2 at a time. So let's look at what a zoom does.
You have this image (using numbers for reference)

    12
    34

If you perform a zoom in x2 you will generate this image.

    1122
    1122
    3344
    3344

If you zoom again on this image x2 you will get this:

    11112222
    11112222
    11112222
    11112222
    33334444
    33334444
    33334444
    33334444

So for example if you have this image:

    xxxxxxxx
    x      x
    x xxxx x
    x x  x x
    x x  x x
    x xxxx x
    x      x
    xxxxxxxx

If you do a zoom x2 you get this:

    xxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxx
    xx            xx
    xx            xx
    xx  xxxxxxxx  xx
    xx  xxxxxxxx  xx
    xx  xx    xx  xx
    xx  xx    xx  xx
    xx  xx    xx  xx
    xx  xx    xx  xx
    xx  xxxxxxxx  xx
    xx  xxxxxxxx  xx
    xx            xx
    xx            xx
    xxxxxxxxxxxxxxxx
    xxxxxxxxxxxxxxxx

Your zoom feature should be able to take the image and go x2. Up to a maximum of x4 (so 8x8 up to 32x32).
Your zoom feature should also zoom out and take a 32x32 to a 16x16 and then down to a 8x8. Your zoom should
not go out more than x4. (So your images can be only 8x8, 16x16 or 32x32).

#Rotate:

This is very simple. You will rotate clockwise or counterclockwise.

So this image:

    12
    34

If you rotate it 90 clockwise:

    31
    42

If you rotate it 90 counter clockwise:

    12
    34


Your rotations should go either direction and can handle the image being 8x8, 16x16 or 32x32.

#Invert:

In the image if it was turned off it becomes turned on. If it is turned on it becomes turn off.

Example if you have this image: (adding a border of #)


     ##########
     #xxxxxxxx#
     #x      x#
     #x xxxx x#
     #x x  x x#
     #x x  x x#
     #x xxxx x#
     #x      x#
     #xxxxxxxx#
     ##########

The invert of it becomes:

     ##########
     #        #
     # xxxxxx #
     # x    x #
     # x xx x #
     # x xx x #
     # x    x #
     # xxxxxx #
     #        #
     ##########

#Challenge:

Use the same input as the [Easy #171] (http://www.reddit.com/r/dailyprogrammer/comments/2ao99p/7142014_challenge_171_easy_hex_to_8x8_bitmap/) and do the following operations on them.

* Zoom in x 2
* Rotate Clockwise 90
* Zoom in x 2
* Invert
* Zoom out x 2

Note: Due to the potential size of outputs (and if you elect to show the image inbetween the steps) please use a github or other method to show your output. Thanks!

For speed here are the 4 hex pictures from the Easy 171:

    FF 81 BD A5 A5 BD 81 FF
    AA 55 AA 55 AA 55 AA 55
    3E 7F FC F8 F8 FC 7F 3E
    93 93 93 F3 F3 93 93 93
