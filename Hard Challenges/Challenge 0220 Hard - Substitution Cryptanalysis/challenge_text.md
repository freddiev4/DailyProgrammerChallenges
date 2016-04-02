# [](#HardIcon) _(Hard)_: Substitution Cryptanalysis

A [substitution cipher](https://en.wikipedia.org/?title=Substitution_cipher) is one where each letter in the alphabet is substituted for another letter. It's like a Caesar shift cipher, but where every letter is ciphered independently. For example, look at the two rows below.

    abcdefghijklmnopqrstuvwxyz
    YOJHZKNEALPBRMCQDVGUSITFXW

To encode something, find the letter on the top row, and swap it with the letter on the bottom row - and vice versa. For example, the plaintext:

    hello world

Becomes:

    EZBBC TCVBH

Now, how would you go about decrypting something like this? Let's take another example, with a different key.

    IAL FTNHPL PDDI DR RDNP WF IUD

You're also given the following hints: `A` is ciphered to `H` and `O` is ciphered to `D`. You know the text was in English, so you could plausibly use a word list to rule out impossible decrypted texts - for example, in the third words `PDDI`, there is a double-O in the middle, so the first letter rules out P being the letter Q, as Q is always followed by a U.

Your challenge is to decrypt a cipher-text into a list of possible original texts using a few letters of the substitution key, and whichever means you have at your disposal.

# Formal Inputs and Outputs

## Input Description

On the first line of input you will be given the ciphertext. Then, you're given a number **N**. Finally, on the next **N** lines, you're given pairs of letters, which are pieces of the key. For example, to represent our situation above:

    IAL FTNHPL PDDI DR RDNP WF IUD
    2
    aH
    oD

Nothing is case-sensitive. You may assume all plain-texts are in English. Punctuation is preserved, including spaces.

## Output Description

Output a list of possible plain-texts. Sometimes this may only be one, if your input is specific enough. In this case:

    the square root of four is two

You don't need to output the entire substitution key. In fact, it may not even be possible to do so, if the original text isn't a pangram.

# Sample Inputs and Outputs

## Sample 1

### Input

    LBH'ER ABG PBBXVAT CBEX PUBC FNAQJVPURF
    2
    rE
    wJ

### Output

    you're not cooking pork chop sandwiches
    you're nob cooking pork chop sandwiches

Obviously we can guess which output is valid.

## Sample 2

### Input

This case will check your word list validator.

    ABCDEF
    2
    aC
    zF

### Output

    quartz

## Sample 3

### Input

    WRKZ DG ZRDG D AOX'Z VQVX
    2
    wW
    sG

### Output

    what is this i don't even
    whet is this i can't ulun

(what's a ulun? I need a better word list!)

## Sample 4

### Input

    JNOH MALAJJGJ SLNOGQ JSOGX
    1
    sX

### Output

    long parallel ironed lines

# Notes

There's a handy word-list [here](https://gist.githubusercontent.com/Quackmatic/512736d51d84277594f2/raw/words) or you could check out [this thread](/r/dailyprogrammer/comments/2nluof/) talking about word lists.

You could also *in*validate words, rather than just validating them - check out [this list of impossible two-letter combinations](http://linguistics.stackexchange.com/questions/4082/impossible-bigrams-in-the-english-language). If you're using multiple systems, perhaps you could use a weighted scoring system to find the correct decrypted text.

There's an [example solver](http://quipqiup.com/) for this type of challenge, which will try to solve it, but it has a really weird word-list and ignores punctuation so it may not be awfully useful.

Got any cool challenge ideas? Post them to /r/DailyProgrammer_Ideas!