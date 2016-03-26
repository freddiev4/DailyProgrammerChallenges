#Solution by https://github.com/Ouss4

from collections import deque

numbersList = [1,2,3,4,5,6,7,8,9,10]
target = 5
listInfTarget = [n for n in sorted(numbersList,reverse=False) if n < target]

resultDeque = deque()
for elt in listInfTarget:
    if target - elt in listInfTarget:
        resultDeque.append([elt, target - elt])
        listInfTarget.pop()

if not resultDeque:
    print("Nothing")
else:
    print(resultDeque)
    
