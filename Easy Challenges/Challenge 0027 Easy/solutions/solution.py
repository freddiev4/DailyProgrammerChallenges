#Solution by https://github.com/Ouss4

from math import ceil

year = int(input("Enter year: "))

print("Centry : {}".format(ceil(year/100)))
print("Leap Year: {}".format("Yes" if (year % 400 == 0 or (year % 4  == 0 and year % 100 != 0)) else "No"))
