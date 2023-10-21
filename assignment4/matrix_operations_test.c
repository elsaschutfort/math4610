#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

int main() {
    int n = 10;  // Size of the square matrix
    float** A = (float**)malloc(n * sizeof(float*));
    float* b = (float*)malloc(n * sizeof(float));
    float* x = (float*)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        A[i] = (float*)malloc(n * sizeof(float));
    }

    // Create a square matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = i + j + 1.0;  // You can change this to your specific matrix
        }
    }

    // Define a vector of all 1s
    for (int i = 0; i < n; i++) {
        b[i] = 0.0;  // Initialize to 0
    }

    // Compute b = Ay
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i] += A[i][j];
        }
    }

    // Solve the linear system Ax = b
    upperTriangularize(A, n);
    backSubstitution(A, b, x, n);

    // Print the solution vector x
    printf("Solution vector x:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d = %.2f\n", i + 1, x[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    free(A);
    free(b);
    free(x);

    return 0;
}

