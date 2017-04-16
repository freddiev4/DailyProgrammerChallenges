**Description**

Scientist have discovered a new plant. The fruit of the plant can feed 1 person for a whole week and best of all, the plant never dies.
Fruits needs 1 week to grow, so each weak you can harvest it fruits.
Also the plant gives 1 fruit more than the week before and to get more plants you need to plant a fruit.

Now you need to calculate after how many weeks, you can support a group of `x` people, given `y` fruits to start with.

*Input*

    15 1

*Output*

    5

**Input description**

The input gives you 2 positive integers `x` and `y`, being `x` the number of people needed to be fed and `y` the number of fruits you start with.

**Output description**

The number of weeks before you can feed the entire group of people.

**Explanation**

Here you have a table that shows the growth when starting with 1 fruit.
It shows when the plant came into existence (is planted) and how may fruit it bears each week

      Plant 1  2  3  4  5  6  7  8  9 10 11 12 13    Total # of fruits in a harvest
    Week
    1       0  -  -  -  -  -  -  -  -  -  -  -  -     0
    2       1  0  -  -  -  -  -  -  -  -  -  -  -     1
    3       2  1  0  0  0  -  -  -  -  -  -  -  -     3
    4       3  2  1  1  1  0  0  0  0  0  0  0  0     8
    5       4  3  2  2  2  1  1  1  1  1  1  1  1    21  

At week 1 we have 1 plant giving 0 fruits, because it has just been planted.

When week 2 comes along we have 1 plant that gives off a fruit and then we use that fruit to plant plant 2.

Then in week 3 we have 2 fruits from plant 1, 1 from plant 2, so we can plant 3 new plants.

**Challenge Input**

    200 15
    50000 1
    150000 250

**Challenge Output**

    5
    14
    9 

**Finally**

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas