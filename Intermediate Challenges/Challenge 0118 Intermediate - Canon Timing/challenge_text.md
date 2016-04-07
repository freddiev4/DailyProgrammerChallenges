
# [](#IntermediateIcon) *(Intermediate)*: Canon Timing
Naval ships typically separate their shells, explosives, and cannons in different compartments. This is all done for the safety of the ship and control of the explosive materials. [Check out this great animation from Wikipedia on how some ships load cannons!](http://en.wikipedia.org/wiki/File:Animated_gun_turret.gif)

Your job, as a first-class naval programmer, is to simulate how many shells can be fired given how long you want the system to work and how many seconds each sub-system does "work". Assume your system only has three components (shells, propellant, and the cannon), with each component having a different "work" times and with the cannon having a dependency on the shells and propellant loading.

The simulation should implement the following behaviors:

* Shell and propellant do work independently, that is to say they are not dependent on one another.

* Shell and propellant can only start re-working once they pass their materials to the cannon if, and only if, the canon is not firing.

* The cannon can only fire if both shell and propellant are given to it. This is to say there is no "queue" where the cannon is that can keep a small stock of shells and propellant; it must only have one of each while firing.

* Upon simulation initialization, all sub-systems must start their timers from 0. (i.e. the simulation starts in a default position of no work having been done)

* Note that when firing the cannon, you can count a "shot fired" immediately, but can only reload once the work-time has been consumed.

As an example, let shell and propellant retrieval take two seconds each. Let gun firing take one second. Your simulation will first take two seconds to get both the shell and propellant to the cannon. The cannon can then fire, consuming one second of work. During this one second of work, your shell and propellant retrievals can start, such that it only takes one more second for the cannon to wait before being able to fire again. Thus if you only simulated for
three seconds, your cannon would only fire once, but if you simulated for five seconds, it would fire twice, if simulated for seven seconds, it would fire thrice, etc.

*Author: nint22*
# Formal Inputs & Outputs
## Input Description
Expect four decimal numbers (up to two decimal points in precision, so a format like "<some integers or zero>.<two integer decimals, or double-zero>") on standard input (console) delimited by a space character. Let these four decimals, in order, be N A B and C. N is the time you want the firing system to be simulated. A and B are, respectively, the work times for shell and propellant retrieval. Finally, C is the time it takes to fire the cannon.
## Output Description
Simply print, as an integer, how many times the cannon can successfully fire in the given simulation time. Please note that a cannon's shot can be counted before the cannon's work time is past.
# Sample Inputs & Outputs
## Sample Input
    5.00 2.00 2.00 1.00
## Sample Output
2
# Challenge Input
    99.99 1.23 3.21 5.01
## Challenge Input Solution
Not yet posted (Check back in a few days)
# Note
This challenge is not as trivial as it appears, since simulating non-integer times will require internal abstraction of the time mechanism. Casting the input to floats or doubles will lead to errors when given large simulation times.

				