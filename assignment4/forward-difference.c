#include "forward_difference.h"

int main() {
    double x_value = 2.0;

    for (int i = 0; i < num_h_values; i++) {
        double result = forwardDifference(x_value, h_values[i], func);
        printf("h = %.10e: %.10e\n", h_values[i], result);
    }

    return 0;
}
