#ifndef DMACEPS_H
#define DMACEPS_H

#include <stdio.h>

double calculateMachineEpsilon() {
    double epsilon = 1.0;
    while (1.0 + epsilon > 1.0) {
        epsilon /= 2.0;
    }
    return epsilon;
}

#endif
