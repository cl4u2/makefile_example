#include "circle.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    float r, result;
    if(argc < 2) {
        printf("Usage: %s <ray>\n", argv[0]);
        exit(1);
    }
    r = atof(argv[1]);
    result = circle_area(r);
    printf("r=%.2f A=%.2f\n", r, result);
    return 0;
}

