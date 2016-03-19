The ABACABA sequence is defined as follows: start with the first letter of the alphabet ("a"). This is the first iteration. The second iteration, you take the second letter ("b") and surround it with all of the first iteration (just "a" in this case). Do this for each iteration, i.e. take two copies of the previous iteration and sandwich them around the next letter of the alphabet. 

Here are the first 5 items in the sequence:

a   
aba     
abacaba         
abacabadabacaba         
abacabadabacabaeabacabadabacaba         

And it goes on and on like that, until you get to the 26th iteration (i.e. the one that adds the "z"). If you use one byte for each character, the final iteration takes up just under 64 megabytes of space.

Write a computer program that prints the 26th iteration of this sequence to a file. 

***

BONUS: try and limit the amount of memory your program needs to finish, while still getting a reasonably quick runtime. Find a good speed/memory tradeoff that keeps both memory usage low (around a megabyte, at most) and the runtime short (around a few seconds). 

* Thanks to [thelonesun](http://www.reddit.com/user/thelonesun) for suggesting this problem at /r/dailyprogrammer_ideas! If you have problem that you think would be good for us, why not head on over there and help us out!
