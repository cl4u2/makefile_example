#include <stdlib.h>
#include <stdio.h>
#include "circumference.h"

int main(int argc, char **argv) {
    float r, result;
    if(argc < 2) {
        printf("Usage: %s <ray>\n", argv[0]);
        exit(1);
    }
    r = atof(argv[1]);
    result = circumference(r);
    printf("r=%.2f C=%.2f\n", r, result);
    return 0;
}


