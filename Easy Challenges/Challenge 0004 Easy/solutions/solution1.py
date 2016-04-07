import random

def passgen(num, len):
    for x in range(num):
        print('Password ',x+1,' : ',random.randrange(1000,10**len))

n=int(input('How many pass do you want to generate? '))
l=int(input('What should be the length of the password'))
passgen(n, l)