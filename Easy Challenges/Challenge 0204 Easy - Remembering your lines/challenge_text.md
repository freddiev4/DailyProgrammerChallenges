#Description

I didn't always want to be a computer programmer, you know. I used to have dreams, dreams of standing on the world stage, being one of the great actors of my generation!

Alas, my acting career was brief, lasting exactly as long as one high-school production of Macbeth. I played old King Duncan, who gets brutally murdered by Macbeth in the beginning of Act II. It was just as well, really, because I had a terribly hard time remembering all those lines!

For instance: I would remember that Act IV started with the three witches brewing up some sort of horrible potion, filled will all sorts nasty stuff, but except for "Eye of newt", I couldn't for the life of me remember what was in it! Today, with our modern computers and internet, such a question is easy to settle: you simply open up [the full text of the play](https://gist.githubusercontent.com/Quackmatic/f8deb2b64dd07ea0985d/raw/macbeth.txt) and press Ctrl-F (or Cmd-F, if you're on a Mac) and search for "Eye of newt". 

And, indeed, here's the passage: 

    Fillet of a fenny snake,
    In the caldron boil and bake;
    Eye of newt, and toe of frog,
    Wool of bat, and tongue of dog,
    Adder's fork, and blind-worm's sting,
    Lizard's leg, and howlet's wing,—
    For a charm of powerful trouble,
    Like a hell-broth boil and bubble. 

Sounds delicious!

In today's challenge, we will automate this process. You will be given the full text of Shakespeare's Macbeth, and then a phrase that's used somewhere in it. You will then output the full passage of dialog where the phrase appears.

#Formal inputs & outputs

##Input description
First off all, you're going to need a full copy of the play, which you can find here: [macbeth.txt](https://gist.githubusercontent.com/Quackmatic/f8deb2b64dd07ea0985d/raw/macbeth.txt). Either right click and save it to your local computer, or open it and copy the contents into a local file. 

This version of the play uses consistent formatting, and should be especially easy for computers to parse. I recommend perusing it briefly to get a feel for how it's formatted, but in particular you should notice that all lines of dialog are indented 4 spaces, and only dialog is indented that far. 

(edit: thanks to /u/Elite6809 for spotting some formatting errors. I've replaced the link with the fixed version)

Second, you will be given a single line containing a phrase that appears exactly once somewhere in the text of the play. You can assume that the phrase in the input uses the same case as the phrase in the source material, and that the full input is contained in a single line. 

##Output description

You will output the line containing the quote, as well all the lines directly above and below it which are also dialog lines. In other words, output the whole "passage".

All the dialog in the source material is indented 4 spaces, you can choose to keep that indent for your output, or you can remove, whichever you want. 

#Examples

##Input 1

    Eye of newt

##Output 1

    Fillet of a fenny snake,
    In the caldron boil and bake;
    Eye of newt, and toe of frog,
    Wool of bat, and tongue of dog,
    Adder's fork, and blind-worm's sting,
    Lizard's leg, and howlet's wing,—
    For a charm of powerful trouble,
    Like a hell-broth boil and bubble. 


##Input 2

    rugged Russian bear

##Output 2

    What man dare, I dare:
    Approach thou like the rugged Russian bear,
    The arm'd rhinoceros, or the Hyrcan tiger;
    Take any shape but that, and my firm nerves
    Shall never tremble: or be alive again,
    And dare me to the desert with thy sword;
    If trembling I inhabit then, protest me
    The baby of a girl. Hence, horrible shadow!
    Unreal mockery, hence!

#Challenge inputs

#Input 1

    break this enterprise

#Input 2

    Yet who would have thought

#Bonus

If you're itching to do a little bit more work on this, output some more information in addition to the passage: which act and scene the quote appears, all characters with speaking parts in that scene, as well as who spoke the quote. For the second example input, it might look something like this: 

    ACT III
    SCENE IV
    Characters in scene: LORDS, ROSS, LADY MACBETH, MURDERER, MACBETH, LENNOX
    Spoken by MACBETH:
        What man dare, I dare:
        Approach thou like the rugged Russian bear,
        The arm'd rhinoceros, or the Hyrcan tiger;
        Take any shape but that, and my firm nerves
        Shall never tremble: or be alive again,
        And dare me to the desert with thy sword;
        If trembling I inhabit then, protest me
        The baby of a girl. Hence, horrible shadow!
        Unreal mockery, hence!

#Notes

As always, if you wish to suggest a problem for future consideration, head on over to /r/dailyprogrammer_ideas and add your suggestion there. 

In closing, I'd like to mention that this is the first challenge I've posted since becoming a moderator for this subreddit. I'd like to thank the rest of the mods for thinking I'm good enough to be part of the team. I hope you will like my problems, and I'll hope I get to post many more fun challenges for you in the future!