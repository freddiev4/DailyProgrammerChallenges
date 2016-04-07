# nick tucker
# written for DailyProgrammerChallenges :-)
# email: nicktucker4@gmail.com
# assumptions: file linked in challenge description is transferred to local .txt file

words_to_descramble = ('iferkna','mkeart','sleewa','edcudls','iragoge','usrlsle','nalraoci','nsdeuto','amrhat','inknsy')
with open('hard_challenge_3.txt','r') as f:
	word_list = [line.replace('\n','') for line in f.readlines()]

sorted_word_dict = {}

def unscrambler():
	for word in word_list:
		sorted_word_dict[word]=''.join(sorted(word))
	reconstructed_words = [''.join(sorted(word)) for word in words_to_descramble]
	for _ in sorted_word_dict.items():
		for word in reconstructed_words:
			if word in _:
				print _[0]

unscrambler()
