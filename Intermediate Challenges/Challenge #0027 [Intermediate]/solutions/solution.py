"""
    Solution by: Ahmed Dhanani
    
    github: ahmeddhanani
    
    SO: http://stackoverflow.com/users/5538805/mrpycharm

"""

import datetime

days = {
    0 : "Monday",
    1 : "Tuesday",
    2 : "Wednesday",
    3 : "Thursday",
    4 : "Friday", 
    5 : "Saturday",
    6 : "Sunday"
}

def GetSPDay(year):
    day = datetime.date(year, 3, 17).weekday()
    
    for key in days.keys():
        if key == day:
            return days[key]

def SPDayThisCentury():
    startYear = 2000
    endYear = 2099
    count = 0
    
    for year in range(startYear, endYear):
        day = datetime.date(year, 3, 17).weekday()
        
        if day == 5:
            count += 1
            
    return count
    
if __name__ == "__main__":
    year = int(raw_input("Enter year: "))
    print "Patrick's Day is on a {0}.".format(GetSPDay(year))
    print "Patrick's Day falls {0} times on Saturday this century".format(SPDayThisCentury())