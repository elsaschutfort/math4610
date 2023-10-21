#include <stdio.h>
#include "l2-norm"



int main() {
    double vector[] = {1.2, -3.4, 5.6, -7.8, 9.0};
    int size = sizeof(vector) / sizeof(vector[0]);

    double result = l2Norm(vector, size);
    printf("L2-Norm: %.2lf\n", result);

    return 0;
}
