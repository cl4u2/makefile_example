#include <stdio.h>
#include <stdlib.h>
#include "circle.h"

int main(int argc, char **argv) {
    float ray, a;
    if(argc < 2) {
        printf("Usage: %s <ray>\n", argv[0]);
        exit(1);
    }
    ray = atof(argv[1]);
    a = circleArea(ray);
    printf("Circle Area: %.2f\n", a);
    return 0;
}
