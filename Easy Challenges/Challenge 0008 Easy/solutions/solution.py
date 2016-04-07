#Python 3.X solution for Easy Challenge #0008
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/

string = " bottles of beer on the wall, take one down, pass it around."
bottles = 99
for x in range(bottles+1):
    print (str(bottles-x)+string)

#Extra Credit ??
newstring = ""
for x in range(bottles+1):
    newstring += str(bottles-x)+string
print (newstring)