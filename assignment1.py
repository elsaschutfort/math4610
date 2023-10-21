import numpy as np


eps_single = np.finfo(np.float32).eps
print("Single precision machine eps = " + str(eps_single))

eps_double = np.finfo(np.float64).eps
print("Double precision machine eps = {}".format(eps_double))


