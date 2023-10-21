import math
a_value = 1.570796


h_values = [1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
 2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
 6.42807312e-10, 8.11130831e-10]

def f(x):
    return 1/math.tan(x)

def central(x,h, f):
    return (f(x+h) - f(x-h)) / (2 * h)

def f1(x):
    return ((math.sqrt(math.pi) / 2) * math.erf(x))

#for h in h_values:
    #print(central(a_value, h, f1))



print(central(a_value, 1.00000000e-10, f))

