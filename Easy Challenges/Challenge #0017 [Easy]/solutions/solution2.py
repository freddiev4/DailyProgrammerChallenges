##############################################
## Python 2. Build triangle and reverse it. ##
##############################################

def request():
	"Request triangle's height"
	height = int(raw_input('> '))
	return height

def build(height):
	"Build normal triangle"
	x = 1
	for i in range(0, height):
		print '@' * x
		x *= 2
	return x #for reverse loop	

def reverse(height, last):
	"Build upside-down triangle"
	x = last/2	
	for i in xrange(height, 0, -1):
		print '@' * x
		x /= 2			

def main():
	try:
		print "Hello. Type the height of the triangle."
		height = request()
		last = build(height)
		print "Done. Reverse it? ENTER for yes. CTRL^C for no." 
		raw_input('> ')
		reverse(height, last)
		print "Done."
	except:
		pass
	
main()
