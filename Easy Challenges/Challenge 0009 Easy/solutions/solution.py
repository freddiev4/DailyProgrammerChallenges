###################################
## Python 2. Only sorts numbers. ##
###################################

# numbers list
nums = []

def show():
	print "Sorted numbers: "
	for i in nums:
		print "%g" % i,

def add(num):
	nums.append(num)

def sort(nums):
	nums.sort()

def request():
	num = 0
	print "Type a number. Write 'C' to stop."
	while True:		
		num = raw_input('> ')
		if num != 'C':
			add(float(num))
		else:
			break				

def main():
	request()
	sort(nums)
	show()

main()
