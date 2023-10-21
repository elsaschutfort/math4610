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

      
