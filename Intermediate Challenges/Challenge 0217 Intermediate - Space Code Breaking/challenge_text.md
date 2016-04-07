#Description:

The year 2266 we have encountered alien planets who use very simple encryption to send messages. Lucky for us we intercept all these messages and we can break the code. 

The problem is the collection of messages are all from the same space probe. So we are not sure which message is from what system. 

Our challenge today is to decode the message and have our solutions determine which planet system the message came from.


##Edit note:

Copying my ASCII data over as input is causing problems. I see that some people who were true heroes and tackled the problem early are seeing this. To fix this we will be altering the challenge. Input will be a set of numbers each represent a byte in the message. Hopefully this will fix the issues.


#Input:

Message broken down into numbers representing the ASCII values of the message between " "

#Output: 

The name of the system and the message decoded.

#Encryption and Planet Systems:

    Omicron V: will take and invert the 5th bit. ( 0001 0000) That is the bit location in the byte where we invert the bit.

    Hoth: Takes the value of the ASCII character and adds 10 to it.

    Ryza IV: Takes the value of the ASCII character and subtracts 1 to it.

    Htrae: reverses the characters.

#Validation:

It is not enough to just take the message and decode it in all 4 ways and let you decide which one is right or wrong. You need to have your program/solution determine the right decoding. All messages are in english (I know even in the future on alien planets).

#Example:

##input:

" 101  99  97 101 112  32 110 105  32 101 109 111  99  32 101  87 "

##Note:

This would be "ecaeP ni emoc eW" in displayed ascii - some messages don't display well as the
values take them beyond displayable ascii values (thus the decimal values)

##output:

Htrae: We come in Peace



#Challenge Input:

    " 71 117  48 115 127 125 117  48 121 126  48  96 117 113 115 117 "
    " 97 111  42 109 121 119 111  42 115 120  42 122 111 107 109 111 "
    " 86 100  31  98 110 108 100  31 104 109  31 111 100  96  98 100 "
    " 101  99  97 101 112  32 110 105  32 101 109 111  99  32 101  87 "
    " 84 113 121 124 105  48  64  98 127 119  98 113 125 125 117  98  48 121  99  48  99  96 105 121 126 119  48 127 126  48 101  99 "
    " 78 107 115 118 131  42  90 124 121 113 124 107 119 119 111 124  42 115 125  42 125 122 131 115 120 113  42 121 120  42 127 125 "
    " 67  96 104 107 120  31  79 113 110 102 113  96 108 108 100 113  31 104 114  31 114 111 120 104 109 102  31 110 109  31 116 114 "
    " 115 117  32 110 111  32 103 110 105 121 112 115  32 115 105  32 114 101 109 109  97 114 103 111 114  80  32 121 108 105  97  68 "
    " 86 121  98 117  48 100 120 117  48  93 121  99  99 124 117  99 "
    " 80 115 124 111  42 126 114 111  42  87 115 125 125 118 111 125 "
    " 69 104 113 100  31 115 103 100  31  76 104 114 114 107 100 114 "
    " 115 101 108 115 115 105  77  32 101 104 116  32 101 114 105  70 "

#Challenge Solution:

    The 12 messages are 3 messages in each of the 4 encodings. Hopefully you should come up with
    
    "We come in Peace"
    "Daily Programmer is spying on us"
    "Fire the missiles"

    in all of the 4 encodings each.