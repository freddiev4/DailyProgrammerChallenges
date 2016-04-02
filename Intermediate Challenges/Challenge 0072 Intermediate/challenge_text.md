An X-ray illuminator is the bright plate that doctors put filters over in order to view x-ray images.

In our problem, we are going to place various sizes of red and blue tinted cellophane randomly on top of a finite x-ray illuminator.

If a given part of the illuminator is covered by only red filters, then the light is red.  If it is covered by only blue filters, then the light is blue.
If it is covered by a mixture of red and blue filters, the light will be a shade of purple.

Given some set of red and blue sheets, what is the total area of all the purple regions?

Specification: 
Each piece of cellophane is guaranteed to be an positive integer number of centimeters wide and tall, and will be placed at an integer coordinate
on the illuminator.  

The input file will contain the following:  
First, an integer n <= 1024 specifying how many pieces of cellophane there are

Then n lines for each piece of cellophane, where each line contains a character 'R' or 'B' for the color of the cellophane sheet, then two positive integers x,y for the position of the upper-left corner of the sheet, then two positive integers w,h for the width and height of the sheet.  

IMPORTANT: Here are the constraints on the dimensions:  1 <= x+w <= 4096,1<=y+h<=4096,1<=w<=4095,1<=h<=4095...in other words, a sheet should always lie within the boundry of the 4k by 4k board.

Here is an example input and output

input file:

	3
	R 0 0 5 5
	R 10 0 5 5
	B 3 2 9 2

	
Here is an ascii art example visualizing that input: 
    
	RRRRR     RRRRR
	RRRRR     RRRRR
	RRRPPBBBBBPPRRR
	RRRPPBBBBBPPRRR
	RRRRR     RRRRR
	
expected program output:
	8
	
Write a program to count the number of purple blocks given an input file.

For testing, here are some test files I generated: 

* http://codepad.org/5HtVUwCT
* http://codepad.org/2KXIrWlj
* http://codepad.org/Weyka1Pp

I am a fallible mod, but I believe the correct answer for those files should be 13064038,15822641,15666634 respectively.