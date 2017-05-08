encoding a variable length binary data array can be done with a length encoding, or by one of the 4 methods in this challenge.  Generally, a seperator value (usually ascii char 0) is used as separator of elements, but there needs to be some way of embedding/escaping possible seperator values that are included in the data.  ie. binary data may include the byte value 0.

For ease of posting to reddit, instead of `char code 0` as "magic" separator `+` will be used in these examples.  Your function should accept the 256th char in the base as a separator code.

# 1. escape followed by code

with separator code `+`, the 2 character code `++` indicates an embedded `+` in data while `+,` (, is  ascii(+) + 1) indicates a field/element separator.

**encode input:**  
    
    abc+def
    ghij
    klmno++p+

**decode of 3 input strings:**  

     abc++def+,ghij+,klmno++++p++

code that reverses decode output into input is also needed.

# 2. encode seperator byte count

based on section 2 (extendable byte base) of this challenge: https://www.reddit.com/r/dailyprogrammer/comments/54lu54/20160926_challenge_285_easy_cross/

an embedded "magic char" can be followed by the count of the consecutive number of that "magic char".  In a real world scenario, extendible byte base 256 can be used.  For ease of using printable characters in this challenge, base 10 and still `+` magic char code will be used.

so `+0` is a separator.  `+8` is 8 consecutive embedded +s.  `+90` is 9 embedded +s.  `+991` is 19 embedded +s.

**encoded part 1 input:**  

    abc+1def+0ghij+0klmno+2p+1


# 3.  When no leading (xor trailing) nulls (magic chars) allowed

In a binary encoding of numeric array data, leading nulls (0s) in a field can't happen.  So an encoding where data nulls are doubled up, but single separator nulls are used to delimit fields/array values, then an odd number of consecutive "magic chars" always means trailing data nulls followed by end-of-field.

**encoded part 1 input:**  

    abc++def+ghij+klmno++++p+++

# 4. possible but rare trailing or starting embedded nulls
 
variation on 3, when an odd number of "magic chars" > 2 are encountered, a trailing code removes the ambiguity of whether there are trailing "magic chars" in the field just ended (code `0`), or leading "magic chars" in the field following the separator (code `1`)

**encoded part 1 input:**  

    abc++def+ghij+klmno++++p+++0

The advantage of parts 3 and 4 approach is the assumption that embedded "magic chars" are rare, but a separator is common in the output string, and so these encodings hope to be shorter.