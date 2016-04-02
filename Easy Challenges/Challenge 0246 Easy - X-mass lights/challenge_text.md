**Description**

We are going to calculate how long we can light our X-mass lights with 1 battery.
First off all some quick rules in the electronics.

All things connected in parallel share the same voltage, but they have their own current.
All things connected in serial share the same current, but they have their own voltage.

Parallel:

    ----O---- 
     |     |
     ---O---

Serial:

    ---O---O---

We are going to use 9V batteries for our calculation.
They suply a voltage of 9V (Volt) (big surprise there) and have a capacity from around 1200mAh (milliAmpere hour).

The lifetime of the battery can be calculate by deviding the capacity by the total Amperes we draw.
E.g. If we have a 9V battery and we use a light that uses 600 mA, we can light the light for 2 hours (1200/600)

For our lights we'll use average leds, wich need an voltage of 1.7V and a current of 20mA to operate.
Since we have a 9V we can have a max of 5 leds connected in serial. But by placing circuits in parallel, we can have more than 5 leds in total, but then we'll drain the battery faster.

I'll split the challengs up in a few parts from here on.

**Part 1**

As input you'll be given the length in hours that the lights needs te be lit.
You have give me the max number of led's we can have for that time

*Input*

    1

*Output*

    300

Explanation:

We can have 5 leds in serial, but then they'll take only a current of 20mA.
The battery can give us 1200mA for 1 hour. So if we devide 1200 by 20 we get that we could have 60 times 5 leds.

*Inputs*

    1
    4
    8
    12

*Outputs*

    300
    75
    35 (37 is also possible, but then we can't have 5 leds in serial for each parallel circuit)
    25

**Part 2**

Draw out the circuit.
A led is drawn in this way `-|>|-`

*input*

    20

*Output*
    
    *--|>|---|>|---|>|---|>|---|>|--*
     |                             |
     --|>|---|>|---|>|---|>|---|>|--
     |                             |
     --|>|---|>|---|>|---|>|---|>|--

*inputs*

    12
    6
    100

**Part 3**

Our circuit is not complete without a resistor to regulate the current and catch the voltage difference.
We need to calcute what the resistance should be from the resistor. This can be done by using [Ohm's law](https://en.wikipedia.org/wiki/Ohm%27s_law).

We know we can have 5 leds of 1.7V in serie, so that is 0.5V over the resistor.
If we know the current we need we can calculate the resistance.

E.g. If we need 1 hour we can have a current of 1200 mA and we have 0.5V so the resistance is the voltage devided by the current.
=> 0.5(V)/1.2(A) = 0.417 ohms

*inputs*

    1
    4
    8

*Outputs*

    0.417
    1.667
    3.333

**Part 4**

Putting it all Together

You'll be given 5 numbers, the voltage drop over a Led, the current it needs, the voltage of the battery and the capacity and the time the leds need to be lit.

The units are in voltage V, current mA (devide by 1000 for A), voltave V, capacity (mAh), timespan h

*input*

    1.7 20 9 1200 20

*Output*

    Resistor: 8.333 Ohms
    Scheme:
    *--|>|---|>|---|>|---|>|---|>|--*
     |                             |
     --|>|---|>|---|>|---|>|---|>|--
     |                             |
     --|>|---|>|---|>|---|>|---|>|--


**Finally**

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas

**Edit**

/r/derision spotted a mistake.