#include <stdio.h>
#include "dmaceps.h"

int main() {
    double epsilon = calculateMachineEpsilon();
    printf("Machine Epsilon (Double Precision): %e\n", epsilon);
    return 0;
}
