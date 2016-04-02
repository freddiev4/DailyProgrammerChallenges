#Python 3.X solution for Easy Challenge #0010
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/

def validate(string):
    string = list(string)
    newstring = ""
    for x in string:
        if x != " ":
            newstring+=x
    string = newstring
    if len(string) == 8:
        valid = noareacode(string)
        if valid:
            return True
    elif len(string) == 10:
        valid = noseperators(string)
        if valid:
            return True
    elif len(string) == 12:
        valid = twodash(string)
        if valid:
            return True
        valid = twodot(string)
        if valid:
            return True
    elif len(string) == 13:
        valid = areacode(string)
        if valid:
            return True
    else:
        return False
def twodash(string):
    string = list(string)
    count = 0
    if string[3] == "-" and string[7] == "-":
        for x in string:
            if x == "-":
                count+=1
        if count ==2:
            return True
def twodot(string):
    string = list(string)
    count = 0
    if string[3] == "." and string[7] == ".":
        for x in string:
            if x == ".":
                count+=1
        if count ==2:
            return True
def noseperators(string):
    string = list(string)
    for x in string:
        if not x.isdigit():
            return False
    return True
def areacode(string):
    string = list(string)
    if string[0] == "(" and string[4] == ")" and string[8] == "-":
        return True
def noareacode(string):
    string = list(string)
    if string[3] == "-":
        return True


string = input("Please input your phone number")
valid = validate(string)
if valid:
    print("valid phone number")
else:
    print("invalid phone number")