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
