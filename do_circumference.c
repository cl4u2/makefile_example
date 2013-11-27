#include <stdio.h>
#include <stdlib.h>
#include "circumference.h"

int main(int argc, char **argv) {
    float ray, c;
    if(argc < 2) {
        printf("Usage: %s <ray>\n", argv[0]);
        exit(1);
    }
    ray = atof(argv[1]);
    c = circumference(ray);
    printf("Circumference: %.2f\n", c);
    return 0;
}
