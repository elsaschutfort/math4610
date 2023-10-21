#include "l1_distance.h"

int main() {
    double vector1[] = {3.0, 4.0, 10.0};
    double vector2[] = {5.0, 6.0, 12.0};
    int size = sizeof(vector1) / sizeof(vector1[0]);

    double result = l1Distance(vector1, vector2, size);
    printf("L1-Distance: %.2lf\n", result);

    return 0;
}
