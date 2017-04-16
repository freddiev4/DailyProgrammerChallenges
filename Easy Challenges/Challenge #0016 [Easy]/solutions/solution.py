<<<<<<< HEAD
=======
"""
    Solution by: Ahmed Dhanani
    
    github: ahmeddhanani
    
    SO: http://stackoverflow.com/users/5538805/mrpycharm

"""

>>>>>>> 61e5de87acb52715a1a432d5cdcb64f68e961b73
def ManipulateString(stringOne, stringTwo):
    
    index = len(stringOne) - 1
    while index >= 0:
        if stringOne[index] in stringTwo:
            stringOne = stringOne[ : index] + stringOne[index + 1 : ]
            
        index -= 1
            
    return stringOne
    
if __name__ == "__main__":
    text = ManipulateString("Daily Programmer", "aeiou ")
<<<<<<< HEAD
    print text
=======
    print text
>>>>>>> 61e5de87acb52715a1a432d5cdcb64f68e961b73
