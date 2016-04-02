# _(Hard)_: Re-emvoweler 2

[This week's Intermediate challenge](http://www.reddit.com/r/dailyprogrammer/comments/1yzlde/022614_challenge_150_intermediate_reemvoweler_1/) involved re-emvoweling, which means reconstructing a series of words given their consonants and vowels separately, in order.

For most inputs, there are a huge number of valid ways to re-emvowel them. Your goal this time is to produce a valid output that also resembles an English sentence, as much as possible. For each sample input, there is one best answer (the sentence I actually used to produce the input). Good solutions that don't produce the best answer are acceptable, but you should aim for answers that are significantly better than random.

A typical strategy is to begin by analyzing a corpus of English text for word frequencies or other patterns. You can use whatever techniques or data sources you wish, but your program must run completely autonomously, without relying on human judgment during runtime.

The challenge inputs this time are all based on English sentences taken from the web. The word "a" _does_ appear in these sentences. Other than the word "a", all words in the sentences appear in [the Enable word list](http://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt), and none of the words contain punctuation.

Along with your solution, be sure to post your results from running the challenge inputs!

# Formal Inputs & Outputs

## Input description

Two strings, one containing only consonants, and one containing only vowels. There are no spaces in the input.

## Output description

A space-separated series of words that could be disemvoweled into the input, each word of which must appear in your word list. The output should resemble an English sentence (without capitalization and punctuation) as closely as possible.

# Sample Inputs & Outputs

## Sample Input

    thffcrrprtdthtblckdndcrfwhdbnrdrd
    eoieeoeaaoaeaaueaeeoee

## Sample Output

    the officer reported that a blockade and a curfew had been ordered

# Challenge Inputs

## Challenge Input 1

    thdcryptntmsbltdtrmnthtthplnsrnddfrtypftrnsprt
    eeioeaiaeoeeieaeaaeieeoaeoao

## Challenge Input 2

    nfcthblvdthrwsnthrcncptytbyndhmnndrstndngdtthmrvlscmplxtyndthclckwrkprcsnfthnvrs
    iaeeieeeeaaoeoeeeouaueaiueoeaeouoeiaeooeiiooeuiee

## Challenge Input 3

    thhmrthpthsthtnsnvnthblmngsndtrckllcnsprtnsrthtthtlftngrtrvlngbckthrtyyrstnsrhsprntsmtndltmtlymtcngvntsvntgnwbfrlydscrbdsclssc
    euoeaoeeioeeeooiouaaoieoeueaeaeoaeeaeaeiaieaoeueiaeeeauiaeaeaieiiaeoeaieieaaai

# Note

Thanks to /u/abecedarius for inspiring this week's challenges on /r/dailyprogrammer_ideas!