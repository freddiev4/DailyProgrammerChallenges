#!/usr/bin/env python3
"""
Author: Freddie Vargus (github.com/FreddieV4)
File: post_challenges.py
Purpose: Used to pull weekly challenges from r/dailyprogrammer
"""

import re
import os
import praw
from pprint import pprint

NUM_CHALLENGES = 3

debug = False
def db(string):
	if debug:
		print("DB: ", string)


def get_current_week():
	""" Gets 3 challenges, easy, intermediate, hard
	for the current week from r/dailyprogrammer
	and stores the challenge text in directories
	named after the challenge titles
	"""

	r = praw.Reddit(user_agent="dailyprogrammer-challenges")
	sub = r.get_subreddit("dailyprogrammer")
	
	# retrieve generators for top posts
	chals = sub.get_top_from_week()
	_chals = sub.get_top_from_week()
	
	# get challenge titles & selftext
	challenge_titles = [str(x.title) for x in chals]
	challenge_text = [str(x.selftext) for x in _chals]

	# cleanup titles for directory names
	title_lst = []
	for title in challenge_titles:
		t = re.sub(r'\[([0-9\-]+)\]', '', title) # removes datestamp
	#	t = re.sub(r'[<>:\"\\\/|?*]', '', title) # removes reserved chars
		title_lst.append(t.lstrip())
	pprint(title_lst)

	# name directories after challenges
	# add challenge selftext to directories
	for i in range(NUM_CHALLENGES):
		os.system('mkdir "{}"'.format(title_lst[i]))
		f = open('challenge_text.md', 'w')
		f.write(challenge_text[i])
		f.close()
		os.system('mv challenge_text.md "{}"'.format(title_lst[i]))
		#Add a solutions directory to the new challenge directory
		os.system('mkdir solutions')
		os.system('mv solutions "{}"'.format(title_lst[i]))

	os.system("./movedirs.sh")
	#os.system("./send-data.sh")


def get_all_submissions():
	""" Gets all submissions from the entire dailyprogrammer
	subreddit and stores their titles and selftexts 
	in order to initialize the repository
	"""
	
	r = praw.Reddit(user_agent="dailyprogrammer-all")
	sub = r.search("Challenge #", subreddit="dailyprogrammer", sort="hot", limit=1000, period='all')	
	_sub = r.search("Challenge #", subreddit="dailyprogrammer", sort="hot", limit=1000, period='all')
	
	
	# get challenge titles & selftext
	challenge_titles = [catch(str(x.title)) for x in sub]
	challenge_text = [catch(str(x.selftext)) for x in _sub]

	# cleanup titles for directory names
	title_lst = []
	for title in challenge_titles:
		t = re.sub(r'\[([0-9\-\/]+)\]', '', title)
		t = re.sub(r'[<>:\"\\\/|?*]', '', title) 
		title_lst.append(t.lstrip())
	print("\nTITLES length", len(title_lst))
	print("\n")
	#pprint(title_lst)

	# name directories after challenges
	for i in range(len(challenge_titles)):
		os.system('mkdir "{}"'.format(title_lst[i]))
	
	# add challenge selftext to directories
	for i in range(len(challenge_titles)):
		f = open('challenge_text.md', 'w')
		f.write(challenge_text[i])
		f.close()
		os.system('mv challenge_text.md "{}"'.format(title_lst[i]))


def catch(data):
	""" Used to skip over any encoding errors
	when using LC for creation of titles and selftext
	lists
	"""

	try:
		print(data)
		return data
	except UnicodeEncodeError as e:	
		print("\n\n\nYOU'VE HIT THE CATCH!!\n")
		return 'trash'


if __name__ == '__main__':
	get_current_week()	
