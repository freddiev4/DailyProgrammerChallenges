This challenge is loosely inspired by user [skeeto](/u/skeeto)

In this challenge, you are to implement any kind of [digital stenography you want](http://en.wikipedia.org/wiki/Steganography#Digital)
, but it has to be based on an image.

Write a program that takes in two command-line arguments, one of which is an input image and the other is a data file to hide in the image.  
You can use the [netpbm](http://en.wikipedia.org/wiki/Netpbm_format) file format if you want for simplicity, but if your language has another format built-in, you can use that. 

The point is that, whatever you choose to do, it has to be non-obvious upon casual inspection that the data file is embedded in the image. 
If the data file is too big to store in the image given, your program can output an error.

For example, the algorithm I implemented for this challenge is very similar to the one on wikipedia: that is, for every 2 bits of data in the 
data file, I replace the low-order two bits of a color channel of a pixel.  

Implement this algorithm, or come up with your own!
