#Description

Mandy is out in the woods one day hiking with her backpack Steven (yes, she named her backpack Steven) when she suddently sees a cave in the side of a hill. Curious, she walks into it and after a while she comes to a big room. In this room is a small chest filled with gold nuggets. Suddenly, she hears a voice: "Welcome, Mandy, to The Cave of Prosperity!", it says. "You may take as as much gold as you can carry from this room, but once you leave it, you may never return!"

Mandy knows that Steven can carry up to 10 kilograms of gold (Steven's not a very good backpack, as it turns out), and luckily, there's a scale next to the chest. She sees that there are five gold nuggets in the chest and she weighs them. Four of them weigh 2 kilograms each and the last one weighs 5 kilograms. She puts the four gold nuggets weighing 2 kilograms (for a total of 8 kilograms) into to Steven and exists the cave, happy at her good fortune. 

However, as you might have realized, Mandy made a mistake! If she had taken the 5 kilogram nugget and two of the 2 kilogram nuggets, she would have gotten out with 9 kilograms of gold instead of 8. 

Today, you are going to visit The Cave of Prosperity, and we are going to see if you can do better than Mandy

#Formal inputs &amp; outputs
##Input
On the first line of the input, you will get the capacity of your backpack, rounded to 7 digits after the decimal point. After that, there will be one line specifying how many gold nuggets there are in the cave. After that, there will be one line per gold nugget specifying how much each of them weighs. 

The weights of the gold nuggets will be a floating point number between 0.0 and 1.0, with seven digits after the decimal point.

##Output
On the first line of the output, you will specify how much gold you are able to escape with by putting gold nuggets into your backpack. This number will be as large as possible without exceeding the capacity of your backpack.

After that, you will print out the weights of the gold nuggets you have collected. In other words, the first line should be the sum of the rest of the lines.

#Sample inputs &amp; outputs
##Input 1

    2.0000000
    5
    0.3958356
    0.4109163
    0.5924923
    0.6688261
    0.8720640

##Output 1

    1.9518064
    0.4109163
    0.6688261
    0.8720640

##Input 2

    4.0000000
    10
    0.0359785
    0.9185395
    0.2461690
    0.7862738
    0.9237070
    0.2655587
    0.3373235
    0.8795087
    0.7802254
    0.8158674

##Output 2

    3.9970232
    0.9185395
    0.2655587
    0.3373235
    0.8795087
    0.7802254
    0.8158674

#Challenge inputs
##Input 1
[This 15-nugget challenge](https://gist.githubusercontent.com/anonymous/d18c4b31a9e4aa2941c4/raw/c51cd7fdaf925a6137f8728a5b30741615ba923d/gistfile1.txt)

##Input 2
[This 30-nugget challenge](https://gist.githubusercontent.com/anonymous/2451fef8cbbd0fa30705/raw/7b877d5b5330106aa1af935ea52ec5616541c8db/gistfile1.txt)

#Bonus

[This 46-nugget challenge](https://gist.githubusercontent.com/anonymous/39899cb2d250a7fd02fa/raw/6f8be09206dfbcbe32915678260dd42c5a75a435/gistfile1.txt)

#Notes

As always, if you have any suggestions for a problem, head on over to /r/dailyprogrammer_ideas and suggest them!
