#include <stdio.h>
#include "circle.h"
#include "circumference.h"

int main(int argc, char **argv) {
    float r = 3.0;
    float res1, res2;

    res1 = circleArea(r);
    res2 = circumference(r);

    printf("%.2f %.2f\n", res1, res2);
}


