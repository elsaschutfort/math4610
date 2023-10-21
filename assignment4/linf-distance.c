#include "linf_distance.h"

int main() {
    double vector1[] = {3.0, 4.0, 10.0};
    double vector2[] = {5.0, 6.0, 15.0};
    int size = sizeof(vector1) / sizeof(vector1[0]);

    double result = linfDistance(vector1, vector2, size);
    printf("L∞-Distance: %.2lf\n", result);

    return 0;
}
