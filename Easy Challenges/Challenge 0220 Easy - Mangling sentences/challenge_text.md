#Description

In this challenge, we are going to take a sentence and mangle it up by sorting the letters in each word. So, for instance, if you take the word "hello" and sort the letters in it, you get "ehllo". If you take the two words "hello world", and sort the letters in each word, you get "ehllo dlorw". 

#Inputs &amp; outputs

##Input

The input will be a single line that is exactly one English sentence, starting with a capital letter and ending with a period

##Output

The output will be the same sentence with all the letters in each word sorted. Words that were capitalized in the input needs to be capitalized properly in the output, and any punctuation should remain at the same place as it started. So, for instance, "Dailyprogrammer" should become "Aadegilmmoprrry" (note the capital A), and "doesn't" should become "denos't". 

To be clear, only spaces separate words, not any other kind of punctuation. So "time-worn" should be transformed into "eimn-ortw", not "eimt-norw", and "Mickey's" should be transformed into "Ceikms'y", not anything else. 

**Edit:** It has been pointed out to me that this criterion might make the problem a bit too difficult for [easy] difficulty. If you find this version too challenging, you can consider every non-alphabetic character as splitting a word. So "time-worn" becomes "eimt-norw" and "Mickey's" becomes ""Ceikmy's". Consider the harder version as a Bonus. 

#Sample inputs &amp; outputs

##Input 1

    This challenge doesn't seem so hard.

##Output 1

    Hist aceeghlln denos't eems os adhr.

##Input 2

    There are more things between heaven and earth, Horatio, than are dreamt of in your philosophy. 

##Output 2

    Eehrt aer emor ghinst beeentw aeehnv adn aehrt, Ahioort, ahnt aer ademrt fo in oruy hhilooppsy.

#Challenge inputs

##Input 1

    Eye of Newt, and Toe of Frog, Wool of Bat, and Tongue of Dog.

##Input 2

    Adder's fork, and Blind-worm's sting, Lizard's leg, and Howlet's wing. 
    
##Input 3

    For a charm of powerful trouble, like a hell-broth boil and bubble.

#Notes

If you have a suggestion for a problem, head on over to /r/dailyprogrammer_ideas and suggest it!
