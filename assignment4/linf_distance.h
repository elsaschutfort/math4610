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
