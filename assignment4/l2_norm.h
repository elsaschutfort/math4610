#ifndef L2_NORM_H
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
