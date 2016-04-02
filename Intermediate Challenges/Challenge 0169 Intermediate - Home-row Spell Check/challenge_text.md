#User Challenge:

Thanks to /u/Fruglemonkey. This is from our idea subreddit.


http://www.reddit.com/r/dailyprogrammer_ideas/comments/26pak5/intermediate_homerow_spell_check/

#Description:

Aliens from Mars have finally found a way to contact Earth! After many years studying our computers, they've finally created their own computer and keyboard to send us messages. Unfortunately, because they're new to typing, they often put their fingers slightly off in the home row, sending us garbled messages! Otherwise, these martians have impeccable spelling. You are tasked to create a spell-checking system that recognizes words that have been typed off-center in the home row, and replaces them with possible outcomes.

#Formal Input:

You will receive a string that may have one or more 'mis-typed' words in them. Each mis-typed word has been shifted as if the hands typing them were offset by 1  or 2 places on a QWERTY keyboard.

Words wrap based on the physical line of a QWERTY keyboard. So A left shift of 1 on Q becomes P. A right shift of L becomes A.

#Formal Output:
The correct string, with corrected words displayed in curly brackets. If more than one possible word for a mispelling is possible, then display all possible words.

#Sample Input:
The quick ntpem fox jumped over rgw lazy dog.

#Sample Output:
The quick {brown} fox jumped over {the} lazy dog.

#Challenge Input:
 Gwkki we are hyptzgsi martians rt zubq in qrsvr.

#Challenge Input Solution:

{Hello} we are {friendly} martians {we} {come} in {peace}

#Alternate Challenge Input:

A oweaib who fprd not zfqzh challenges should mt ewlst to kze

#Alternate Challenge Output:

A {person} who {does} not {check} challenges should {be} {ready} to {act}

#Dictionary:

Good to have a source of words. Some suggestions.

* [enable1.txt] (https://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt)
* [British English Word List] (http://www.curlewcommunications.co.uk/wordlist.html)

#FAQ:

As you can imagine I did not proof-read this. So lets clear it up.
Shifts can be 1 to 2 spots away. The above only says "1" -- it looks like it can be 1-2 so lets just assume it can be 1-2 away.

If you shift 1 Left on a Q - A - Z you get a P L M -- so it will wrap on the same "Row" of your QWERTY keyboard.

If you shift 2 Left on a W - S - X you get P L M. 

If you Shift 1 Right on P L M -- you get Q A Z. If you shift 2 right on O K N - you get Q A Z.

The shift is only on A-Z keys. We will ignore others.


enable1.txt has "si" has a valid word. Delete that word from the dictionary to make it work. 

I will be double checking the challenge input - I will post an alternate one as well.


