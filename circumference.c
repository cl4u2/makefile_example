#include "pi.h"
#include "circumference.h"

float circumference(float ray) {
    float pi = getPi();
    return 2 * pi * ray;
}

