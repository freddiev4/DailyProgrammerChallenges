[A while ago](http://www.reddit.com/r/dailyprogrammer/comments/ti5ji/5112012_challenge_51_intermediate/) we had some fun with the very peculiar [Brainfuck programming language](http://en.wikipedia.org/wiki/Brainfuck), which (despite its limited set of commands and character set) is actually Turing complete, meaning that any computation you can do in any other programming language, you can do in Brainfuck.

That doesn't make it easy to use, though. Even as simple a task as printing out a string requires quite lengthy code. Today, we will simplify that task quite a bit!

Your task today is to write a program that takes a string as input and outputs Brainfuck code that, when run, will print out that string. That is, given "Hello World!", it will print out something that looks like [Wikipedia's example Hello World program](http://en.wikipedia.org/wiki/Brainfuck#Hello_World.21) (though not necessarily exactly, of course). 

Use your program to create a Brainfuck program that prints out [The Raven](http://pastebin.com/v8AbQRFv), by Edgar Allen Poe.

Bonus: Try to optimize your program in such a way as to make the brainfuck code as short as possible. [Here, for instance, is a 34500 character long Brainfuck program that I made](http://pastebin.com/Jdmrf4hM) which prints out "The Raven". Can you beat me and write a program that generates shorter Brainfuck code? 

Remember, this bonus is optional, even if your generated program is very big, you are still free to submit code. 