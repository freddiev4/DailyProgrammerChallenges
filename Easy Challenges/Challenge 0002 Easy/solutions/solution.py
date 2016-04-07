#Python 3.X solution for Easy Challenge #0002
#GitHub: https://github.com/Ashkore
#https://www.reddit.com/user/Ashkoree/

#Don't requrie any current calculating for classes or job atm, so basic calculator it is.
def add():
    values = []
    while True:
        value = input("Please enter a value or leave blank when you have no more values:")
        if value != "" and numtest(value):
            value = int(value)
            values.append(value)
        elif value == "":
            if len(values) >= 2:
                Total= 0
                for value in values:
                    Total += value
                return Total
            else:
                continue
        else:
            print("Please enter a valid number")
def subtract():
    values = []
    while True:
        value = input("Please enter a value or leave blank when you have no more values:")
        if value != "" and numtest(value):
            value = int(value)
            values.append(value)
        elif value == "":
            if len(values) >= 2:
                Total= values[0]
                values.pop(0)
                for value in values:
                    Total -= value
                return Total
            else:
                continue
        else:
            print("Please enter a valid number")
def multiply():
    values = []
    while True:
        value = input("Please enter a value or leave blank when you have no more values:")
        if value != "" and numtest(value):
            value = int(value)
            values.append(value)
        elif value == "":
            if len(values) >= 2:
                Total= values[0]
                values.pop(0)
                for value in values:
                    Total = Total*value
                return Total
            else:
                continue
        else:
            print("Please enter a valid number")
def divide():
    values = []
    while True:
        value = input("Please enter a value or leave blank when you have no more values:")
        if value != "" and numtest(value):
            value = int(value)
            values.append(value)
        elif value == "":
            if len(values) >= 2:
                Total= values[0]
                values.pop(0)
                for value in values:
                    Total = Total/value
                return Total
            else:
                continue
        else:
            print("Please enter a valid number")
def numtest(numin):
    #a builtin fucntion called isnum exsists I believe, counldn't remember when making this and just decided to make my own tester
    try:
        int(numin)
        return True
    except:
        return False
Operator = None
while Operator == None:
    Operator = input("Would you like to: Add, Subtract, Multiply, Divide?")
    if Operator.lower().startswith("a"):
        value = add()
        print ("Total:"+str(value))
    elif Operator.lower().startswith("s"):
        value = subtract()
        print ("Total:"+str(value))
    elif Operator.lower().startswith("m"):
        value = multiply()
        print ("Total:"+str(value))
    elif Operator.lower().startswith("d"):
        value = divide()
        print ("Total:"+str(value))
    else:
        print ("Please choose a valid Operator")
        Operator = None


