def mean(vector):
    sum1 = sum(vector)
    num = len(vector)
    return sum1 / num

def sums(vector):
    return sum(vector)

def dotProduct(v1,v2):
    d = 0
    for i in range(len(v1)):
        d += v1[i] * v2[i]
    return d

def slope():
    nom = (xy - (len(x) * xMean * yMean))
    dem = (xSquare - (len(x) * (xSquare ** 2)))
    return nom / dem

def b(x,y):
    a = slope()
    return yMean - a * xMean

def vTimes(x,a):
    new2 = []
    for i in x:
        new2.append(i * a)
    return new2

def linReg(x,y):
    a = slope()
    b1 = b(x,y)
    print(vTimes(x,a)) 
    print(b1)

x = [1,2,3,4,5,10]
y = [0,1,2,3,4,5]
xy = dotProduct(x,y)
xSquare = dotProduct(x,x)
xSums = sums(x)
ySums = sums(y)
xMean = mean(x)
yMean = mean(y)

new = linReg(x,y)

