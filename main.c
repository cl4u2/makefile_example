#include <stdio.h>

#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#else
#include <time.h>
#endif

#include "circle.h"
#include "circumference.h"

int main(int argc, char **argv) {
    float r = 3.0;
    float res1, res2;
    double sec;
#ifdef HAVE_GETTIMEOFDAY
    struct timeval tv;

    gettimeofday(&tv, NULL);
    sec = tv.tv_sec;
    sec += tv.tv_usec / 1000000.0;
#else
    sec = time(NULL);
#endif

    res1 = circleArea(r);
    res2 = circumference(r);

    printf("[%.2f] %.2f %.2f\n", sec, res1, res2);
}


