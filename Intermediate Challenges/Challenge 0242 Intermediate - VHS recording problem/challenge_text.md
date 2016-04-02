**Description**

All nineties kids will remember the problem of having to program their vhs recorder to tape all their favorite shows. Especially when 2 shows are aired at the same time, which show do we record?

Today we are going to program the recorder, so that we have a maximum amount of tv shows on one tape.

*Input*

    1530 1600
    1555 1645
    1600 1630
    1635 1715

*Output*

    3

**Input description**

You recieve a timetable with when the shows start and when it ends. All times are in Military time.

**Output description**

You return the maximum number of shows you can record.
We can switch between channels instantaneously, so if a shows start on the same time a other one stops, you can record them.

**Inputs**

*Set 1*


    1530 1600
    1605 1630
    1645 1725
    1700 1730
    1700 1745
    1705 1745
    1720 1815
    1725 1810


*Set 2*

    1555 1630
    1600 1635
    1600 1640
    1610 1640
    1625 1720
    1635 1720
    1645 1740
    1650 1720
    1710 1730
    1715 1810
    1720 1740
    1725 1810


**Bonus 1**

We want to know what shows we have recorded, so instead of showing the number of shows, show the names of the shows we recorded.

*Input*

    1535 1610 Pokémon
    1610 1705 Law & Order
    1615 1635 ER
    1615 1635 Ellen
    1615 1705 Family Matters
    1725 1810 The Fresh Prince of Bel-Air

*Output*

    Pokémon
    Law & Order
    The Fresh Prince of Bel-Air

**Bonus 2**

Now the first line will be a **must see** show. We don't care if we don't max out the number of shows, but we sure want to have our favorite recorded.

*Input*

    The Fresh Prince of Bel-Air
    1530 1555 3rd Rock from the Sun
    1550 1615 The Fresh Prince of Bel-Air
    1555 1615 Mad About You
    1615 1650 Ellen
    1655 1735 Quantum Leap

*Output*

    The Fresh Prince of Bel-Air
    Ellen
    Quantum Leap


If you want to generate more, I got a dotnetfiddle for:

 - [Challenge](https://dotnetfiddle.net/xjXHl9)

 - [Bonus 1](https://dotnetfiddle.net/bn5QrS)

 - [Bonus 2](https://dotnetfiddle.net/6dwkGl)

**Finally**

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas