# @Author: Ouss4
# @Github : github.com/Ouss4
# @Date: 29/04/2016
# @Description: Solution to Easy #261.

from math import sqrt

def getLines(square, N):
    return [square[i:i + N] for i in range(0, len(square), N)]

def getColumns(square, N):
    return getLines([square[i+j] for j in range(0,N) for i in range(0, len(square), N)], N)

def getStDiagonal(square, N):
    return [square[i+N*i] for i in range(0,N)]

def getNdDiagonal(square, N):
    return [square[N*i+(N-i-1)] for i in range(0, N)]
    
def isMagic(square):
    N = int(sqrt(len(square)))
    M = N*(N**2+1) / 2

    for line in getLines(square, N):
        if sum(line) != M:
            return False
    for column in getColumns(square, N):
        if sum(column) != M:
            return False
    if sum(getStDiagonal(square, N)) != M:
        return False

    if sum(getNdDiagonal(square, N)) != M:
        return False

    return True

print(isMagic([16,2,3,13,5,11,10,8,9,7,6,12,4,14,15,1]))
