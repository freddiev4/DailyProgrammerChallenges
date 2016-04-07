# Description

Stream ciphers like [RC4](https://en.wikipedia.org/wiki/RC4) operate very simply: they have a strong psuedo-random number generator that takes a key and produces a sequence of psuedo-random bytes as long as the message to be encoded, which is then XORed against the plaintext to provide the cipher text. The strength of the cipher then depends on the strength of the generated stream of bytes - its randomness (or lack thereof) can lead to the text being recoverable.

# Challenge Inputs and Outputs

Your program should have the following components:

* A psuedo-random number generator which takes a key and produces a consistent stream of psuedo-random bytes. A very simple one to implement is the [linear congruential generator (LCG).](https://en.wikipedia.org/wiki/Linear_congruential_generator) 
* An "encrypt" function (or method) that takes a key and a plaintext and returns a ciphertext.
* A "decrypt" function (or method) that takes a key and the ciphertext and returns the plaintext. 

An example use of this API might look like this (in Python):

    key = 31337
    msg = "Attack at dawn"
    ciphertext = enc(msg, key)
    # send to a recipient

    # this is on a recipient's side
    plaintext = dec(ciphertext, key)

At this point, `plaintext` should equal the original `msg` value. 