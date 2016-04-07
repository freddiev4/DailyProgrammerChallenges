#Python 3.X solution for Easy Challenge #0003
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/
alphabet = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
def encrytpt(alphabet,string,offset):
    string = list(string.upper())
    newstring = []
    for char in string:
        try:
            spot = alphabet.index(char)
            newstring.append(alphabet[spot+offset])
        except:
            newstring.append(char)
    return "".join(map(str,newstring))

#Extra Credit
def decrypt(alphabet,string,offset):
    string = list(string.upper())
    newstring = []
    for char in string:
        try:
            spot = alphabet.index(char)
            newstring.append(alphabet[spot-offset])
        except:
            newstring.append(char)
    return "".join(map(str,newstring))

choice = None
while choice == None:
    choice = input("Would you like to encrypt or decrpyt?")
    string = input("What is the string?")
    offset = None
    while offset == None:
        offset = input("How characters would you like to offset by?")
        if offset.isdigit():
            offset = int(offset)
            if offset > 26:
                while offset > 26:
                    offset = offset/26
            if choice.lower().startswith("e"):
                newstring = encrytpt(alphabet,string,offset)
                print (newstring)
            elif choice.lower().startswith("d"):
                newstring = decrypt(alphabet,string,offset)
                print (newstring)
            else:
                print("Please choose to either decrpty or encrypt.")
                choice = None
        else:
            print ("Please enter a valid number.")
