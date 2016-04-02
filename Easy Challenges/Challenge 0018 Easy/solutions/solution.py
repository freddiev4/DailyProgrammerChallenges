"""
    Solution by: Ahmed Dhanani
    
    GitHub: ahmeddhanani
    
    Stack Overflow: http://stackoverflow.com/users/5538805/mrpycharm
"""

keypad = {
    "2" : "ABCD",
    "3" : "DEF",
    "4" : "GHI",
    "5" : "JKL",
    "6" : "MNO",
    "7" : "PQRS",
    "8" : "TUV",
    "9" : "WXYZ"
}


def InKeyboard(alphabet):
    for value in keypad.values():
        if alphabet in value:
            return True
    return False
    
def GetNumericFor(alphabet):
    for key in keypad.keys():
        if alphabet in keypad[key]:
            return key

def ConvertNumber(phoneNumber):
    stringToConvert = phoneNumber[6 : ]
    stringInNumeric = ""
    print stringToConvert
    
    for alphabet in stringToConvert:
        if InKeyboard(alphabet):
            stringInNumeric += GetNumericFor(alphabet)
            
    
    stringInNumeric = stringInNumeric[ : 3] + "-" + stringInNumeric[3 : ]
    return phoneNumber[0 : 6] + stringInNumeric


if __name__ == "__main__":
    print ConvertNumber("1-800-COMCAST")
