#Python 3.X solution for Easy Challenge #0005
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/
def program(username):
    print ("Hello "+username)

def login(username,password):
    validuser = False
    validpass = False

    with open("usernames.txt","r") as usernamefile:
        usernamelist = usernamefile.readlines()
        #clean up carrige returns
        for x in range(len(usernamelist)):
            usernamelist[x] = usernamelist[x].replace("\n","")
        for usernameinfile in usernamelist:
            if username == usernameinfile:
                validuser = True
                usernameindex = usernamelist.index(username)
                with open("passwords.txt","r") as passwordfile:
                    passwordlist = passwordfile.readlines()
                    #clean up carrige returns
                    for x in range(len(passwordlist)):
                        passwordlist[x] = passwordlist[x].replace("\n","")
                    if password == passwordlist[usernameindex]:
                        validpass = True
    if validuser and validpass:
        return True
    else:
        return False


username = input("What is your username?")
password = input ("What is your password?")
valid = login(username,password)
if valid:
    program(username)
else:
    print("Invalid Username or Password.")

#Example of passwords.txt
#       admin
#       username1
#       username2
#Example of usernames.txt
#       admin
#       password1
#       password2

#Even more extra credit
#good ol admin, admin because everyone needs a default admin account... right? :P
