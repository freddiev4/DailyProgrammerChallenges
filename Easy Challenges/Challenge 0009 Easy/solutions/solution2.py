#Python 3.X solution for Easy Challenge #0009
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/
values = []
def numbers():
    while True:
            value = input("Please enter a value or leave blank when you have no more values:")
            if value != "" and value.isdigit():
                value = int(value)
                values.append(value)
            elif value == "":
                values.sort()
                break
            else:
                print("Please enter a valid number")
    print (values)
#Extra Credit
def characters():
    while True:
            value = input("Please enter a value or leave blank when you have no more values:")
            if value != "":
                values.append(value)
            else:
                values.sort()
                break
    print (values)\

numsorchars = None
while numsorchars == None:
    numsorchars = input("Would you like to sort numbers or characters?")
    if numsorchars.lower().startswith("n"):
        numbers()
    elif numsorchars.lower().startswith("c"):
        characters()
    else:
        print ("Please enter a valid choice. Numbers or characters?")
        numsorchars = None