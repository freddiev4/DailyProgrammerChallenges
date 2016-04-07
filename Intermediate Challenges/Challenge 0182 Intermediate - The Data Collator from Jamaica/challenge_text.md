# [](/IntermediateIcon) **(Intermediate)**: The Data Collator from Jamaica

Often, when given a set of data where one variable is associated with another, we want to find a general rule equating the two variables, with which you can find the closest appropriate match of one to the other.

Say, for example, we have performed an experiment determining the acceleration undergone by an object when subject to a force. [Newton's 2^nd Law of Motion](https://en.wikipedia.org/wiki/Newton%27s_laws_of_motion#Newton.27s_second_law) dictates that *F=ma* - linking the variables `F` (force) and `a` (acceleration) by a constant `m` (mass of the object). If we performed the acceleration we may get the following values:

| F (N)	| a (m s^(-2)) |
|--------:|--------:|
| 0.2| 0.32 |
| 0.4| 0.62 |
| 0.6| 0.97 |
| 0.8| 1.22 |
| 1| 1.58 |
| 1.2| 1.84 |
| 1.4| 2.17 |
| 1.6| 2.47 |
| 1.8| 2.83 |
| 2| 3.16 |

[This data can be plotted to see the link between the 2 data sets. Here, `F` is on the horizontal and `a` is on the vertical axis.](http://i.imgur.com/PdlTl6W.png)

To create a line of best-fit or **trend line** for this data, [which looks like this](http://i.imgur.com/W2aFGIx.png), a number of methods can be used, such as the ever-present [least squares](https://en.wikipedia.org/wiki/Least_squares) method. For the purposes of this challenge, the trend line will *always* be linear, and thus the two data sets must be 

Your challenge is, given 2 data sets, draw the values on an appropriately-scaled graph (with axes) and find a suitable trend line fitting the data.

# Input and Output Description

## Input

The first line of input will be in the format:

    <X>:<graph title>:<X label>:<Y label>

* **X**: The size of the data sets.
* **graph title**: The title to be displayed at the top of the graph.
* **X label**: The label to be displayed on the x-axis.
* **Y label**: The label to be displayed on the y-axis.

Following that will be precisely **N** further lines of input, in the format:

    X:Y

Where X is the value to be plotted on the X-axis, and Y is the value to be plotted on the Y-axis.

# Output

The output is to be in the form of an image:

* The scale of the axes should be big enough to show every data point on the image, but not too big such that the points are all crammed together.
* The data points are to be plotted onto a graph.
* A linear trend line, fitting the given data, is to be plotted.

# Sample Input

I've created a data set for you to plot yourself.

    20:Graph of I over V through a resistor:Voltage (V):Current (mA)
    0.000:0.000
    0.198:0.387
    0.400:0.781
    0.600:1.172
    0.802:1.566
    1.003:1.962
    1.200:2.349
    1.402:2.735
    1.597:3.122
    1.798:3.505
    2.002:3.918
    2.202:4.314
    2.399:4.681
    2.603:5.074
    2.800:5.485
    2.997:5.864
    3.198:6.256
    3.400:6.631
    3.597:7.017
    3.801:7.435

# Tips

Here are some tips to make the most of this /r/DailyProgrammer challenge.

* Try and think of an algorithm or method to find the best-fit line yourself. There are plenty of ways out there, but as a member of /r/DailyProgrammer try and do it from scratch!

* Half of the challenge here is drawing the graph yourself. For that reason it's best to pick a language here that supports graphical output. Using a premade graphing library defeats the point of this challenge so try and DIY.