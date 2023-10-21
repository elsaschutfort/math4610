#ifndef BACK_DIFFERENCE_H
#define BACK_DIFFERENCE_H

#include <stdio.h>

double f(double x) {
    return x * x * x;
}

double backwardDifference(double (*function)(double), double x, double h) {
    return (function(x) - function(x - h)) / h;
}

void calculateAndPrintDerivative() {
    double x_value = 1.0;
    double h = 1e-10;

    double derivative = backwardDifference(f, x_value, h);

    printf("Derivative at x = %.1lf is approximately %.10lf\n", x_value, derivative);
}

#endif
