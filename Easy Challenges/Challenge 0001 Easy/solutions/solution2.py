#Python 3.X solution for Easy Challenge #0001
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/

Name = None
Age = None
RedditUserName = None
while Name == None:
    Name = input("What is your name?")
while Age == None:
    Age = input("What is your age?")
    try:
        Age = int(Age)
    except:
        print("Please input a valid number")
        Age = None
while RedditUserName == None:
    RedditUserName = input("What is your reddit username?")

output = "Your name is "+Name+", you are "+str(Age)+" year(s) old, and your username is "+RedditUserName+"."
print(output)
#ExtraCredit
with open("Easy Challenge #0001.txt","a") as LogFile:
    LogFile.write(output+"\r")