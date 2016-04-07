# Description

Click games such as [Cookie Clicker](http://orteil.dashnet.org/cookieclicker/) are resource games where, part of the game, is obtaining free resources limited by how fast you can repeatedly click for them.
Today's challenge simulates these games with a constant 1 click per second, and a build order queue. Allowing the game to be played in a console, and finish "instantly".
For our game, cookies is the name of the generated resources.

# Setup
For each line in this input, each word is:
1. Name of building (can be discarded or split into its own array for formatting use)
2. Cost for first building purchase.
3. Number of Cookies each building generates.
4. Number of extra cookies the building generates on first upgrade. (all subsequent upgrades double production)
5. Cost of first upgrade.

## Setup Input
```
cursor 12 0.1 0.1 100              
grandma 100 0.8 0.3 1000           
farm 500 4 1 10000                 
mine 1000 10 3 50000               
factory 5000 40 10 200000          
bank 100000 100 40 5000000         
temple 1000000 400 100 100000000   
city 300000000 5000 2000 1000000000
```
Not in input are 2 constants for each line.
1. The cost growth rate of each new building. Fixed at 1.2 (20% cost growth per purchase of the same building)
2. The cost growth rate of each upgrade. Fixed at 3 (200% cost increase for each upgrade of the same building)
```
┌────────┬─────────┬────┬──────┬────────────┬────────────┬────────────┐
│BUILDING│COST1    │PROD│BOOST1│UPGRADE_cOST│BCOST_GROWTH│UCOST_GROWTH│
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│cursor  │12       │0.1 │0.1   │100         │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│grandma │100      │0.8 │0.3   │1000        │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│farm    │500      │4   │1     │10000       │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│mine    │1000     │10  │3     │50000       │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│factory │5000     │40  │10    │200000      │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│bank    │100000   │100 │40    │5000000     │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│temple  │1000000  │400 │100   │100000000   │1.2         │3           │
├────────┼─────────┼────┼──────┼────────────┼────────────┼────────────┤
│city    │300000000│5000│2000  │1000000000  │1.2         │3           │
└────────┴─────────┴────┴──────┴────────────┴────────────┴────────────┘
```
# Simulation
Your challenge is to create a function that models resources after each turn. It has 2 inputs:
1. the number of iterations (turns) to run the simulation.
2. A queue of building and upgrade orders coded as 0-7, for a building order (0 = cursor, 1 = grandma etc...) and 100-107 for an upgrade (100 = upgrade cursor, 101 = upgrade grandma ...)

The simulation order is:
1. Add resources created from buildings.
2. Add automatic resources from turn: These are from the 1 click per turn. **turn resources = 1 + resources from "cursors building"**
3. If there is enough resources to buy the first building or upgrade in queue, then it is bought, and the total number of owned buildings or upgrades of that type is increased by one, and the cost of the building or upgrade reduced from cash/cookie balance. **this can be done on same turn resources above came in**. Can only build one building per turn.
Its recommended that you track `turns passed` `total resources collected`

To play the game, you probably need to track the current costs of each purchase option as well as production rates of each option. To choose which option has the highest ROI.
```
       1000 G 0 0 0 1 0 0 0 100 0 0 0 2 0 100 0 0 1 0 0 100 0 0 100 0 0 0 3 3 0 3 1 1 4 3 2 3 4 2 4 3 2 4 0 1
┌───────┬───────┬───────┬──────┬───────┬───────┬──────┬──────┬────┬──────┬───────┬─────┬─────┬───────┬────┬──────┬────┐
│CPS    │cursor │grandma│farm  │mine   │factory│bank  │temple│city│cursor│grandma│farm │mine │factory│bank│temple│city│
├───────┼───────┼───────┼──────┼───────┼───────┼──────┼──────┼────┼──────┼───────┼─────┼─────┼───────┼────┼──────┼────┤
│308.2  │552.061│248.832│1036.8│2985.98│10368  │100000│1e6   │3e8 │8100  │1000   │10000│50000│200000 │5e6 │1e8   │1e9 │
├───────┼───────┼───────┼──────┼───────┼───────┼──────┼──────┼────┼──────┼───────┼─────┼─────┼───────┼────┼──────┼────┤
│1024.05│33.6   │4      │16    │60     │160    │0     │0     │0   │1.6   │0.8    │4    │10   │40     │100 │400   │5000│
└───────┴───────┴───────┴──────┴───────┴───────┴──────┴──────┴────┴──────┴───────┴─────┴─────┴───────┴────┴──────┴────┘
┌─────┬──────┬───────┬─┬────────────────┬───────────────┬─────┐
│turns│gen   │CASH   │M│Builds          │Upgrades       │Queue│
├─────┼──────┼───────┼─┼────────────────┼───────────────┼─────┤
│1000 │118484│71585.4│1│21 5 4 6 4 0 0 0│4 0 0 0 0 0 0 0│     │
└─────┴──────┴───────┴─┴────────────────┴───────────────┴─────┘
```
The 2nd table output is the same as sample input #1.
After 1000 turns, $71585 cash balance is generated, from 21 cursors, 5 grandmas 4 farms, 6 mines, and 4 factories, with cursors upgraded 4 times. The queue has been emptied of all orders.
The first table, ommitting the first column, has buidling then upgrade info. The first row is the cost of the next building or upgrade. The 2nd row has the total production for each building type in the left half, and the per building production (by type) in the right half.
The first column CPS has in first row, total production rate per turn including special rules for cursors, and in 2nd row, an indicator formula I thought might be useful CPS + CASH / 100

# Challenge 0 (sample with output)

What is the earliest turn you can build a farm (building 2)?
**output** The output is the function inputs, followed by the simulation results to show that the simulation results in the farm being built. There is a better solution (ie fewer turns than 300) than this (`300` iterations with queue `0 0 0 1 0 2`)that appears in a spoiler in the comments.
```
  300 G 0 0 0 1 0 2
┌───────┬───────┬───────┬────┬────┬───────┬──────┬──────┬────┬──────┬───────┬─────┬─────┬───────┬────┬──────┬────┐
│CPS    │cursor │grandma│farm│mine│factory│bank  │temple│city│cursor│grandma│farm │mine │factory│bank│temple│city│
├───────┼───────┼───────┼────┼────┼───────┼──────┼──────┼────┼──────┼───────┼─────┼─────┼───────┼────┼──────┼────┤
│6.6    │24.8832│120    │600 │1000│5000   │100000│1e6   │3e8 │100   │1000   │10000│50000│200000 │5e6 │1e8   │1e9 │
├───────┼───────┼───────┼────┼────┼───────┼──────┼──────┼────┼──────┼───────┼─────┼─────┼───────┼────┼──────┼────┤
│6.60184│0.4    │0.8    │4   │0   │0      │0     │0     │0   │0.1   │0.8    │4    │10   │40     │100 │400   │5000│
└───────┴───────┴───────┴────┴────┴───────┴──────┴──────┴────┴──────┴───────┴─────┴─────┴───────┴────┴──────┴────┘
┌─────┬─────┬─────┬─┬───────────────┬───────────────┬─────┐
│turns│gen  │CASH │M│Builds         │Upgrades       │Queue│
├─────┼─────┼─────┼─┼───────────────┼───────────────┼─────┤
│300  │664.6│0.184│1│4 1 1 0 0 0 0 0│0 0 0 0 0 0 0 0│     │
└─────┴─────┴─────┴─┴───────────────┴───────────────┴─────┘
```

# Challenge 1

Find a build queue that generates over 100000 cash in 1000 turns.
# Challenge 2

Get enough cash to buy a city ($300M) in under 6300 turns. (or close to it if you can't make it)
Its ok to use tools such as the above to handcraft solutions. Solving this type of challenge automatically will be a later part 2 challenge.

#Bonus, TBD

~~A bonus for this challenge will be added later today. It involves adding special upgrades that interact with buildings/state in more comprehensive and intertwined manners.~~

Medals awarded: Gold to [u/fibonaci](https://www.reddit.com/u/fibonaci) and [u/godspiral](https://www.reddit.com/u/godspiral). Silvers to other solutions.
