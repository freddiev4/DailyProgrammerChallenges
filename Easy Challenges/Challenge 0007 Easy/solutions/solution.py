#Python 3.X solution for Easy Challenge #0007
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/
alphabet = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
morase = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",".--","-..-","-.--","--.."]

def tomorase(string):
    string = list(string)
    newstring =[]
    for char in string:
        try:
            char = char.upper()
            newstring.append(morase[alphabet.index(char)]+" ")
        except:
            if char == " ":
                newstring.append("/ ")
            else:
                newstring.append("? ")
    return "".join(map(str,newstring))
def frommorase(string):
    string = string.split(" ")
    newstring = []
    for char in string:
        try:
            newstring.append(alphabet[morase.index(char)])
        except:
            if char == "/":
                newstring.append(" ")
            if char == "?":
                newstring.append("_")
    return "".join(map(str,newstring))


string = input("What is your string?")
print("Morase: "+tomorase(string))
print("Normal: "+frommorase(tomorase(string)))
