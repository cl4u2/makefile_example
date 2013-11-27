#include "pi.h"
#include "circle.h"

float circleArea(float ray) {
    float pi = getPi();
    return pi * ray * ray;
}

