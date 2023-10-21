#include "linf_norm.h"

int main() {
    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0}; // Replace with your vector
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = linfNorm(vector, size);
    printf("L∞-Distance: %.2lf\n", result);

    return 0;
}
