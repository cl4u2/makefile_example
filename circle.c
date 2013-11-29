#include "pi.h"
#include "circle.h"
#include <math.h>

float circle_area(float r) {
    float pi = get_pi();
    return pow(r,2) * pi;
}
