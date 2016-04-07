#Solution by https://github.com/Ouss4

max_interval = 10
numbers_array = [1,2,2,3,4,5,6,7,8,9,10]
print("Number {} is twice in the array".format(sum(numbers_array) - (max_interval*(max_interval + 1) ) / 2))
