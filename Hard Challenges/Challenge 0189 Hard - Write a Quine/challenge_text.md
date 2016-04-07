#Description:

A Quine is a very interesting little program that does only one thing: it prints out exactly its own source code. Quines are tricky to write, but figuring out how to do it is a very rewarding and fun little challenge.
Some rules for this challenge:

* The program can use no I/O except for printing out to standard output. It can't read (or write) anything from standard input, or any file (or network socket, or whatever). That is to say, you can't make a program that simply reads the source code and prints it out.

* The output of the program and the source code for the program have to match exactly, literally byte for byte (including newlines and comments, if you include any). If you're on a unix system, you can check for this by using the diff utility.

* The source code of your Quine has to be longer than 1 character. The reason for this is to prevent "degenerate" Quines, like having an empty program that prints out nothing.

* Often people compete about who can write the shortest Quine in a given programming language. Don't worry about that for this challenge, make your Quines as long as you want.

There are many websites that describe in detail exactly how to write a Quine, but you are encouraged not to look those up. Figuring out how to do it for yourself is very rewarding. However, if you're hopelessly stuck, you can go ahead and research it. Wikipedia provides a very good description of how to do it.

#Input:

None for this challenge.

#Output:

The source code of your program exactly, byte for byte.

#Bonus:

Write a two-language Quine. That is, write a program in language A that prints out code for language B, and when you run the code for language B, it prints out the original code for language A.

That is, if your two languages are python and ruby, you should be able to run this:


     $ python A.py > B.rb
     $ ruby B.rb > C.py
     $ diff A.py C.py
     $

That is, when running A.py in python, it produces the ruby source code B.rb, and when you run B.rb in ruby, it produces C.py, and A.py and C.py are exactly the same.

#Challenge Credit:

Thanks to /u/XenophonOfAthens - This challenge was posted on /r/dailyprogrammer_ideas - A place to go to post challenge idea for this subreddit.
