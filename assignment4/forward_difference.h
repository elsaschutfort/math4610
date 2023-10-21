#ifndef FORWARD_DIFFERENCE_H
#define FORWARD_DIFFERENCE_H

#include <stdio.h>

double func(double x) {
    return (x - 1.0) / (x + 1.0);
}

double forwardDifference(double a, double h, double (*function)(double)) {
    return (function(a + h) - function(a)) / h;
}

double h_values[] = {
    1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
    2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
    6.42807312e-10, 8.11130831e-10
};

int num_h_values = sizeof(h_values) / sizeof(h_values[0]);

#endif
