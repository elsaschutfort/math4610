#include "smaceps.h"

int main() {
    float epsilon = calculateMachineEpsilon();
    printf("Machine Epsilon (Single Precision): %e\n", epsilon);
    return 0;
}
