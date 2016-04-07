# **(Hard)**: Mission Improbable

Imagine a scenario involving one event - let's call it event A. Now, this event can either happen, or it can not happen. This event could be getting heads on a coin flip, winning the lottery, you name it - as long as it has a 'true' state and a 'false' state, it's an event.

Now, the probability of event A happening, or the probability of event A not happening, is 100% - it must either happen or not happen, as there isn't any other choice! We can represent probabilities as a fraction of 1, so a probability of 100% is, well, 1. (A probability of 50% would be 0.5, 31% would be 0.31, etc.) This is an important observation to make - the sum of the probabilities of *all the possible outcomes* must be 1. The probability of getting a head on a fair coin flip is one half - 0.5. The probability of not getting a head (ie. getting a tail) is one half, 0.5, also. Hence, the sum of all the probabilities in the scenario is 0.5+0.5=1. This 'sum event' is called the sample space, or S.

We can represent this one-event scenario with a diagram, [like this](http://i.imgur.com/qwmIb6E.png). Each coloured blob is one outcome; all the outcomes are in S, and thus are all are in the big circle, representing S. The red blob represents the outcome of A *not* occurring, and the green blob represents the outcome of A occurring.

Now, let's [introduce some numbers](http://i.imgur.com/avK6iUQ.png). Let's say the probability of A occurring is 0.6 (60%). As A occurring, and A not occurring, are the only possible outcomes, then the probability of A not occurring must be 40%, or 0.4. This type of reasoning lets us solve basic problems, [like this one](http://i.imgur.com/buH6RQn.png). If the probability of A not occurring is 0.67, then what is the probability of A occurring? Well, the probability of S is 1, and so 0.67 plus our unknown must sum to 1 - therefore, the probability of A occurring is 1-0.67=**0.33**.

What about scenarios with more than one event? Look at [this diagram](http://i.imgur.com/xTxM2eV.png). This shows the sample space with two events, A and B. I've put coloured blobs for three of the four possible outcomes - of course, the fourth is in the empty region in A. Each region on the diagram is one possible outcome. Now, we come to something important. [This region on the diagram](http://i.imgur.com/xi0MNZ6.png) is **NOT** representing A - it is representing A **and not B**. [This region here](http://i.imgur.com/GJhGvs5.png) represents the probability of A as a whole - and, as you can see, the probability of A occurring is the probability of A and B, plus the probability of A and *not* B - in other words, the sum probability of all outcomes where A occurs.

Applying this additive rule lets us solve some more complex problems. [Here's a diagram representing Stan's journey to work this morning](http://i.imgur.com/eyQnbyk.png). Stan needs to catch two buses - the driver of the first bus is a grumpy old fellow and waits for hardly any time for Stan to get on; the driver of the second is much nicer, and waits for Stan where he can. Of course, if Stan misses the first bus, then it's likely that he will miss the second bus, too.

We know that, on 85% of days (0.85), Stan gets to work on time. We also said before that the driver of bus 2 is nice, and hence it's very rare to miss the second bus - the chance of getting on the first bus, and missing the second, is tiny - 1% (0.01). Stan tells us to work out how often he misses the first bus but not the second bus, given that he misses the second bus on 12% (0.12) of days.

Let's look at that last fact - the probability that Stan misses the second bus is 0.12. This means that the [sum of all probabilities in this region on the diagram must be 0.12](http://i.imgur.com/p9XM9uo.png). We already know that the probability of missing bus 2, but *not* missing bus 1 is 0.01. Hence, as there is only one other possible outcome involving missing bus 2, the probability of missing *both* buses must be 0.11, as 0.11+0.01=0.12! Thus our diagram now [looks like this](http://i.imgur.com/PqO8HI1.png). Now, out of the 4 possible outcomes in this scenario, we know three of them. We also know that the total sum of the probabilities of the four outcomes must equal one (the sample space); therefore, 0.85+0.01+0.11+**?**=1. This tells us that the probability of missing bus 1, but *not* missing bus 2 is 1-0.85-0.01-0.11=0.03. Therefore, we've solved Stan's problem. Your challenge today is, given a set of events and the probabilities of certain outcomes occurring, find the probability of an unknown outcome - or say if not enough information has been given.

# Input and Output

## Input Description

On the first line of input, you will be given a number **N**, and then the list of event names, like this:

    3 A B

You will then be given **N** lines containing probabilities in this format:

    A & !B: 0.03

Where the `&` indicates the left and right occur together, and the `!` indicates negation - ie. `A & !B` indicates that event A occurs and event B doesn't.

Finally, on the last line, you will be given an outcome for which to find the probability of, like this:

    !A & !B

Thus, an input set describing Stan and his buses would look like this (where B1 is missing bus 1, B2 is missing bus 2):

    3 B1 B2
    !B1 & B2: 0.01
    !B1 & !B2: 0.85
    B2: 0.12
    B1 & !B2

**You may assume all probabilities are in increments of 1/100 - ie. 0.27, 0.9, 0.03, but not 0.33333333 or 0.0001.**

## Output Description

Output the probability of the given unknown - in the example above,

    0.03

# Example I/O

## Input

[(Represents this scenario as a diagram)](http://i.imgur.com/720vIok.png)

    6 A B C
    B: 0.7
    C: 0.27
    A & B & !C: 0
    A & C & !B: 0
    A & !B & !C: 0.13
    !A & !B & !C: 0.1
    B & C

## Output

    0.2

## Input

    3 B1 B2
    !B1 & B2: 0.01
    !B1 & !B2: 0.85
    B2: 0.12
    B1 & !B2

## Output

    0.03

## Input

    1 A B
    A & B: 0.5
    A

## Output

    Not enough information.

# Addendum

Now might be the time to look into Prolog.