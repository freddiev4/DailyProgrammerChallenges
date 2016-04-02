# Description

Today we're going to balance words on one of the letters in them. We'll use the position and letter itself to calculate the weight around the balance point. A word can be balanced if the weight on either side of the balance point is equal. Not all words can be balanced, but those that can are interesting for this challenge.

The formula to calculate the weight of the word is to look at the letter position in the English alphabet (so A=1, B=2, C=3 ... Z=26) as the letter weight, then multiply that by the distance from the balance point, so the first letter away is multiplied by 1, the second away by 2, etc. 

As an example:

STEAD balances at T: 1 * S(19) = 1 * E(5) + 2 * A(1) + 3 * D(4))



# Input Description

You'll be given a series of English words. Example:

    STEAD

# Output Description

Your program or function should emit the words split by their balance point and the weight on either side of the balance point. Example:

    S T EAD - 19
    
This indicates that the T is the balance point and that the weight on either side is 19.

# Challenge Input

    CONSUBSTANTIATION
    WRONGHEADED
    UNINTELLIGIBILITY
    SUPERGLUE

# Challenge Output

*Updated* - the weights and answers I had originally were wrong. My apologies. 

    CONSUBST A NTIATION - 456
    WRO N GHEADED - 120
    UNINTELL I GIBILITY - 521    
    SUPERGLUE DOES NOT BALANCE

# Notes

This was found on a [word games page](http://www.questrel.com/records.html) suggested by /u/cDull, thanks! If you have your own idea for a challenge, submit it to /r/DailyProgrammer_Ideas, and there's a good chance we'll post it.
