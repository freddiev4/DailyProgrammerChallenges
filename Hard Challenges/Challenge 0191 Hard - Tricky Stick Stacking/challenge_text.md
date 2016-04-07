# [](#HardIcon) **(Hard)**: Tricky Stick Stacking

Similar to the previous [hard challenge with the arrows](/r/dailyprogrammer/comments/2m82yz/), this challenge will similarly require a hard degree of thought to solve (providing, of course, you develop the algorithm yourself,) while being relatively easy to understand.

Imagine you have a 2D plane, into which you can place sticks, [like so](http://i.imgur.com/mkt7n2D.png). All of the sticks are perfectly straight, and placed into this plane from the top (positive Y) down. The sticks will never overlap or cross over one another. Your task today is to simply determine in which order the sticks must be pulled out of the plane without hitting any other sticks.

There are a few rules for this:

* A stick is [pulled out of the plane *directly upward (ie. along the positive Y axis)*](http://i.imgur.com/8eFNtwh.png), [like so](http://i.imgur.com/MpquP7S.png). This means that you can't pull a stick out [sideward or at an angle](http://i.imgur.com/zGQL5xV.png) (for example, to avoid another stick.)

* A stick cannot be pulled out if there's [another stick directly above it](http://i.imgur.com/RWtPm05.png).

In some possible possible scenarios, there is only one possible order to pull the sticks out of the plane. [This scenario](http://i.imgur.com/16WBjSf.png) only has one possible order: 1, 2, 4, 3. [This scenario](http://i.imgur.com/gSkKVIg.png) however has two possible orders, as the last two remaining sticks are not interfering with one another's removal, so you can remove them in any order.

# Formal Inputs and Outputs

## Input Description

Each stick is described by a number and the co-ordinates of its 2 ends, like so:

    n:x1,y1,x2,y2

Where the stick number **n** is between the points (x1, y1) and (x2, y2). You will first input a number **S** which is the number of sticks in the scenario. You will then take a further **S** lines of input in the above format. **n** must be an integer but the co-ordinates can be any real number.


## Output Description

You are to output one possible order of removal of the sticks (where each stick is identified by its number **n**. There may be more than one.

# Sample Inputs and Outputs

## Sample Input

[(Represents this scenario)](http://i.imgur.com/nDpDJag.png)

    4
    1:0,3,4,5
    2:2,3,8,1
    3:4,0,5,1
    4:1,3,4.2,1

## Sample Output

    1, 2, 4, 3

## Sample Input

[(Represents this scenario)](http://i.imgur.com/gSkKVIg.png)

    5
    1:3,3,8,1
    2:11,2,15,2
    3:6,3,12,4
    4:10,5,10,10
    5:9,11,18,12

## Sample Output

This scenario has 2 possible outputs:

    5, 4, 3, 1, 2

or:

    5, 4, 3, 2, 1

## Sample Input

[(Represents this scenario)](http://i.imgur.com/l8X9Tgg.png)

    6
    1:1,6,12,6
    2:1,7,1,15
    3:11,1,13,10
    4:14,10,15,6
    5:15,2,15,5
    6:12,1,14,11
    
## Sample Output

    2, 1, 3, 6, 4, 5

## Sample Input

    5
    1:2,2,2,8
    2:1,1,11,2
    3:10,1,15,3
    4:5,5,13,8
    5:6,4,9,3

## Sample Output

(all 3 are valid)

    1, 4, 5, 2, 3
    4, 1, 5, 2, 3
    4, 5, 1, 2, 3

## Sample Input

    6
    1:6,2,14,7
    2:12,10,15,9
    3:12,3,12,6
    4:3,1,17,2
    5:4,3,11,2
    6:3,10,12,12

## Sample Output

(both are valid)

    6, 2, 1, 3, 5, 4
    6, 2, 1, 5, 3, 4

## Sample Input

    5
    1:2,1,15,15
    2:15,5,15,12
    3:10,8,13,2
    4:13,4,15,4
    5:8,9,12,13

## Sample Output

    5, 1, 2, 4, 3