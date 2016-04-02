# _(Intermediate)_: Re-emvoweler 1

In [this week's Easy challenge](http://www.reddit.com/r/dailyprogrammer/comments/1ystvb/022414_challenge_149_easy_disemvoweler/), series of words were disemvoweled into vowels, and non-vowel letters. Spaces were also removed. Your task today is, given the two strings produced via disemvowelment, output _one possibility_ for the original string.

1. Your output must be such that if you put it through the solution to this week's Easy challenge, you'll recover exactly the input you were given.
2. You don't need to output the same string as the one that was originally disemvoweled, just _some_ string that disemvowels to your input.
3. Use [the Enable word list](http://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt), or some other reasonable English word list. Every word in your output must appear in your word list.
4. For the sample inputs, all words in originally disemvoweled strings appear in Enable. In particular, I'm not using any words with punctuation, and I'm not using the word "a".
5. As before, ignore punctuation and capitalization.

# Formal Inputs & Outputs

## Input description

Two strings, one containing only non-vowel letters, and one containing only vowels.

## Output description

A space-separated series of words that could be disemvoweled into the input, each word of which must appear in your word list. 

# Sample Inputs & Outputs

## Sample Input 1

    wwllfndffthstrds
    eieoeaeoi

## Sample Output 1

There are, in general, many correct outputs. Any of these is valid output for the sample input (using the Enable word list to verify words):

    we wile lo fen daff et host rids 
    we wile lo fend aff eths tor ids 
    we wile lo fen daff the sot rids 
    we will fend off eths tare do si 
    we will fend off the asteroids

## Sample Input 2

    bbsrshpdlkftbllsndhvmrbndblbnsthndlts
    aieaeaeieooaaaeoeeaeoeaau

## Sample Outputs 2

    ab bise ars he ae pi ed look fa tab all sned hove me ar bend blob ens than adults 
    ai be base rash pe die look fat bal la sned hove me ar bend blob ens than adults 
    babies ae rash pe die loo ka fat balls end ho vee mar bend blob ens than adults 
    babies rash pedal kef tie bolls nod aah ave omer bendable bones than adults 
    babies are shaped like footballs and have more bendable bones than adults

## Sample Input 3

    llfyrbsshvtsmpntbncnfrmdbyncdt
    aoouiaeaeaoeoieeoieaeoe

# Notes

Thanks to /u/abecedarius for inspiring this challenge on /r/dailyprogrammer_ideas!

Think you can do a better job of re-emvoweling? Check out this week's Hard challenge!