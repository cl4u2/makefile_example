#include "circle.h"
#include "circumference.h"
#include <stdio.h>

int main(int argc, char **argv) {
    float r = 12.7;
    float A = circle_area(r);
    float C = circle_circumference(r);

    printf("r = %.2f ==> A = %.2f, C = %.2f\n", r, A, C);

    return 0;
}

