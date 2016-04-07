#create a separate file with the name Account.txt in this files location and type the id in the first line and password in the second line

def check(name , passw):
    fr = open('Account.txt','r')
    text = str(fr.read())
    lines = text.split("\n")
    if name == lines[0]:
        if passw == lines[1]:
            print('Welcome',name)
        else:
            print('Invalid Entry')
    else:
        print('Invalid Entry')
    fr.close()

name = input ('what is your user id? ')
passw = input ('what is your password? ')

check(name,passw)

