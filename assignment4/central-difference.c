#include "central_difference.h"

double a_value = 1.570796;

double h_values[] = {
    1.00000000e-10, 1.26185688e-10, 1.59228279e-10, 2.00923300e-10,
    2.53536449e-10, 3.19926714e-10, 4.03701726e-10, 5.09413801e-10,
    6.42807312e-10, 8.11130831e-10
};

int main() {
    double result = centralDifference(f, a_value, 1.00000000e-10);
    printf("Central Difference at a = %.8lf with h = 1.00000000e-10: %.10lf\n", a_value, result);

    return 0;
}
