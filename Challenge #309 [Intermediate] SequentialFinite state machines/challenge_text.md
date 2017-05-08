A sequential machines is a form of finite state machine that is (probably) used in regular expression implementations, tokenizing inputs, or just plain splitting/cutting input.

I'll be using [J's implementation](http://code.jsoftware.com/wiki/Vocabulary/semico#dyadic) of sequential machines as a reference point.

# 1.  Simplest SeqMachine:  cut on character (csv)

The following table provides all necessary information for seperating a string based on commas (or other cut character) into words (array elements).

statelabel | cutchar | other
---|---|----
start | start-Nothing | inword-BeginWord
inword | start-EmitWordDontBeginNew | inword-Nothing

The above is a state transition table, where each row is a state, labeled for convenience.  The cells (except for 1st column which is just a reference label) are newState-Action pairs

The state machine transition table does not specify what character will be used as the special `cut character` but assuming the cut character is `,` then the above state machine description when applied to a text input will/should do the following:

* Initial state is always start (first row).  Initially no start of a word has been defined.  
* If the first character seen is `,`(cutchar) then stay in the start state, and do nothing (this will skip any leading `,` from being included in word(s).  
* If the first character is not `,` then mark the start of a new word here, and go to state `inword`.  
While in `inword` state, if the cutchar `,` is seen, the `emit word` (include from begining of word definition to last char as a new array element), but don't begin a new word, and go to start state.  (if a new word was started, it would include the `,` as leading character.  Also, you/it would (probably) need to go to a different state than start, because that state assumes no word has been started yet.  
* While in `inword` state, if a char other than `,` is seen, then just stay in `inword` state without a new action.
* When end of input is reached, emit any word from `begining marker` to end of input.
Codes to make shorter ActionCodes



Code | CodeNumber | Action
---|---|---
N | 0 | Nothing
B | 1 | BeginWord
W | 2 | EmitWordStartNewWord
w | 3 | EmitWordDontBeginNew(Word)
V | 4 | EmitVectorStartNewWord
v | 5 | EmitVectorDontBeginNew(Word)
S | 6 | Stop parsing.

The `EmitVector` actions (not used in today's challenges) mark the tentative end of a word.  If a word is emitted in another state before returning to the state that called `EmitVector` then 2 words will be emitted (the tentatively marker, plus the new word).  If instead transitions return to the state that EmitVectored, and that state `EmitWord`s then a single word is emitted that includes the full length of the initial beginning of word to the new ending marker.

Since the action codes are 1 letter long, there is no need for the `-` separator.  Alternate version of above table:

statelabel | cutchar | other
---|---|----
start | startN | inwordB
inword | startw| inwordN


The state labels can also be replaced by a row number, and if those are numbers, then we can use J language's numeric action codes as well.  We reintroduce the dash to allow for easier "cutting" by character.

New equivalent state transition table with state labels (removed) references replaced by state row indexes (0 based)

cutchar | other
---|----
0-0 | 1-1
0-3 | 1-0

**challenge**

write a function with the following 3 parameters:  
1. stateTransitionTable - in one of the above 3 formats.
2. inputMapping - a 256 integer array where each element's position corresponds to the ascii table, and the value of each cell refers to the column of the `stateTransitionTable`.
3. stringtoTokenize - the input string that the function will parse.

for the inputmapping, if you wanted to cut on `,` then element 44 (ascii value of ,) would be 0, while all 255 other inputmapping elements would be 1.  If you wanted to cut on all punctuation and space, then all of those ascii positions would be 0, while others are still 1.

**input:**

cut on `,`:  ,mark,bill,  steve, phil,  
cut on `, .!?:`: The quick brown fox, jumped over what?  The Moon!!!!

**output:**  (fancy boxes not required... but these are the delimited tokens)  

    ┌────┬────┬───────┬─────┐
    │mark│bill│  steve│ phil│
    └────┴────┴───────┴─────┘
    ┌───┬─────┬─────┬───┬──────┬────┬────┬───┬────┐
    │The│quick│brown│fox│jumped│over│what│The│Moon│
    └───┴─────┴─────┴───┴──────┴────┴────┴───┴────┘
    





# 2.  Bonus variation, extra state input

write a state transition table that will allow cuts either on `,`, or if the state is within quotes `"` capture the entire contents within quotes as a single word even if/when a `,` is included. 

hint: your state transition table will need 3 input columns: `,`,`"`,`other`, and your inputmapping will code `,` as 0, `"` as 1, and `other` as 2 if the 3 input columns of the state transition table are in the order I mentioned.

I will spoiler a transition table after a while, but input/output of the function with the correct transition table, 

**input:**  
 mark"bill,  steve" phil,john

**output:** 

    ┌────┬────────────┬─────┬────┐
    │mark│bill,  steve│ phil│john│
    └────┴────────────┴─────┴────┘

# 3.  base 255 part 2

In part 1 of this challenge posted 2 weeks ago, one value in a 256 based "character" set was chosen to act as a data separator, while also dealing with the challenge of escaping that value within data.

Write a state machine such that words are emitted when either a `/` (escape) or `+` (delimiter) are encountered.  When an escape character/code is encountered, the character following the escape code is retained in the output though the initial escape is removed.  Similarly, delimiters are removed.

This sequential machine requires 2 passes.  After the word formation pass (the application of the sequential machine), any words that start with `/`(escape) or `+`(delimiter) are joined with the previous word. 

**input:**

mar//k+bill/++  steve+ phil+john

**firstpass output:**

    ┌───┬──┬────┬─┬───────┬─────┬────┐
    │mar│/k│bill│+│  steve│ phil│john│
    └───┴──┴────┴─┴───────┴─────┴────┘
    
**final output:**

    ┌─────┬─────┬───────┬─────┬────┐
    │mar/k│bill+│  steve│ phil│john│
    └─────┴─────┴───────┴─────┴────┘
    