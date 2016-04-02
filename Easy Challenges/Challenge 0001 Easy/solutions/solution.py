def data_parser(data):
	print 'Your name is {0}, you are {1} years old, and your username is {2}.'.format(data[0],data[1],data[2])
	if 'y' in data[3]:
		f = open('data_logger.txt','w')
		f.write('Your name is {0}, you are {1} years old, and your username is {2}.'.format(data[0],data[1],data[2]))

def data_retriever():
	save_prompt = input('Save this data to disk, or no?\n>')
	name_input = input('What\'s your name?\n>')
	age_input = input('What\'s your age?\n>')
	reddit_username_input = input('What\'s your reddit username?\n>')
	return name_input,age_input,reddit_username_input,save_prompt

data_parser(data_retriever())
