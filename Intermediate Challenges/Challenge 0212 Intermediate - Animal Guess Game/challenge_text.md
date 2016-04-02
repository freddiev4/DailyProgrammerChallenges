#Description:

There exists a classic game which I knew by the name of "Animal". The computer would ask you to think of an animal. If would then ask a bunch of questions that could be answered with a Yes or No. It would then make a guess of what animal you are thinking of. If the computer was right the program ended with smug satisfaction. If the program was wrong it would ask you type in a specific Yes/No question about your Animal. It would then update its library of animals to include it. As it already had a bunch of yes/no questions it would just add the final one to that animal.

As you played this game it would learn. The more you played the more animals it learned. it got better. You taught this program.

For today's challenge we will implement this game.

#Input:

The program will display an intro message and then just ask a series of yes/no questions. How you implement this interface I leave the design to you. It must prompt you with questions and you must be able to answer yes/no.

#Output:

The program will have an intro message welcoming you to the game and then ask you to think of an animal and then proceed to start asking questions once you prompt you are ready.

For this challenge the exact design and text I leave for you to develop as part of the challenge. 

The computer will continue to output questions for yes/no responses. Eventually the computer will take a guess. You can then tell the computer by a yes/no if it was a correct guess. If the computer is correct you may output a success message for the computer and exit. if the computer was wrong in the guess picked you will be asked to enter your animal and a yes/no question string that would answer a "yes". The computer program will prompt for this data and you must supply it. You are teaching the program.

Again exact design and words I leave to you to design. I give a rough example below in examples.

#AI:

The requirements for this game is a learning game. Every time you play it must load contain all previous game learning. You therefore must find a way to design and implement this.

The tricky part is what questions to ask. I leave it to you and your design to develop those initial or base questions and then using the learned questions. 

#Example of Play 1:

	Welcome to Animal Guess. Please think of an Animal and type "y" to proceed --> y

	Is your animal a mammal? --> y
	Is your animal a swimmer? --> y
	Is your animal grey? --> y

	I think your animal is a grey whale. Am I correct? --> n

	Oh well. please help me learn.
	What is the name of your animal-> dolphin
	What is a unique question that answers yes for dolphin -> Does your animal have high intelligence

	Thank  you for teaching me. 

#Example of Play 2:

	Welcome to Animal Guess. Please think of an Animal and type "y" to proceed --> y

	Is your animal a mammal? --> y
	Is your animal a swimmer? --> n
	Is your animal grey? --> y

	I think your animal is an elephant. Am I correct? --> y

	It is okay to feel bad you did not stump me. I am a computer. :)
	Thank you for playing!
