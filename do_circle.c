#include "circle.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    float ray, c1;

    ray = atof(argv[1]);

    c1 = circle(ray);

    printf("L'area del cerchio di raggio %.2f e' %.2f\n", ray, c1);

    return 0;
}
