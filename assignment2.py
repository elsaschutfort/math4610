import numpy as np
import math

def norm1(lst):
    norm = 0
    for i in lst:
        norm += abs(i)
    return norm

def norm2(lst):
    norm = 0
    for i in lst:
        norm += (abs(i)) ** 2
    return math.sqrt(norm)

def normInft(lst):
    max = abs(lst[0])
    for i in lst[1:]:
        if abs(i) > max:
            max = abs(i)
    return max
        


def euclidean_distance(vector1, vector2):
    if len(vector1) == len(vector2):
        newVector = []
        for x in range(len(vector1)):
            newVector.append(vector2[x] - vector1[x])
        return norm2(newVector)
    else:
        return "Vector's must have the same dimensionality"

vector1 = [1,2,3]
vector2 = [4,5,6]
print(euclidean_distance(vector1, vector2))

 
