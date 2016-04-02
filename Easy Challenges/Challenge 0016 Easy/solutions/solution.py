
"""
    Solution by: Ahmed Dhanani
    
    github: ahmeddhanani
    
    SO: http://stackoverflow.com/users/5538805/mrpycharm

"""

def ManipulateString(stringOne, stringTwo):
    
    index = len(stringOne) - 1
    while index >= 0:
        if stringOne[index] in stringTwo:
            stringOne = stringOne[ : index] + stringOne[index + 1 : ]
            
        index -= 1
            
    return stringOne
    
if __name__ == "__main__":
    text = ManipulateString("Daily Programmer", "aeiou ")
    print text
