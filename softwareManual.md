# MATH-4610 Software Manual
---
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
