A simple pseudo-random number generator looks like this: 

    s(0) = 123456789
    s(n) = (22695477 * s(n-1) + 12345) mod 1073741824
    
So each number is generated from the previous one.

Using this generator, generate 10 million numbers (i.e. s(0) through s(9,999,999)) and find the 1000 largest numbers in that list. What is the sum of those numbers?

Try to  make your solution as efficient as possible. 

* Thanks to [sim642](http://www.reddit.com/user/sim642) for submitting this problem in /r/dailyprogrammer_ideas! If you have a problem that you think would be good, head on over there and help us out!