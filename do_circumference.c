#include <stdlib.h>
#include <stdio.h>
#include "circumference.h"

int main(int argc, char **argv) {
    float ray, c2;

    ray = atof(argv[1]);

    c2 = circumference(ray);

    printf("La circonferenza del cerchio di raggio %.2f e' %.2f\n", ray, c2);

    return 0;
}

