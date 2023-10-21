#include <stdio.h>

void upperTriangularize(float** matrix, int n) {
    for (int k = 0; k < n; k++) {
        for (int i = k + 1; i < n; i++) {
            float factor = matrix[i][k] / matrix[k][k];
            for (int j = k; j < n; j++) {
                matrix[i][j] -= factor * matrix[k][j];
            }
        }
    }
}

void backSubstitution(float** matrix, float* b, float* x, int n) {
    for (int i = n - 1; i >= 0; i--) {
        x[i] = b[i];
        for (int j = i + 1; j < n; j++) {
            x[i] -= matrix[i][j] * x[j];
        }
        x[i] /= matrix[i][i];
    }
}
