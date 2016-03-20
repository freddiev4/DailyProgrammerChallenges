"""
    Solution by: Ahmed Dhanani
    
    github: ahmeddhanani
    
    SO: http://stackoverflow.com/users/5538805/mrpycharm

"""

import math

def PrintTriangle(height):
    
    stars = 1
    for counter in range(height):
        starString = ""
        for starCounter in range(stars):
            starString += "@"
        print starString
        
        stars *= 2
        
def RightJustifiedTriangle(height):
    
    stars = 1
    for counter in range(height):
        spaces = int(math.pow(2, height) - stars)
        starString = ""
        
        for space in range(spaces):
            starString += " "
        
        for starCounter in range(stars):
            starString += "@"
        
        print starString
        
        stars *= 2
        
if __name__ == "__main__":
    PrintTriangle(5)
    RightJustifiedTriangle(5)
