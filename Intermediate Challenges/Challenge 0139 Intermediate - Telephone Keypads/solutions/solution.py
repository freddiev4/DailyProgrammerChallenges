# @Author: Ouss4
# @Github: github.com/Ouss4
# @Date: 14/05/2016
# @Description: Solution for Intermediate 0139.             

def T9ToText(text):
    """
        1) Take one element (They are all the same ex. 7777 = 7).
        2) Take times the number was pressed (ex. 7777 = 4).
        3) Translate it (ex. 7777: from (1) & (2) => translator[7][4] = 's')
    """
    translator = {2:'abc', 3:'def', 4:'ghi', 5:'jkl',
                  6:'mno', 7:'pqrs', 8:'tuv', 9:'wxyz'}
    
    return "".join([translator[int(i[0])][len(i) - 1] for i in text.split()])

theWord = T9ToText("7777 666 555 3")
fileName = "dict.txt"

with open(fileName, "r") as inputFile:
    # Read the file and remove the last \n
    fileContent = inputFile.read().split("\n")[:-1] 

    for text in fileContent:
        if text.lower().startswith(theWord):
            print(text)
            
