#include <stdlib.h>
#include <stdio.h>
#include "circle.h"
#include "circumference.h"

int main(int argc, char **argv) {
    float ray, c1, c2;

    ray = atof(argv[1]);

    c1 = circle(ray);
    c2 = circumference(ray);

    printf("L'area del cerchio di raggio %.2f e' %.2f\n", ray, c1);
    printf("La circonferenza del cerchio di raggio %.2f e' %.2f\n", ray, c2);

    return 0;
}

