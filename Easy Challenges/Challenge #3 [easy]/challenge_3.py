SHIFT_VAL = 3  # defining the shift count
ENCRYPT_ME = "hello world"  # must be lower case

encrypted = ""

for c in ENCRYPT_ME:
    encrypted_letter = ord(c) + SHIFT_VAL
    encrypted += chr((encrypted_letter % 26)+ord("a"))

print("Plain text:", ENCRYPT_ME)

print("Encrypted text:", encrypted)
