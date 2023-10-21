## define the function for which you know the derivative
def f(x):
    return x ** 3


## define the exact derivative of the function
def exact_derivative(x):
    return 3 * (x ** 2)

## define a function to calculate the difference quotient
def diff_quotient(func, x, h):
    return (func(x + h) - func(x)) / h

## Define the x-value you want to calculate the error at
x_value = 2.0

## Create 10 refinements of the increment h
h_values = [1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
 2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
 6.42807312e-10, 8.11130831e-10]

## interate therough the h values to calculate the errors
for h in h_values:
    # Calculate the difference qutient
    diff = diff_quotient(f, x_value, h)

    # Calculate the abs errpr between teh exact derivative and the difference
    error = abs(exact_derivative(x_value) - diff)
    
    # add the error to the error array
    print(f'h = {h} and the value of a specific difference quotient is {error}')
