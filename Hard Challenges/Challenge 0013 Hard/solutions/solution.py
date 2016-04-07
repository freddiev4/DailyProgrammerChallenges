import random

class Player(object):

	def __init__(self,player):
		self.name = player
		self.score = 0
		self.choice = []

class Game(object):

	player_one,player_two = Player('player_one'),Player('player_two')

	def gameplay(self):
		choices = ['rock','paper','scissors']
		self.player_one.choice,self.player_two.choice = random.choice(choices),random.choice(choices)
		if self.player_one.choice == self.player_two.choice:
			print 'Tie!'
		elif self.player_one.choice == 'rock' and self.player_two.choice == 'paper':
			print '{0} is the winner with {1}!'.format(self.player_one.name,self.player_one.choice)
			self.player_one.score += 1
		elif self.player_one.choice == 'paper' and self.player_two.choice == 'rock':
			print '{0} is the winner with {1}!'.format(self.player_two.name,self.player_two.choice)
			self.player_two.score += 1
		elif self.player_one.choice == 'scissors' and self.player_two.choice == 'rock':
			self.player_two.score += 1
		elif self.player_one.choice == 'scissors' and self.player_two.choice == 'paper':
			self.player_one.score += 1
		elif self.player_one.choice == 'paper' and self.player_two.choice == 'scissors':
			self.player_two.score += 1
		elif self.player_one.choice == 'rock' and self.player_two.choice == 'scissors':
			self.player_one.score += 1
		print '{0}\'s score is {1}, and {2}\'s score is {3}'.format(self.player_one.name,self.player_one.score,self.player_two.name,self.player_two.score)


g = Game()
for i in range(0,10000):
	g.gameplay()
