# Description

Bus drivers like to gossip, everyone knows that. And bus drivers can gossip when they end up at the same stop.
So now we are going to calculate after how many stops all the bus drivers know all the gossips.

You will be given a number of busroutes that the drivers follow. Each route is appointed to 1 driver.
When 2 or more drivers are at the same stop (even if it is the start), they can exchange all the gossips they know.
Each driver starts with one gossip.

A route looks like this: `1 2 3 4` and is repeated over the whole day like this `1 2 3 4 1 2 3 4 1 2 3 ...`
If a driver starts and stops at the same stop then that is also repeated. (e.g. route: `1 2 3 1`, day: `1 2 3 1 1 2 3 1 1 2 ...`)

All drivers take 1 minute to go from one stop to another and the gossip exchange happens instantly.

All drivers drive 8 hours a day so you have a maximum of 480 minutes to get all the gossiping around.

# Input Description

You will receive all the driver routes.
Not all drivers have a route of the same length

## example 1

    3 1 2 3
    3 2 3 1 
    4 2 3 4 5

## example 2

    2 1 2
    5 2 8

# Output Description

The number of stops it takes to have all drivers on board with the latest gossips

## example 1

    5

## example 2

    never
    
If there is even one driver who does not have all the gossips by the end of the day, the answer is `never`.


# Challenge Input
## Input 1

    7 11 2 2 4 8 2 2
    3 0 11 8
    5 11 8 10 3 11
    5 9 2 5 0 3
    7 4 8 2 8 1 0 5
    3 6 8 9
    4 2 11 3 3

## input 2

    12 23 15 2 8 20 21 3 23 3 27 20 0
    21 14 8 20 10 0 23 3 24 23 0 19 14 12 10 9 12 12 11 6 27 5
    8 18 27 10 11 22 29 23 14
    13 7 14 1 9 14 16 12 0 10 13 19 16 17
    24 25 21 4 6 19 1 3 26 11 22 28 14 14 27 7 20 8 7 4 1 8 10 18 21
    13 20 26 22 6 5 6 23 26 2 21 16 26 24
    6 7 17 2 22 23 21
    23 14 22 28 10 23 7 21 3 20 24 23 8 8 21 13 15 6 9 17 27 17 13 14
    23 13 1 15 5 16 7 26 22 29 17 3 14 16 16 18 6 10 3 14 10 17 27 25
    25 28 5 21 8 10 27 21 23 28 7 20 6 6 9 29 27 26 24 3 12 10 21 10 12 17
    26 22 26 13 10 19 3 15 2 3 25 29 25 19 19 24 1 26 22 10 17 19 28 11 22 2 13
    8 4 25 15 20 9 11 3 19
    24 29 4 17 2 0 8 19 11 28 13 4 16 5 15 25 16 5 6 1 0 19 7 4 6
    16 25 15 17 20 27 1 11 1 18 14 23 27 25 26 17 1

# Bonus

Gossiping bus drivers lose one minute to tell each other the gossip. If they have nothing new to say, they don't wait that minute.

# Finally
Have a good challenge idea? Consider submitting it to /r/dailyprogrammer_ideas and there's a good chance we'll use it.