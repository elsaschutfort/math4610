# MATH-4610 Software Manual
---
<a id="smaceps"></a>

**Routine Name:** smaceps <br>
**Author:** Elsa Schutfort <br>
**Language:** C <br>
The following line will produce a program **smaceps** that can be ran. <br>
``$ gcc -o smaceps smaceps.c`` <br>
**Description/Purpose:** This routine will compute the single precision float value for the machine epsilon. <br>
**Input:** There's no input for the program.
**Output:** smaceps returns the single precision value for the machine epsilon <br>
``Machine Epsilon (Single Precision): 5.960464e-08`` <br>
**Usage/Example:**

This funcyion doesn't take any arguements needed to be inputted and it returns the single point precision mach epsilon. This function can be used to analyze the behavior of a computer, and typically only needs to be ran once on a computer.

      float epsilon = calculateMachineEpsilon();
      printf("Machine Epsilon (Single Precision): %e\n", epsilon);

The output is 

      Machine Epsilon (Single Precision): 5.960464e-08

**Implementation/Code:** The following is the code for calculateMachineEpsilon()

      #ifndef MACEPS_H
      #define MACEPS_H

      #include <stdio.h>
      #include <float.h>

      float calculateMachineEpsilon() {
          float epsilon = 1.0f;
          while (1.0f + epsilon > 1.0f) {
              epsilon /= 2.0f;
          }
          return epsilon;
      }

      #endif
      
<a id="dmaceps"></a>
**Routine Name:** dmaceps

**Author:** Elsa Schutfort

**Language:** C

The following line will produce a program **dmaceps** that can be ran. 

      $ gcc -o dmaceps dmaceps.c

**Description/Purpose:** This routine will compute the double precision value for the machine epsilon.

**Input:** There's no input for the program.

**Output:** dmaceps returns the single precision value for the machine epsilon 

      Machine Epsilon (Double Precision): 1.110223e-16

**Usage/Example:**

This funcyion doesn't take any arguements needed to be inputted and it returns the double point precision mach epsilon. This function can be used to analyze the behavior of a computer, and typically only needs to be ran once on a computer.

      double epsilon = calculateMachineEpsilon();
      printf("Machine Epsilon (Double Precision): %e\n", epsilon);

The output is 

      Machine Epsilon (Double Precision): 1.110223e-16

**Implementation/Code:** The following is the code for calculateMachineEpsilon()

      #ifndef DMACEPS_H
      #define DMACEPS_H
      
      #include <stdio.h>
      
      double calculateMachineEpsilon() {
          double epsilon = 1.0;
          while (1.0 + epsilon > 1.0) {
              epsilon /= 2.0;
          }
          return epsilon;
      }
      
      #endif
      
<a id="L2-Norm"></a>
**Routine Name:** L2 Norm

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **l2-norm** that can be ran. 

      $ gcc -o l2-norm l2-norm.c`

**Description/Purpose:** This routine will compute the distance of the vector coordinate from the origin of the vector space. 
**Input:** A vector in the form of an array must be entered to compute l2-norm.

**Output:** l2-noorm calculates the distance of the vector coordinate from the origin of the vector space where the vector is the vector inputted.

      L2-Norm: 13.65

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = l2Norm(vector, size);
    printf("L2-Norm: %.2lf\n", result);

The output is 

      L2-Norm: 13.65

**Implementation/Code:** The following is the code for ``l2Norm()``

      ifndef L2_NORM_H
      #define L2_NORM_H
      
      #include <math.h>
      
      double l2Norm(double *vector, int size) {
          double sum = 0.0;
          for (int i = 0; i < size; i++) {
              sum += pow(fabs(vector[i]), 2);
          }
          return sqrt(sum);
      }
      
      #endif

<a id="l1-Norm"></a>

**Routine Name:** L1 Norm

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **l1_norm** that can be ran. 

      $ gcc -o l1_norm l1-norm.c`

**Description/Purpose:** This routine will compute the distance of the vector coordinate from the origin of the vector space. 
**Input:** A vector in the form of an array must be entered to compute l2-norm.

**Output:** l2-noorm calculates the distance of the vector coordinate from the origin of the vector space where the vector is the vector inputted.

      One-Norm: 38.00

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

    double vector[] = {1.2, -3.4, 5.6, -7.8, 20.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = oneNorm(vector, size);
    printf("One-Norm: %.2lf\n", result);

The output is 

      One-Norm: 38.00

**Implementation/Code:** The following is the code for ``oneNorm()``

      ifndef ONE_NORM_H
      #define ONE_NORM_H
      
      #include <stdio.h>
      #include <stdlib.h>
      #include <math.h>
      
      double oneNorm(double *vector, int size) {
          double sum = 0.0;
          for (int i = 0; i < size; i++) {
              sum += fabs(vector[i]);
          }
          return sum;
      }
      
      #endif

<a id="linf-norm"></a>

**Routine Name:** Linf Norm

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **linf_norm** that can be ran. 

      $ gcc -o linfNorm linf-norm.c`

**Description/Purpose:** This routine will compute the distance of the vector coordinate from the origin of the vector space. 
**Input:** A vector in the form of an array must be entered to compute l2-norm.

**Output:** linf-norm calculates the distance of the vector coordinate from the origin of the vector space where the vector is the vector inputted.

      One-Norm: 38.00

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = linfNorm(vector, size);
    printf("L∞-Distance: %.2lf\n", result);

The output is 

      One-Norm: 38.00

**Implementation/Code:** The following is the code for ``oneNorm()``

      #ifndef LINF_NORM_H
      #define LINF_NORM_H
      
      #include <stdio.h>
      #include <math.h>
      
      double linfNorm(double *vector, int size) {
          double max = fabs(vector[0]);
      
          for (int i = 1; i < size; i++) {
              double absValue = fabs(vector[i]);
              if (absValue > max) {
                  max = absValue;
              }
          }
      
          return max;
      }
      
      #endif

<a id="l2-distance"></a>

**Routine Name:** L2 Distance

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **L2 Distance** that can be ran. 

      $ gcc -o l2Distance l2-distance.c

**Description/Purpose:** Computes the length of a line segment between the two points

**Input:** The routine inputs two vectors with the same length.

**Output:** The routine outputs the sum of the distance between two vectors squared.

      L2-Distance: 3.46

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 distance of the inputted vector.

    double vector1[] = {3.0, 4.0, 10.0};
    double vector2[] = {5.0, 6.0, 12.0};
    int size = sizeof(vector1) / sizeof(vector1[0]);

    double result = l2Distance(vector1, vector2, size);
    printf("L2-Distance: %.2lf\n", result);

The output is 

      L2-Distance: 3.46

**Implementation/Code:** The following is the code for ``l2Distance()``

      #ifndef L2_DISTANCE_H
      #define L2_DISTANCE_H
      
      #include <stdio.h>
      #include <math.h>
      
      double l2Distance(double *vector1, double *vector2, int size) {
          double sum = 0.0;
      
          if (size <= 0) {
              return sum; // Return 0 for empty vectors or size mismatch
          }
      
          for (int i = 0; i < size; i++) {
              double diff = vector2[i] - vector1[i];
              sum += pow(fabs(diff), 2);
          }
      
          return sqrt(sum);
      }

      #endif
      
<a id="l1-distance"></a>

**Routine Name:** l1 Distance

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **l1-distance** that can be ran. 

      $ gcc -o l1_distance l1-distance.c

**Description/Purpose:** This routine computes the sum of the absolute vector values.

**Input:** The routine inputs two vectors of the same size in the form of arrays.

**Output:** The routine outputs the sum of the absolute vector values.

      L1-Distance: 6.00

**Usage/Example:**

This function takes in the vector in the form of two arrays as input and returns the l1 distance of the inputted vectors.

    double vector1[] = {3.0, 4.0, 10.0};
    double vector2[] = {5.0, 6.0, 12.0};
    int size = sizeof(vector1) / sizeof(vector1[0]);

    double result = l1Distance(vector1, vector2, size);
    printf("L1-Distance: %.2lf\n", result);
    
The output is 

      L1-Distance: 6.00

**Implementation/Code:** The following is the code for ``l1Distance()``

      #ifndef L1_DISTANCE_H
      #define L1_DISTANCE_H
      
      #include <stdio.h>
      #include <math.h>
      
      double l1Distance(double *vector1, double *vector2, int size) {
          double sum = 0.0;
      
          if (size <= 0) {
              return sum; // Return 0 for empty vectors or size mismatch
          }
      
          for (int i = 0; i < size; i++) {
              double diff = vector2[i] - vector1[i];
              sum += fabs(diff);
          }
      
          return sum;
      }
      
      #endif

<a id="Linf-Distance"></a>

**Routine Name:** Linf Distance

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **linf-distance** that can be ran. 

      $ gcc -o linf-distance linf-distance.c

**Description/Purpose:** This routine computes the distance between two vectors is the greatest of their differences along any coordinate dimension.

**Input:** The routine inputs two arrays of the same size.

**Output:** The routine outputs the distance between two vectors is the greatest of their differences along any coordinate dimension.

      Linf-Distance: 5.00

**Usage/Example:**

    double vector1[] = {3.0, 4.0, 10.0};
    double vector2[] = {5.0, 6.0, 15.0};
    int size = sizeof(vector1) / sizeof(vector1[0]);

    double result = linfDistance(vector1, vector2, size);
    printf("Linf-Distance: %.2lf\n", result);

The output is 

      Linf-Distance: 5.00

**Implementation/Code:** The following is the code for ``linfDistance()``

      #ifndef LINF_DISTANCE_H
      #define LINF_DISTANCE_H
      
      #include <stdio.h>
      #include <math.h>
      
      double linfDistance(double *vector1, double *vector2, int size) {
          double max = 0.0;
      
          if (size <= 0) {
              return max; // Return 0 for empty vectors or size mismatch
          }
      
          for (int i = 0; i < size; i++) {
              double diff = fabs(vector2[i] - vector1[i]);
              if (diff > max) {
                  max = diff;
              }
          }
      
          return max;
      }
      
      #endif

<a id="linreg"></a>

**Routine Name:** Linear Regression

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **__** that can be ran. 

      $ gcc -o linreg linreg.c

**Description/Purpose:** This routine computes the linear least square of two vectors that are inputted.

**Input:** The routine requires two vectors of the same size to be inputted.

**Output:** The routine outputs the linear least square which is dependent on the size and value of the vectors inputted.

      Enter the number of data points: 4
      Enter the data points as pairs of x and y values:
      Point 1: 2 5
      Point 2: 3 6
      Point 3: 4 7
      Point 4: 5 8
      Linear Least Squares Fit:
      Slope (m): 1.0000
      Intercept (b): 3.0000

**Usage/Example:**

    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x[n], y[n];

    printf("Enter the data points as pairs of x and y values:\n");
    for (int i = 0; i < n; i++) {
        printf("Point %d: ", i + 1);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double slope, intercept;
    linearLeastSquares(x, y, n, &slope, &intercept);

    printf("Linear Least Squares Fit:\n");
    printf("Slope (m): %.4f\n", slope);
    printf("Intercept (b): %.4f\n", intercept);


**Implementation/Code:** The following is the code for ``linearLeastSquares()``
      
      void linearLeastSquares(double x[], double y[], int n, double *slope, double *intercept) {
          double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_x2 = 0.0;
      
          for (int i = 0; i < n; i++) {
              sum_x += x[i];
              sum_y += y[i];
              sum_xy += x[i] * y[i];
              sum_x2 += x[i] * x[i];
          }
      
          // Calculate the slope (m) and intercept (b)
          *slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
          *intercept = (sum_y - (*slope) * sum_x) / n;
      }


<a id="forward-difference"></a>

**Routine Name:** Forward Difference

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **forward-difference** that can be ran. 

      $ gcc -o forward-difference forward-difference.c

**Description/Purpose:** The purpose of this routine is to compute the basic derivative approximatiion using a forward differnce.

**Input:** The routine inputs an x value, an h value, and a function.

**Output:** The routine outputs a basic derivative approximation for the x value in the function using the h value.

      h = 1.0000000000e-10: 2.2222224061e-01
      h = 1.2618568800e-10: 2.2222244024e-01
      h = 1.5922827900e-10: 2.2222236385e-01
      h = 2.0092330000e-10: 2.2222219791e-01
      h = 2.5353644900e-10: 2.2222221595e-01
      h = 3.1992671400e-10: 2.2222230629e-01
      h = 4.0370172600e-10: 2.2222213755e-01
      h = 5.0941380100e-10: 2.2222231382e-01
      h = 6.4280731200e-10: 2.2222222063e-01
      h = 8.1113083100e-10: 2.2222224453e-01

**Usage/Example:**

      double x_value = 2.0;

      for (int i = 0; i < num_h_values; i++) {
            double result = forwardDifference(x_value, h_values[i], func);
            printf("h = %.10e: %.10e\n", h_values[i], result);
      }
The output is 

      h = 1.0000000000e-10: 2.2222224061e-01
      h = 1.2618568800e-10: 2.2222244024e-01
      h = 1.5922827900e-10: 2.2222236385e-01
      h = 2.0092330000e-10: 2.2222219791e-01
      h = 2.5353644900e-10: 2.2222221595e-01
      h = 3.1992671400e-10: 2.2222230629e-01
      h = 4.0370172600e-10: 2.2222213755e-01
      h = 5.0941380100e-10: 2.2222231382e-01
      h = 6.4280731200e-10: 2.2222222063e-01
      h = 8.1113083100e-10: 2.2222224453e-01

**Implementation/Code:** The following is the code for ``forwardDifference()``

      #ifndef FORWARD_DIFFERENCE_H
      #define FORWARD_DIFFERENCE_H
      
      #include <stdio.h>
      
      double func(double x) {
          return (x - 1.0) / (x + 1.0);
      }
      
      double forwardDifference(double a, double h, double (*function)(double)) {
          return (function(a + h) - function(a)) / h;
      }
      
      double h_values[] = {
          1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
          2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
          6.42807312e-10, 8.11130831e-10
      };
      
      int num_h_values = sizeof(h_values) / sizeof(h_values[0]);
      
      #endif
            

<a id="back-difference"></a>

**Routine Name:** Backward Difference

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **back-difference** that can be ran. 

      $ gcc -o back-difference back-difference.c

**Description/Purpose:** This routines purpose is to compute the basic derivative approximation using backward substituion.

**Input:** The routine inputs a function, x value, and h value.

**Output:** The routine outputs a approximation for the derivative for the x value on the function.

      Derivative at x = 1.0 is approximately 3.0000002482

**Usage/Example:**

      double f(double x) {
          return x * x * x;
      }
      double x_value = 1.0;
      double h = 1e-10;
      
      double derivative = backwardDifference(f, x_value, h);
      
      printf("Derivative at x = %.1lf is approximately %.10lf\n",        x_value, derivative);

The output is 

      Derivative at x = 1.0 is approximately 3.0000002482

**Implementation/Code:** The following is the code for ``backwardDifference()``

      double backwardDifference(double (*function)(double), double x, double h) {
          return (function(x) - function(x - h)) / h;
      }

<a id="central-difference"></a>

**Routine Name:** Central Difference

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **__** that can be ran. 

      $ gcc -o central-difference central-difference.c

**Description/Purpose:** The purpose of this routine is to compute the approximation of the derivative of a function at a given point using a given h value.

**Input:** The routine inputs a function, x value, and h value.

**Output:** The routine outputs the approximation of the derivative of the function at the x value inputted.

      Central Difference at a = 1.57079600 with h = 1.00000000e-10: -1.0000000827

**Usage/Example:**

      double a_value = 1.570796;
      
      double h_values[] = {
          1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
          2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
          6.42807312e-10, 8.11130831e-10
      };
      double result = centralDifference(f, a_value, 1.00000000e-10);
      printf("Central Difference at a = %.8lf with h = 1.00000000e-10: %.10lf\n", a_value, result);

The output is 

      Central Difference at a = 1.57079600 with h = 1.00000000e-10: -1.0000000827

**Implementation/Code:** The following is the code for ``centralDifference()``

      #ifndef CENTRAL_DIFFERENCE_H
      #define CENTRAL_DIFFERENCE_H
      
      #include <stdio.h>
      #include <math.h>
      
      extern double a_value;
      
      extern double h_values[];
      
      double f(double x) {
          return 1.0 / tan(x);
      }
      
      double centralDifference(double (*function)(double), double x, double h) {
          return (function(x + h) - function(x - h)) / (2 * h);
      }
      
      double f1(double x) {
          return (sqrt(M_PI) / 2) * erf(x);
      }
      
      #endif

<a id="back-substitution"></a>

**Routine Name:** Back Substitution

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** This routine solves a system of linear equations. 

**Input:** the length of the upper triangular matrix, upper triangular matrix, and the right-hand side vector.

**Output:** The solution to the system of equations created by the matrix and vector.

**Usage/Example:** The usage is relatively simple, input the length of the matrix, an upper triangular matrix, and the corresponding right-hand side vector.

**Implemention/Code:** 


``def backsub(N, Y, U):``
    X = [0 for x in range(N)]

    for i in range(N-1, -1, -1):
        s = Y[i]
        for j in range(N, i, -1):
            s -= U[i][j-1] * X[j-1]
        try:
            X[i] = s / U[i][i]
        except:
            X[i] = 0
    return X

<a id="forward-substitution"></a>

**Routine Name:** Forward Substituion 

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The purpose of the routine is to solve a system of equations with a lower triangular matrix.

**Input:** Lower triangular matrix and the result vector

**Output:** the solution

**Usage:** Input the lower triangular matrix and the right-hand side vector.

**Implementation/Code:**


``def forwardsub(L, b):``
    n = len(b)
    x = [0] * n

    for i in range(n):
        x[i] = b[i] / L[i][i]
        for j in range(i+1, n):
            b[j] -= L[j][i] * x[i]
    
    return x

<a id="guassian-elimination"></a>

**Routine Name:** Guassian Elimination

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The purpose of this routine is to solve systems of linear equations.

**Input:** A matrix

**Output:** The solution to the system of equations created by the matrix and vector.

**Usage:** Input a matrix.

**Implementation/Code:**

def gaussian(A):
    f = elimination(A)
    if f != -1:
       return
    
    backsub(A)

def elimination(A):
    for k in range(N):
       
        i_max = k
        v_max = A[i_max][k]
 
        for i in range(k + 1, N):
            if (abs(A[i][k]) > v_max):
                v_max = A[i][k]
                i_max = i
 

        if not A[k][i_max]:
            return k
        
        if (i_max != k):
            swap_row(A, k, i_max)
 
        for i in range(k + 1, N):
 

            f = A[i][k]/A[k][k]
 

            for j in range(k + 1, N + 1):
                A[i][j] -= A[k][j]*f
 
            A[i][k] = 0
 

    return -1



def swap_row(A, i, j):
 
    for k in range(N + 1):
 
        temp = A[i][k]
        A[i][k] = A[j][k]
        A[j][k] = temp

def backsub(mat):
 
    x = [None for _ in range(N)]
 
 
    for i in range(N-1, -1, -1):
 
        x[i] = mat[i][N]
 
        for j in range(i + 1, N):

            x[i] -= mat[i][j]*x[j]
 
        x[i] = (x[i]/mat[i][i])
 
    print("\nSolution for the system:")
    for i in range(N):
        print("{:.8f}".format(x[i]))

<a id="matrix-vector"></a>

**Routine Name:** Matrix Vector Multiplier

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The purpose of this routine is to determine the dot product of two vectors.

**Input:** Inputs a matrix and a vector.

**Output:** Outputs the dot product of the inputted matrix and vector.

**Usage/Example:** 

      A = [
      [1,2],
      [3,4]
      ]
      x = [2,3]

      Ax = 8 18

**Implementation/Code:**

class MatrixVectorMultiplier:
    def __init__(self, n=None):
        self.n = n

    def multiply(self, A, y):
        if self.n is not None:
            if len(A) != self.n or any(len(row) != self.n for row in A):
                raise ValueError("Matrix A must be of size n x n.")
            if len(y) != self.n:
                raise ValueError("Vector y must have length n.")
        else:
            self.n = len(A)

        if len(A[0]) != len(y):
            raise ValueError("Matrix A and vector y dimensions are not compatible for multiplication.")

        b = [0] * self.n

        for i in range(self.n):
            for j in range(self.n):
                b[i] += A[i][j] * y[j]

        return b

<a id="LU-factorization"></a>

**Routine Name:** LU factorization

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** This routine computes the lower triangular and upper triangular matrices of a square matrix.

**Input:** Inputs a matrix

**Output:** The lower triangular and lower triangular matrices of the matrix inputted.

**Usage/Example:** Input a matrix.

**Implementation/Code:**

``def lu(A):
    n = len(A)
    U = [row[:] for row in A]
    L = [[0] * n for _ in range(n)]


    for i in range(n):
        L[i][i] = 1.0 

        for j in range(i + 1, n):
            factor = U[j][i] / U[i][i]
            L[j][i] = factor
            for k in range(i, n):
                U[j][k] -= factor * U[i][k]
    return L,U
``

<a id="fixed-point"></a>

**Routine Name:** Fixed Point Iteration

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** This routine approximates the root of a single-variable function.

**Input:** A guess for the fixed point, the function in which the fixed point is sought, the derivative of the function, a function that adds x to the function in which the fixed point is sought, and the tolerance.

**Output:** The estimated fixed point

**Usage/Example:** To use a fixed point, the user must define a function and choose an initial guess.

**Implementation/Code:** 

``def fixedpoint(x0, g, gPrime, f, tol):``
    if gPrime(x0) > 1:
        return
    
    max = 5
    i = 0
    if gPrime(x0) < 1:
        while f(x0) > tol or max > i:
            temp = x0
            x0 = g(temp)
            print("x = " + str(x0) + " g(x) = " + str(g(x0)))
            i += 1
        return x0
    print("An error occurred")

<a id="bisection"></a>

**Routine Name:** Bisection Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** This routine approximates the root of a given equation by repeatedly dividing an interval.

**Input:** The start of the interval, the end of the interval, and the function.

**Output:** An approximation of a root of the given function.

**Usage/Example:** Input an interval and a function.

**Implementation/Code:**

``def bisection(a, b, f, tol=0.0001):``
    max = 20
    i = 0
    error = 10 * tol
    fa = f(a)
    fb = f(b)
    if (fa < 0 and fb > 0):

        while error > tol and i < max:
            c = (a + b) / 2
            fc = f(c)
            if (fa * fb) < 0:
                b = c
                fb = fc
            else:
                a = c
                fa = fc
            error = b - a
            i += 1

        return c
    return 

<a id="secant"></a>

**Routine Name:** Secant Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The purpose of the routine is to approximate a root of a function.

**Input:** An interval where the real root of the equation lies and the equation.

**Output:** An approximate root of the equation.

**Usage/Example:** Input a start and end of an interval where a root of the equation lies and the equation.

**Implementation/Code:** 

``def secant(x0, x1, error=0.0001, n=100):``
    s = 1
    condition = True
    while condition:
        if f(x0) == f(x1):
            break
        x2 = x0 - (x1 - x0) * f(x0) / (f(x1) - f(x0))
        x0 = x1
        x1 = x2
        s += 1

        if s > n:
            break

        condition = abs(f(x2)) > error
    return x2

<a id="hybrid"></a>

**Routine Name:** Hybrid Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** Uses the bisection method to narrow down the location of the root and then uses the secant method to narrow down the root location at a faster rate.

**Input:** Input the function along with the intervals for both the Bisection Method and the Secant Method.

**Output:** An approximate root of the function.

**Implementation/Code:** 

``def hybrid(a, b, x0, x1, f):``
    rootApprox = bisection(a, b, f)
    if rootApprox is not None:
        rootApprox = secant(x0, x1)
    return rootApprox

<a id="power-method"></a>

**Routine Name:** Power Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The routine uses the power method to compute the largest eigenvalue of a square matrix.

**Input:** A matrix and a guess of the largest eigenvector.

**Output:** The largest eigenvalue of the inputted matrix.

**Usage/Example:** Input a matrix and a guess of the largest eigenvector.

**Implementation/Usage:** 

``def power(A, v, maxiter=50, tol=.00006):``
    v1 = norm(v)
    error = v1
    for i in range(maxiter):
        Av = [dot(row, v1) for row in A]
        eigenvalue = dot(v1, Av)
        print(eigenvalue)
        v1 = norm(Av)
        error -= v1
        if error < tol:
            break
        else:
            error = v1
    return eigenvalue

<a id="inverse-power-method"></a>

**Routine Name:**  Inverse Power Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** The routine uses the power method to compute the smallest eigenvalue of a square matrix.

**Input:** A matrix and an approximate smallest eigenvector.

**Output:** An approximation of the smallest eigenvalue.

**Implementation/Code:**

``def inversePowerMethod(A, v0, maxiter=10, tol=0.001):``
    size = len(A)
    L, U = lu_factorization(A)

    for k in range(maxiter):
        y = solve(L, v0)
        x = solve(U, y)

        v_new = [xi / norm(x) for xi in x]
        Av = [dot(row, v_new) for row in A]
        error = sum((x1 - x2) ** 2 for x1, x2 in zip(v_new, v0))

        if error < tol:
            break

        v0 = v_new
    
    eigenvalue = dot(v_new, Av)
    return eigenvalue
    
<a id="shifted-inverse-power-method"></a>

**Routine Name:** Shifted Inverse Power Method

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** Computes the eigenvalues between the smallest and largest eigenvalues of a matrix.

**Input:** A matrix and a guess of a eigenvector

**Output:** An eigenvalue between the smallest and largest eigenvalue

**Implementation/Code:**

``def shiftedInverse(A, v0, s, tol, maxiter):``
    size = len(A)

    for i in range(maxiter):
        id_matrix = I(size, s)
        As = subtract(A, id_matrix)
        y = solve(As, v0)
        x = solve(As, y)
        last = norm(v0)
        v0 = x
        normV = norm(v0)
        s = rayleigh(As, v0)
        error = normV - last
        if error < tol:
            break
    
    return s
    
<a id="power-method-partitions"></a>

**Routine Name:** Power Method with Partitions

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** Uses partitions of an interval defined by the smallest and largest eigenvalues of a matrix, then uses the power method to compute the location of the next eigenvalue.

**Input:** A matrix, a guess of an eigenvector, and the number of partitions.

**Output:** The eigenvalues found

**Implementation/Code:**

``def partition_and_power(A, v0, num_partitions, maxiter, tol):``
    smallest_eigenvalue = inversePowerMethod(A,v0)

    largest_eigenvalue = power(A,v0)

    intervals = np.linspace(smallest_eigenvalue, largest_eigenvalue, num_partitions + 1)

    results = []
    for i in range(num_partitions):
        interval_start = intervals[i]
        interval_end = intervals[i + 1]

        adjusted_A = A - np.identity(A.shape[0]) * interval_start
        eigenvalue, eigenvector = power(adjusted_A, v0, maxiter, tol)

        eigenvalue += interval_start

        results.append((eigenvalue, eigenvector))

    return results
    
<a id="jacobi"></a>

**Routine Name:** Jacobi Iteration

**Author:** Elsa Schutfort 

**Language:** Python

**Description/Purpose:** Computes the approximate solutions for linear systems.

**Input:** A matrix, a corresponding right-hand side vector, and a guess of the solution. 

**Output:** An approximate solution to the linear systems.

**Implementation/Code:**

``def jacobi(A, b, x0, tol=0.0001, N=100):``
    k = 1
    x = x0.copy()
    n = len(A)
    while k <= N:
        for i in range(n):
            sum1 = sum(-A[i][j] * x0[j] for j in range(n) if j != i)
            sum2 = sum1 + b[i]
            x[i] = (1 / A[i][i]) * sum2
        if vector_norm([x[i] - x0[i] for i in range(n)]) < tol:
            return x

        k += 1
        x0 = x.copy()
    return x
    
<a id="guass-siedel"></a>

**Routine Name:** Guass-Siedel

**Author:** Elsa Schutfort

**Language:** Python

**Description/Purpose:** Computes an approximation for linear systems of equations.

**Input:** A matrix, a corresponding right-hand side vector, and a guess of the solution. 

**Output:** An approximate solution to the linear systems.

**Implementation/Code:** 

``def gaussSeidel(A, x0, b, N=100, tol=0.0001):``
    n = len(A)
    k = 1
    x = [0 for x in x0]
    while k <= N:
        for i in range(n):
            sum1 = sum(A[i][j] * x[j] for j in range(i))
            sum2 = sum(A[i][j] * x0[j] for j in range(i + 1, n))
            x[i] = (1 / A[i][i]) * (-sum1 - sum2 + b[i])
        if norm([x[i] - x0[i] for i in range(n)]) < tol:
            return x
        k += 1
        x0 = x.copy()
    return x
