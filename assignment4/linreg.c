// leastsquares.c
#include <stdio.h>
#include "linreg.h"

void linearLeastSquares(double x[], double y[], int n, double *slope, double *intercept) {
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_x2 = 0.0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Calculate the slope (m) and intercept (b)
    *slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    *intercept = (sum_y - (*slope) * sum_x) / n;
}


int main() {
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    double x[n], y[n];

    printf("Enter the data points as pairs of x and y values:\n");
    for (int i = 0; i < n; i++) {
        printf("Point %d: ", i + 1);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double slope, intercept;
    linearLeastSquares(x, y, n, &slope, &intercept);

    printf("Linear Least Squares Fit:\n");
    printf("Slope (m): %.4f\n", slope);
    printf("Intercept (b): %.4f\n", intercept);

    return 0;
}