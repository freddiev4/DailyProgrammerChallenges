def operation():	
	op = raw_input('> ')
	return op

def calc(op):
	print '>', eval(op)

def main():	
	try:
		print "Operators: +, -, *, /, **"
		calc(operation())
	except NameError:
		print "Numbers and Operators, please."
		calc(operation())

main()
