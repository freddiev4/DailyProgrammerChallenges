First of, sorry for the late upload. I had a bit of an hold up

# Description
We are going to work with terminal commands. You will be given a set of instructions to generate an output.
We are going to use a screen of 10 rows and 10 characters

Rows and columns are numbered 0 through 9. The character that introduces a control sequence is `^`, the circumflex. The character (or in one case, the two characters) immediately following the control sequence introducer will direct your software in performing its special functions.

Command | Description
---|---
`^c` | clear the entire screen; the cursor row and column do not change 
`^h` | move the cursor to row 0, column 0; the image on the screen is not changed 
`^b` | move the cursor to the beginning of the current line; the cursor row does not change 
`^d` | move the cursor down one row if possible; the cursor column does not change 
`^u` | move the cursor up one row, if possible; the cursor column does not change 
`^l` | move the cursor left one column, if possible; the cursor row does not change 
`^r` | move the cursor right one column, if possible; the cursor row does not change 
`^e` | erase characters to the right of, and including, the cursor column on the cursor's row; the cursor row and column do not change 
`^i` | enter insert mode 
`^o` | enter overwrite mode 
`^^` | write a circumflex (`^`) at the current cursor location, exactly as if it was not a special character; this is subject to the actions of the current mode (insert or overwrite) 
`^DD` | move the cursor to the row and column specified; each D represents a decimal digit; the first D represents the new row number, and the second D represents the new column number 

# Input/output

## In 1

    ^h^c^i
    DDD^r^rPPPP^d^b
    D^r^rD^rP^19P^d^b
    D^r^rD^rPPPP^d^b
    D^r^rD^rP^d^b
    DDD^r^rP  
    
## Out 1

    DDD  PPPP 
    D  D P   P
    D  D PPPP 
    D  D P    
    DDD  P 

## In 2

    ^h^c^i
    ^04^^
    ^13/ \^d^b  /   \
    ^u^d^d^l^l^l^l^l^l^l^l^l
    ^r^r^l^l^d<^49>^l^l^d/^b \
    ^d^r^r^66/^b  \
    ^b^d   \ /
    ^d^l^lv^d^b===========^i^94O123456
    789^94A=======^u^u^u^u^u^u^l^l\^o^b^r/

## Out

        ^
       / \
      /   \
     /     \
    <       >
     \     /
      \   /
       \ /
        v
    ====A=====

# Bonus

Turn an 10 by 10 ascii art into most optimized terminal instructions.

# Finaly
Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas

Thanks to /u/chunes for pointing out my mistakes