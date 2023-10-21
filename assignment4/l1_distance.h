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
