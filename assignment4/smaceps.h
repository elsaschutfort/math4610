#ifndef MACEPS_H
#define MACEPS_H

#include <stdio.h>
#include <float.h>

float calculateMachineEpsilon() {
    float epsilon = 1.0f;
    while (1.0f + epsilon > 1.0f) {
        epsilon /= 2.0f;
    }
    return epsilon;
}

#endif
