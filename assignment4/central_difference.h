#ifndef CENTRAL_DIFFERENCE_H
#define CENTRAL_DIFFERENCE_H

#include <stdio.h>
#include <math.h>

extern double a_value;

extern double h_values[];

double f(double x) {
    return 1.0 / tan(x);
}

double centralDifference(double (*function)(double), double x, double h) {
    return (function(x + h) - function(x - h)) / (2 * h);
}

double f1(double x) {
    return (sqrt(M_PI) / 2) * erf(x);
}

#endif
