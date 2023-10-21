import numpy as np

def l2-norm(vector):
    sum = 0
    for x in vector:
        sum += abs(x) ** 2
    return sum



def oneNorm(vector):
    sum = 0
    for x in vector:
        sum += abs(x)
    return sum

def linf-distance(vector):
    max = vector[0]
    for x in vector[1:]:
        if abs(x) > max:
            max = abs(x)
    return max

def distance(vector1, vector2):
    distanceVector = []
    if len(vector1) == len(vector2):
        for x in range(len(vector1)):
            distanceVector.append(vector2[x] - vector1[x])
        return distanceVector
    else:
        return distanceVector

vector1 =  [3,4,10]
vector2 =  [5,6,12]

distanceVector = distance(vector1, vector2)
euclidean_distance_vector = euclidean_distance(distanceVector)
print(euclidean_distance_vector)

oneNorm_vector = oneNorm(distanceVector)
print(oneNorm_vector)

supNorm_vector = supNorm(distanceVector)
print(supNorm_vector)

