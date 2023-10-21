
def func(x):
    return (x - 1) / (x + 1)

x_value = 2.0

h_values = [1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
 2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
 6.42807312e-10, 8.11130831e-10]

def foward_quotient(a, h, func):
    return (func(a + h) - func(a)) / h

for h in h_values:
    print(foward_quotient(x_value, h, func))

