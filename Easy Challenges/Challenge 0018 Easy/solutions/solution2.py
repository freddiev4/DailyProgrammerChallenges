###########################################
## Python 2. Uses multi-key-dict module. ##
###########################################

from multi_key_dict import multi_key_dict

two = three = four = five = six = seven = eight = nine = multi_key_dict()

two['A', 'B', 'C'] = '2'
three['D', 'E', 'F'] = '3'
four['G', 'H', 'I'] = '4'
five['J','K' 'L'] = '5'
six['M', 'N', 'O'] = '6'
seven['P', 'Q', 'R', 'S'] = '7'
eight['T', 'U', 'V'] = '8'
nine['W','X','Y', 'Z'] = '9'

def request():
	print "Enter telephone number (7 letters)"
	number = raw_input('1-800-')
	return number.upper()

def decrypt(number):
	d = '1-800-'
	for i in range(0,7):
		d = d +  two[number[i]]
		if i == 2: #add dash
			d = d + '-'

	return d

def main():
	try:
		number = request()
		decrypted = decrypt(number)
		print "Decrypted: %s" % decrypted
	except:
		pass
main()
