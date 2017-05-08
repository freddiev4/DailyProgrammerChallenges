#Description

You will be given a sequence that of letters and you must match with a dictionary.
The sequence is a pattern of equal letters that you must find.

E.G.

    Pattern:
    XXYY means that you have a word that contains a sequence of 2 of the same letters followed by again 2 of the same letts

    succeed <- matches
    succes <- no match

    XYYX means we have a word with at least for letters where you have a sequence of a letter, followed by 2 letters that are the same and then again the first letter

    narrate <- matches
    hodor <- no match

#Formal Inputs & Outputs

##Input description

###Input 1

    XXYY

###Input 2

    XXYYZZ

###Input 3

    XXYYX



##Output description

The words that match in de dictionary

###Output 1

    aarrgh
    aarrghh
    addressee
    addressees
    allee
    allees
    allottee
    allottees
    appellee
    appellees
    arrowwood
    arrowwoods
    balloon
    ballooned
    ballooning
    balloonings
    balloonist
    balloonists
    balloons
    barroom
    barrooms
    bassoon
    bassoonist
    bassoonists
    bassoons
    belleek
    belleeks
    ...

###Output 2

    bookkeeper
    bookkeepers
    bookkeeping
    bookkeepings


###Output 3

    addressees
    betweenness
    betweennesses
    colessees
    fricassees
    greenness
    greennesses
    heelless
    keelless
    keenness
    keennesses
    lessees
    wheelless


*Output can vary if you use a different dictionary*

#Notes/Hints

As dictionary you can use the famous [enable1](https://raw.githubusercontent.com/dolph/dictionary/master/enable1.txt) or whatever dictionary you want.

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

Credits go to my professor, for giving me the idea.