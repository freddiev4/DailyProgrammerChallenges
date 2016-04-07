#Description

"I'm sorry we had to call you in at such small notice but our last admin royally screwed us over. I don't suppose you can have a scout through the files and see if there's any remnants of that slimeball left in our system can you? Any leftover documents, programs, CV's, ANYTHING you can find about him, I need it so I can finish him."

*A few weeks pass*

...Congratulations! 

You've been hired as a temp to do some administrative duties that involve digging through the records of the filesystem in search for any hints as to where the ex-employee may have fled to. But first, you'll need some training. I've assigned you a few simple tasks that should build your command line skills to that of an adequate admin. 

#Formal Inputs & Outputs

For this task, you are given a tasklist of tasks to perform. Each task has a bulleted point and a summary. The bulleted point contains the dialogue of what the manager wants you to perform, the summary can be seen as a sort of 'technical overview' of what needs to be done.

##Input description

As input, you are expected to execute commands into your terminal that correspond to the given task on the tasklist.

##Output description

The program should output the expected output of your command.

#Tasklist

"Okay employee, I've hired you now get to work! Listen carefully to what I have to say, I'm not going to say it twice!..."

* "Bring up that list of his most used files, let's see what that scumbag's been up to!"

Summary : Get the 20 last used documents from the system and sort by the date they were modified.

-----

* "Great, can you email that to me?"

Summary : Output the above command to a .txt file. 

-----

* "Hmm, still nothing. Maybe the answer is right in front of us? Get the last commands he used on the console!"

Summary : Retrieve the last 10 commands used on the console.

-----

* "AHA, this looks good I'll just email it to my...what the? What's going on!..."  *10 minutes later* "He crashed our machine! I knew he had some software throttling our machines, find out what's causing it, and fix it!"

Summary :  Get the 10 most CPU-heavy processes in descending order.

-----

* "wait, wait, WAIT! Before you go any further. Let's look through the error logs! I won't be able to understand them and you don't have access to most of what's needed but if you could link them to my tech team, I'm sure they could figure it out!

Summary : Retrieve the last 20 error logs/messages and output these as a formatted HTML table 

-----

* "Okay, now we're getting somewhere. Let's put the nail in the coffin. Bruteforce it. Search every file, every directory, every nook and cranny for any .txt files, any .pdf and any .exe files"

Summary : Retrieve all txt/pdf/exe files on the machine (You do not need to do the whole machine, just 1 drive is enough, or less if your machine is struggling).

-----

"Thanks kid, you saved our bacon! Now get out."

#Notes/Hints

Beginners, consider using a shell environent for this. For windows I recommend Powershell. I'm not a Unix man but I hear the default shell is more than up to this task. Doing this in a programming language will prove to be a lot of work, choose a shell if you want your sanity.

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

Remember to check out our IRC channel. Check the sidebar for a link -->

