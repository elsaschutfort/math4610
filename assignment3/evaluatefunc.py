# define an x value
x_value = 1.0

# define a function that the x value will be evaluated at
def f(x):
    return x ** 3

# create a function that inputs a function and x value and returns the function at that value
def eval(f, x):
    return f(x)

# intalize a variable to hold the value when x is evaluated
result = eval(f, x_value)

# print results
print(f'The function when x = {x_value} is {result}')