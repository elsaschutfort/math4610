
# Define function 
def f(x):
    return x ** 3

# Define the point at which you want to find the derivative
x_value = 1.0

# Calculate the derivative using the finite difference method
def diff(func, x, h=1e-10):
    return (func(x + h) - func(x - h)) / (2 * h)


# Calculate the numerical derivative at the specified point
diff_value = diff(f, x_value)

# Print the result
print(f"Derivative at x = {x_value} is approximately {diff_value}")
