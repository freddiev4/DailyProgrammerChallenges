##Solution to Challenge 0001 in Python 3
##https://github.com/mattmatheus


def solution():
    name = input("What is your name? :")
    age = input("What is your age? :")
    username = input ("What is your username? :")
    print(str("Your name is {0}, your age is {1}, your username is {2}").format(name, age, username))
    with open('outputfile.txt','a') as outfile:
        outfile.write(str("Your name is {0}, your age is {1}, your username is {2}").format(name, age, username))
    
solution()