###################################################################
## If you log in correctly, you can play an adventure-like game. ##
###################################################################

prompt = '> '
def start():
	print "Welcome to (dark) adventure. \nPress ENTER to start."
	raw_input(prompt)	
	print "You wake up in your (dark) room. You see a door, a window and a PS4."
	room()

def room():
	room_d = raw_input(prompt)

	if room_d == 'window':
		print "You peek outside your window. It is dark outside."
		room()
	elif room_d == 'ps4':
		print "Turning PS4 on... there's no power."
		room()
	elif room_d == 'door':
		print "You open the door. I wonder what\'s out there..."
		door()
	elif room_d == 'sleep':
		print "Sweet dreams."
		end()
	else:
		print "Nope. Commands: window, ps4, door, sleep."		
		room()

def door():
	door_d = raw_input(prompt)

	if door_d == 'walk outside':
		print "There\'s nothin\' but pitch black. You hear a buzz downstairs."
		downstairs()
	elif door_d == 'stay':
		print "Yeah, that\'s safer."
		end()
	else:
		print "Nope. Commands: walk outside, stay."
		door()

def downstairs():
	ds_d = raw_input(prompt)

	if ds_d == 'stay':
		print "You lazy fuck."
		end()
	elif ds_d == 'go downstairs':
		print "You see some kind of blue sparks and a window."
		final_part()
	else:
		print "Nope. Commands: stay, go downstairs."
		downstairs()

def final_part():
	final_d = raw_input(prompt)

	if final_d == 'window':
		print "Yup. Still dark."
		final_part()
	elif final_d == 'blue sparks':
		print "Woah... they're so shiny..."
		sparks()
	else:
		print "Nope. Commands: window, blue sparks."

def sparks():
	print "... maybe you can fix them... \nbut that'd mean no more blue-shiny-sparks... \nhmm..."
	sparks_d = raw_input(prompt)

	if sparks_d == 'fix':
		print "You hear a voice... \'Let there be light\' it says..."
		print "... and there's light!"
		end()
	elif sparks_d == 'nothing':
		print "You get consumed by the sparks, everything's white now..."
		print "Oh, and you are dead."
		end()
	else:
		print "Nope. Commands: nothing, fix."
		sparks()

def end():
	print "Thanks for playing!"

def access():
	file = 'access.txt'
	data = open(file)
	user = data.readline().strip()
	passw = data.readline().strip()

	print "Enter username"
	username = raw_input(prompt).strip()
	print "Enter password"
	password = raw_input(prompt).strip()
	
	if user == username and passw == password:
		start()
	else:
		print "Incorrect."

access()
