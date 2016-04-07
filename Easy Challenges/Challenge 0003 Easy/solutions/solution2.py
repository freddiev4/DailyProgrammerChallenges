import string

def rot13():
	alphabet = list(string.ascii_lowercase)
	message_to_encrypt = input('Message to encrypt?\n>')
	encrypted_message = []
	for _ in str(message_to_encrypt):
		ind = alphabet.index(_)
		if ind > 13:
			encrypted_letter = alphabet[ind - 13]
			encrypted_message.append(encrypted_letter)
		else:
			encrypted_letter = alphabet[ind + 13]
			encrypted_message.append(encrypted_letter)		
	encrypted_string = ''.join(encrypted_message)
	print encrypted_string
	return encrypted_string

def decrypter(encrypted_string):
	alphabet = list(string.ascii_lowercase)
	decrypted_message = []
	for _ in encrypted_string:
		ind = alphabet.index(_)
		if ind < 13:
			decrypted_letter = alphabet[ind + 13]
			decrypted_message.append(decrypted_letter)
		else:
			decrypted_letter = alphabet[ind - 13]
			decrypted_message.append(decrypted_letter)
	decrypted_string = ''.join(decrypted_message)
	print decrypted_string

decrypter(rot13())
