#include "circle.h"
#include <stdio.h>

int main(int argc, char **argv) {
    float r = 11.5;
    float A = circle_area(r);
    printf("r = %.2f ==> A = %.2f\n", r, A);
    return 0;
}

