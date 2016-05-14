MaybeNumeric is a function that returns either a number or a string depending on whether the input (string) is a valid description of a number.

# sample input (string)

      123
      44.234
      0x123N

# sample output (any)

      123 (number)
      44.234 (number)
      0x123N (string)

# bonus 1: special numbers

finding arrays, exponent notation, bignumber

      123 234 345
      3.23e5
      1293712938712938172938172391287319237192837329
      .25

# bonus 2:  parsing separated values
(clarification: backtick is the sparator. space is only a separator for numeric arrays)

     2015 4 4`Challenge #`261`Easy
     234.2`234ggf 45`00`number string number (0)

#bonus 3 : inverted table/column database/array

An inverted table is an other term for column arrays, where each field is an independent array of uniform types.  These structures are often faster than row oriented heterogeneous arrays, because homogeneous arrays (often the only valid option in a language) are represented as tightly packed values instead of indirect pointers to typed values.  A row record (from an array of columns) is simply a common index that is used to retrieve elements from each of the arrays.

**Convert the structure parsed from bonus#2 into an inverted table**: ie. 4 arrays of 2 elements... IF the 4 fields are homogeneous (they are in bonus#2 example).

You may wish to deal with "homogenizing" an integer array with a float scalar for first field (promoted as arrays of floats, with ideal fill of infinity in 2nd record (though 0 fill credible choice too)).

**invalid inverted table example** (should just keep row oriented records)

     2015 4 4`Challenge #`261`Easy
     234.2`234ggf 45`0`8

intended output is in my solution here: https://www.reddit.com/r/dailyprogrammer/comments/4eaeff/20160411_challenge_262_easy_maybenumeric/d1ye03b