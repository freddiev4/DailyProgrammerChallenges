# Description

Chester is a very spirited young Pomeranian that lives in a pen that exactly covers the unit square. He's sitting in the middle of it, at (0.5, 0.5), minding his own business when out of nowhere, six of the most delicious dog treats you could ever imagine start raining down from the sky.

The treats land at these coordinates:

    (0.9, 0.7) (0.7, 0.7) (0.1, 0.1) 
    (0.4, 0.1) (0.6, 0.6) (0.8, 0.8)
 
He looks around, startled at his good fortune! He immediately dashes for the closest treat, which is located at (0.6, 0.6). He eats it up, and then runs for the next closest treat, which is at (0.7, 0.7) and eats that up. 

He keeps going, always dashing for the nearest treat and eating it up. He's a greedy little puppy, so he keeps going until all the treats have been eaten up. In the end, he's eaten the treats in this order:

    (0.6, 0.6), (0.7, 0.7), (0.8, 0.8), 
    (0.9, 0.7), (0.4, 0.1), (0.1, 0.1)

Since he started at (0.5, 0.5), he will have travelled a total distance of roughly 1.646710... units. 

Your challenge today is to calculate the total length of Chester's journey to eat all of the magically appearing dog-treats.

A small note: distance is calculated using the standard plane distance formula. That is, the distance between a point with coordinates (x1, y1) and a point with coordinates (x2, y2) is equal to:

    sqrt((x1-x2)^2 + (y1-y2)^2)

#Formal inputs &amp; outputs

## Inputs

The first line of the input will be an integer N that will specify how many treats have magically appeared. After that, there will follow N subsequent lines giving the locations of the treats. Each of those lines will have two floating point numbers on them separated by a space giving you the X and Y coordinate for that particular treat.

Each number provided will be between 0 and 1. Except for the first sample, all numbers will be rounded to 8 decimal digits after the period.

Note that most of the inputs I will provide will be in external text files, as they are too long to paste into this description. The bonus input, in particular, is about 2 megabytes large.

## Outputs

You will output a single line with a single number on it, giving the total length of Chester's journey. Remember that he always starts at (0.5, 0.5), before going for the first treat. 

#Sample inputs &amp; outputs

##Input 1
    6
    0.9 0.7
    0.7 0.7
    0.1 0.1
    0.4 0.1
    0.6 0.6
    0.8 0.8

##Output 1
    1.6467103925399036

##Input 2

[This file, containing 100 different treats](https://gist.githubusercontent.com/anonymous/4bf5afdc1c85098de9b1/raw/676ca9e4b94668a534854f7c3142f100b4e00f03/sample2.txt)

##Output 2

    9.127777855837017

#Challenge inputs

##Challenge input 1

[This file, containing 1,000 different treats](https://gist.githubusercontent.com/anonymous/5bf6542ebd661804e442/raw/076b6d6dfaf9269f8569b50724efc0ac99013d9b/challenge1.txt)

##Challenge input 2

[This file, containing 10,000 different treats](https://gist.githubusercontent.com/anonymous/c06a78cfc6d2cf7e4acf/raw/559686d0aef082c284e1581b36b4541cb87c7934/challenge2.txt)

#Bonus

[This file, containing 100,000 different treats](https://gist.githubusercontent.com/anonymous/ed9b5f58dc70910e32e9/raw/7c490275414b0c9cea70aabe4a71c907ef435b25/bonus.txt)

I also encourage people to generate their own larger inputs if they find that the bonus is too easy. 

#Notes

If you have any ideas for challenges, head on over to /r/dailyprogrammer_ideas and suggest them! If they're good, we might use them and award you a gold medal!