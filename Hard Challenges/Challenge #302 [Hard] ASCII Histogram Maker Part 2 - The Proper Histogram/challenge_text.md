# Description

Most of us are familiar with the histogram chart - a representation of a frequency distribution by means of rectangles whose widths represent class intervals and whose areas are proportional to the corresponding frequencies. It is similar to a bar chart, but a histogram groups numbers into ranges. The area of the bar is the total frequency of all of the covered values in the range. 

# Input Description

You'll be given four numbers on the first line telling you the start and end of the horizontal (X) axis and the vertical (Y) axis, respectively. The next line tells you the interval for the X-axis to use (the width of the bar). Then you'll have a number on a single line telling you how many records to read. Then you'll be given the data as 2 numbers: the first is the variable, the second number is the frequency of that variable. Example:

	1 4 1 10
	2
	4
	1 3
	2 3
	3 2
	4 6

# Challenge Output

Your program should emit an ASCII histogram plotting the data according to the specification - the size of the chart and the frequency of the X-axis variables. Example:

	10
	 9
	 8
	 7
	 6
	 5
	 4    ***
	 3*** ***
	 2*** ***
	 1*** ***
	  1 2 3 4

# Challenge Input

	0 40 0 100
	8
	40
	1 56
	2 40
	3 4
	4 67
	5 34
	6 48
	7 7
	8 45
	9 50
	10 54
	11 20
	12 24
	13 44
	14 44
	15 49
	16 28
	17 94
	18 37
	19 46
	20 64
	21 100
	22 43
	23 23
	24 100
	25 15
	26 81
	27 19
	28 92
	29 9
	30 21
	31 88
	32 31
	33 55
	34 87
	35 63
	36 88
	37 76
	38 41
	39 100
	40 6
