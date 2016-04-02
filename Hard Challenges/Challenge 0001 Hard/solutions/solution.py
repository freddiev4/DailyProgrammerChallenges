class Number_Guesser(object):
	lower_bound = 1
	upper_bound = 100

	def __init__(self,lower_bound,upper_bound):
		self.lower_bound = lower_bound
		self.upper_bound = upper_bound

	def guess_and_adjust(self):
		number_of_guesses = 1
		while True:
			self.anticheat()
			my_guess = self.make_guess()
			answer = raw_input('Enter 1 if your number is higher, 2 if it\'s lower, or 3 if I was correct!\n>')
			if answer=='1':
				self.lower_bound = my_guess + 1
				number_of_guesses = number_of_guesses + 1
			elif answer=='2':
				self.upper_bound = my_guess - 1
				number_of_guesses = number_of_guesses + 1
			elif answer=='3':
				print 'Woohoooo! I guessed your number in {0} guesses!'.format(number_of_guesses)
				quit()

	def anticheat(self):
		if self.lower_bound > self.upper_bound:
			print 'You cheated! We\'re done here!'
			quit()

	def make_guess(self):
		self.current_guess = (self.upper_bound + self.lower_bound)/2
		print 'my guess is {0}'.format(self.current_guess)
		return self.current_guess

n = Number_Guesser(1,100)
n.guess_and_adjust()
