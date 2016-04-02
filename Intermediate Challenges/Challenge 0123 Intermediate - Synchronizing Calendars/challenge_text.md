
# [](#IntermediateIcon) *(Intermediate)*: Synchronizing Calendars
You're trying to plan out your family's Easter dinners for the next few centuries.

Your grandparents use the Lunar calendar, but your parents use the Julian calender, so you only have dinner with your grandparents when the calendars synchronize.

To help you figure that out, you're going to need to compute when M Julian years has the same amount of days as N Lunar months. As it turns out, these calendars synchronize with cycles of certain numbers of years.


**Some information you will need:**

* The time between full moons is 29.53059 days, so that is the length of one Lunar month.

* A Julian year is 365 days for three years, the fourth year is a leap year of 366 days, and then the cycle repeats.

* When taking the days in a number of Lunar months, you will likely get a decimal answer. _Round to the nearest day._


*Author: Zamarok*
# Formal Inputs & Outputs
## Input Description

You will be given two numbers `(M, N)`, where  
`M` is the number of Julian years, and  
`N` is the number of Lunar months.

You need to confirm that the number of days in `M` Julian years is equal to the number of days in `N` Lunar months.

## Output Description

You will take `M` and `N` and discover if the calendars synchronize after `M` Julian years and `N` Lunar months.

When looking at how many days `N` Lunar months will have, round to the nearest day.

If they do synchronize with the given input, print out the number of days that will pass before this occurs.

If the calendars don't synchronize with the given input, print `0`.

# Sample Inputs & Outputs
## Sample Input

    38, 470
## Sample Output
13879
# Challenge Input

    114, 2664
    30, 82
## Challenge Input Solution

    41638
    0
# Note
This was a problem in my homework for an astronomy class. I decided to code a solution to generate solutions, rather than figuring out it by hand. Turned out to be a good problem to solve, and I learned a bunch while doing it. It's difficult enough to provide a good challenge and to make you think about how to approach the problem from different angles.

Let me know if anyone wants to see the original homework assignment, or my solution (about 5 lines of Haskell).

# Extra Credit (optional):

Right now your program just confirms when the calendars will synchronize. You can modify your program to generate `(M, N)` to sequentially discover solutions. Find the largest solution for `M` where `M` is less than `500`.

For even more extra credit, point out the number of years that it takes for one cycle, a cycle being the time between when these calendars synchronize. There are multiple correct answers here.
				