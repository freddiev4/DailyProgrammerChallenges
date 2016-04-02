# [](#IntermediateIcon) **(Intermediate)**: Markov Chain Error Detection

A Markov process describes a system where the probability of changing to a certain state is dependent on the current state. A Markov Chain is a system where there is a discrete set of states. One application of this is in some predictive-texting systems. For example, a Markov chain can describe how, in writing, the word 'car' has a higher probability of being followed by the word 'key' than the word 'banana' or 'the'. This system is handy as it allows the predictive-texting system to adapt (in a limited way) to the specific user. For example, for the word 'source', an academic would have a likely following word as 'reference', whereas a programmer would have a likely following word as 'code' - as the text 'source reference' might be used a lot by an academic whereas the text 'source code' would be used a lot by a developer. This is of course a crude example but it illustrates the point nicely.

The Markov chain could be represent in memory via a matrix. For example, for a small sample of 4 words in a paragraph, the matrix may look like:

|       | The | Thing | Did | Do |
|-------:|-----|-----|--------|----|
|  **The**|0|12|0|0|
|   **Thing**|0|0|3|5
|  **Did**|6|0|0|11
|    **Do**|8|0|0|0

At a glance you can see the number of times the word 'thing' was followed by 'do' more than 'did', and the word 'do' was preceded more by 'did' than 'thing'. There are other ways to store this data, of course - the implementation of this part is up to you.

This can be used to detect errors in input. For example, you could use the above table to predict that a sentence containing 'the do' is likely to be erroneous. Your challenge today will involve letters in words (rather than words in sentences) to predict if a word is likely to be misspelled or not.

# Formal Inputs and Outputs

## Input Description

The program is to utilise [a word list of your choice](https://www.reddit.com/r/dailyprogrammer/comments/2nluof/request_the_ultimate_wordlist/) to construct Markov chain data for the occurrence of certain letters following other letters. For example, the word 'occurrence' would have a matrix that looks like:

|   |O|C|U|R|E|N|
|---|-|-|-|-|-|-|
|**O**|0|1|0|0|0|0|
|**C**|0|1|1|0|1|0|
|**U**|0|0|0|1|0|0|
|**R**|0|0|0|1|1|0|
|**E**|0|0|0|0|0|1|
|**N**|0|1|0|0|0|0|

Of course with more data used to populate the table the numbers would be larger and more meaningful.

The program is also to accept a word to compare against the Markov chain - your program will predict whether the word is likely to be misspelled or not. You may ask 'why not just check against a word-list?' In most cases that would be fine. However, is a word is amalgamated like errorcorrection then this system should still find that the word is likely to be valid (if not malformed.)

## Output Description

You have some freedom in this section. The specific way of determining the likelihood of a word being invalid is up to you. A naive one would check if the word contains any consecutive letters that have a 0 for the Markov chain count - for example, the word 'examqle' is likely to misspelled as Q probably never follows M in the word-list. You will need to do some of the testing of this yourself, and hence different people's solutions may differ.

# Sample Inputs and Outputs

## Word List Data

You can use some of the word lists linked to in [our currently-stickied post](https://www.reddit.com/r/dailyprogrammer/comments/2nluof/request_the_ultimate_wordlist/) (at the time of writing.)

## Sample Input

I assume you can come up with some testing data yourself - just pick some actual words to test for validity, and fake words to test your program with, like horqqar or axumilog.

# Further Reading

Wikipedia page on Markov chains is [here](https://en.wikipedia.org/wiki/Markov_chain). An interesting use of Markov chains is automatic text generation based on previous input to train the program, [like this cool article](http://vedantmisra.com/markov-chain-paper-title-generator/). 