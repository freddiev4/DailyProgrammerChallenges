def request():
	print "Type a number"
	number = int(raw_input('> '))
	return number

def threes(number):
	while number > 1:
		if number % 3 == 0:			
			print number, '0'			
		elif number % 3 == 1:
			print number, '-1'
			number -= 1			
		elif number % 3 == 2:			
			print number, '+1'
			number += 1
		number /= 3 
	print 1

def main():
	threes(request())

main()
