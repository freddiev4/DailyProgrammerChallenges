This problem is a simplified version of Text Segmentation in Natural Language Processing.

**Description**

Given a positive integer, return all the ways that the integer can be represented by letters using the mapping:

 * `1` -&gt; `A`
 * `2` -&gt; `B`
 * `3` -&gt; `C`

 ...
 * `25` -&gt; `Y`
 * `26` -&gt; `Z`

For example, the integer `1234` can be represented by the words :

 * `ABCD` -&gt; `[1,2,3,4]`
 * `AWD` -&gt; `[1,23,4]`
 * `LCD` -&gt; `[12,3,4]`

**Input description**

A positive integer:

**Output description**

All possible ways the number can be represented once per line.

**Examples**

Example 1:

    1234

    ABCD
    AWD
    LCD

Example 2:

    1234567899876543210

    LCDEFGHIIHGFEDCBJ
    AWDEFGHIIHGFEDCBJ
    ABCDEFGHIIHGFEDCBJ

Example 3:

    10520

    jet

**Bonus**

We can use our beloved [enable1.txt](https://code.google.com/p/dotnetperls-controls/downloads/detail?name=enable1.txt) (or other if you prefer that) to find real words or even sentences.

*Example 1*
    
    1321205

    ACUTE
    MUTE

*Example 2*

    1252020518

    LETTER
    ABETTER

*Example 3*

    85121215231518124

    HELLOWORLD


*Bonus Input*

    81161625815129412519419122516181571811313518

**Finally**

Thanks to /u/wizao and /u/smls for the idea and bonus idea

Have a good challenge idea?
Consider submitting it to /r/dailyprogrammer_ideas