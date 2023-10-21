
# inputs the increment, h, and returns the value of a specfic difference quotient
def difference_quotient(x, h, func):
    return (func(x+h) - func(x)) / h

# function that will be inputted
def f(x):
    return x ** 3

# x and h values
x_value = 1.0
h_value = 1e-5

results = difference_quotient(x_value, h_value, f)
print(f"The specfic value of the difference quotient when x = {x_value} and h = {h_value} is {results}")
