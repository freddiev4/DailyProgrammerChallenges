Before I get to today's problem, I'd just like to give a warm welcome to our two new moderators, [nooodl](http://www.reddit.com/user/nooodl) and [Steve132](http://www.reddit.com/user/Steve132)! We decided to appoint two new moderators instead of just one, because rya11111 has decided to a bit of a break for a while.

I'd like to thank everyone who applied to be moderators, there were lots of excellent submissions, we will keep you in mind for the next time. Both nooodl and Steve132 have contributed some excellent problems and solutions, and I have no doubt that they will be excellent moderators. 

Now, to today's problem! Good luck!

***

The famous Fibonacci sequence is defined as follows: starting with 0 and 1, each number in the sequence is defined as the sum of the previous two numbers. The sequence starts:

    0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,...

The list here is zero-based, so f(0) = 0, f(1) = 1, f(2) = 1, and so on.

Less famous is the so-called tribonacci sequence, which is like the Fibonacci sequence, except that it starts with 0,0,1 and every new number is defined as the sum of the previous three numbers. It starts:

    0,0,1,1,2,4,7,13,24,44,81,149,274,504,927,...
    
Continuing the pattern, there are also tetranacci sequence (which sums the four previous numbers) and the pentanacci sequence (which sums the five previous numbers). They begin:

    0,0,0,1,1,2,4,8,15,29,56,108,208,401,773,...

    0,0,0,0,1,1,2,4,8,16,31,61,120,236,464,...
    
These sequences are usually referred to as "higher order Fibonacci sequences". Note that if the order of the sequence is K (i.e. when K = 2 you get the standard Fibonacci numbers, and when K = 3, you get the tribonacci numbers), then the sequence starts out with K - 1 zeroes and then one 1.

Your task is to implement a function f(K, N) which returns the N^th fibonacci number of the order K. That is, f(2, N) would return values in the regular Fibonacci sequence, f(3, N) returns values in the tribonacci sequence, and so on. 

What is f(100, 10000) mod 10^8 ?

Bonus: What is f( 3^13 , 5^10 ) mod 10^8 ?


* Thanks to [JacqueItch](http://www.reddit.com/user/JacqueItch) for suggesting this problem at /r/dailyprogrammer_ideas! If you have a problem you think would be good for us, why not head over there and post it?
