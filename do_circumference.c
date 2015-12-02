#include "circumference.h"
#include <stdio.h>

int main(int argc, char **argv) {
    float r = 12.0;
    float C = circle_circumference(r);
    printf("r = %.2f ==> C = %.2f\n", r, C);
    return 0;
}

