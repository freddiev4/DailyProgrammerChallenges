# [](#IntermediateIcon) *(Intermediate)*: Call Forwarding

A call forwarding service is a system that allows any incoming phone calls to a phone number be forwarded to a secondary phone number. This system is helpful in the case of a person taking a vacation (so that if Alice is out of the office, Bob receives all her customer's calls). It is possible, with such a system, that the secondary receiver (Bob in this case) also goes on vacation and also setups call forwarding to another person (Carol). Thus in such a situation, if someone calls Alice, it gets forwarded to Bob who in turn has the system re-forward to Carol.

Your job is to implement such a system, take in people's vacation times, and return how many call forwards are implemented at a given time and how "deep" the forwarding goes.

*Special thanks to the ACM collegiate programming challenges group for giving me the initial idea [here](http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=316). Also, based on recent world news, please consider donating to the [EFF](https://www.eff.org/) and make sure to write good code that protects your users. This subreddit is not the right place for a political discussion; I leave it up to the reader to think about why/how this subject may be important to you. At least consider that software you write in your "real-world job" may be used by an international audience, and such an audience may be targeted by unscrupulous people/governments. Protect people's lives by protecting their digital data: we programmers are the few people who can actually protect our users.* </preachy paragraph>

# Formal Inputs & Outputs
## Input Description

You will be given an integer N on its own line that represents the number of vacation schedule descriptions that follow (each on their separate line). For each vacation description, you will be given four integers: the first is the person's regular 4-digit phone number, then the 4-digit phone number they choose to forward to, then when the vacation starts (measured in days) and how long the vacation lasts (measured in days). On the final line of input, which is line N + 1, you will be given a day to test the properties of the call-forwarding system (as defined in the output description).

Note that the date/time system here is based on a day index system. 1 represents the first day, 2 represents the second day, etc. Days do not respect the concept of months or years, so expect to simulate any given schedule up to the day 4,294,967,295. (32-bit unsigned integer max value)

Note that the input's forwarding chain will be guaranteed to *not* have circular forwarding: you can expect that Carol, in the challenge description, will never re-forward back to Alice while she is on vacation. As a secondary challenge, if you *can* detect such a failure, in that case simply print the chain in question that fails the call forwarding.

## Output Description

For the given day you want to test the system (the last integer from the input format), you must print both how many call forwarding are in place and the largest forwarding chain. A forwarding chain is the relationship as described in the challenge description where Alice forwards to Bob, who in turn forwards to Carol (this chain has a value of two, for the two call forwards).

# Sample Inputs & Outputs
## Sample Input

    3
    0000 0001 1 3
    0001 4964 2 1
    4964 0005 2 3
    2

## Sample Output

    3 call forwardings set up on day 2
    3 call forwardings are the longest chain on day 2
