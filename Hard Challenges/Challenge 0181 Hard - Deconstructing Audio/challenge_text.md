#Description

You're part of an innovative new company whose primary goal is to improve the music catalogue and its databases for integration with Apple,Linux and Microsoft products. You notice a significant lack of metadata given by users and wonder if there's a way to automate the process instead.

#Formal Inputs & Outputs

Given an audio file that contains music (this won't work on speech or anything irregular) you must create a program that can determine the [BPM/Tempo](http://en.wikipedia.org/wiki/Tempo) of that audio file.

##Input description

On input you should pass your file through for analysis.

##Output description

The program should output the Beats per minute of a song

For example

    120bpm


or

    79bpm

[Here](http://songbpm.com/) is a good website to test your results against


#Notes/Hints

For the less musically inclined, make sure your music is in 4/4(common time) before analyzing. Analyzing odd time signatured songs might make this significantly harder. This brings us neatly to the bonus challenge...

There are a few ways to go about this challenge from the exceedingly simple; Pulling the data from an already existing database. Or the actual way, using various signal processing techniques to arrive at an accurate result.


Here is a good article on beat detection and implementing the algorithm

http://archive.gamedev.net/archive/reference/programming/features/beatdetection/index.html

You may also want to check out [Comb filtering](http://en.wikipedia.org/wiki/Comb_filter)

#Bonus

Output the time signature of the song

#Finally

We have an IRC channel over at

webchat.freenode.net in #reddit-dailyprogrammer

Stop on by :D

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas
