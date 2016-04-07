#Description:

Keeping with our "Bit" theme this week. We will look into the future. It is 2114. We have colonized the Galaxy. To communicate we send 140 character max messages using [A-Z0-9 ]. The technology to do this requires faster than light pulses to beam the messages to relay stations.

Your challenge is to implement the compression for these messages. The design is very open and the solutions will vary.

Your goals:

* Compact 140 Bytes down to a stream of bits to send and then decompact the message and verify 100% data contained.

* The goal is bit reduction. 140 bytes or less at 8 bits per byte so thats 1120 bits max. If you take a message of 140 bytes and compress it to 900 bits you have 220 less bits for 20% reduction.

#Input: 

A text message of 140 or less characters that can be [A-Z0-9 ]

#Output:

     Read Message of x Bytes.
     Compressing x*8 Bits into y Bits. (z% compression)
     Sending Message.
     Decompressing Message into x Bytes.
     Message Matches!


* x - size of your message
* x* 8 = bits of your message
* z - the percentage of message compressed by
* y bits of your bit stream for transmission

So compress your tiny message and show some stats on it and then decompress it and verify it matches the original message.

#Challenge Inputs:

three  messages to send:

     REMEMBER TO DRINK YOUR OVALTINE


     GIANTS BEAT DODGERS 10 TO 9 AND PLAY TOMORROW AT 1300 


     SPACE THE FINAL FRONTIER THESE ARE THE VOYAGES OF THE BIT STREAM DAILY PROGRAMMER TO SEEK OUT NEW COMPRESSION

#Congrats!

We are a trending subreddit for today 7-18-2014. Welcome to first time viewers of /r/dailyprogrammers checking out our cool subreddit. We have lots of programming challenges for you to take on in the past and many to look forward to in the future.
