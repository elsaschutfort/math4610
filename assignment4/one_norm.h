#ifndef ONE_NORM_H
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
