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

<a id="l2-distance"></a>

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

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

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

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

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


<a id="Linf-Norm"></a>

**Routine Name:** 

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **__** that can be ran. 

      $ gcc -o __ __.c

**Description/Purpose:** 

**Input:** 

**Output:** 

      output code

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = linfNorm(vector, size);
    printf("L∞-Distance: %.2lf\n", result);

The output is 

      One-Norm: 38.00

**Implementation/Code:** The following is the code for ``code()``

      

<a id="Linf-Norm"></a>

**Routine Name:** 

**Author:** Elsa Schutfort 

**Language:** C 

The following line will produce a program **__** that can be ran. 

      $ gcc -o __ __.c

**Description/Purpose:** 

**Input:** 

**Output:** 

      output code

**Usage/Example:**

This function takes in the vector in the form of an array as input and returns the l2 norm of the inputted vector.

    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = linfNorm(vector, size);
    printf("L∞-Distance: %.2lf\n", result);

The output is 

      One-Norm: 38.00

**Implementation/Code:** The following is the code for ``code()``

      


