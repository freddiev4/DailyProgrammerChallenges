Run-Length encoding is a simple form of compression that detects 'runs' of repeated instances of a symbol in a string and compresses them to a list of pairs of 'symbol' 'length'.  For example, the string

    "Heeeeelllllooooo nurse!"

Could be compressed using run-length encoding to the list of pairs 
     [(1,'H'),(5,'e'),(5,'l'),(5,'o'),(1,'n'),(1,'u'),(1,'r'),(1,'s'),(1,'e')]

Which seems to not be compressed, but if you represent it as an array of 18bytes (each pair is 2 bytes), then we save 5 bytes of space compressing this string.

Write a function that takes in a string and returns a run-length-encoding of that string.  (either as a list of pairs or as a 2-byte-per pair array)

BONUS:  Write a decompression function that takes in the RLE representation and returns the original string