#include "chart.h"
#include "temperature.h"

int main(int argc, char **argv) {
    char *titles[] = {"Milano", "Roma", "Palermo"};
    int values[3];

    values[0] = temperatureMilano();
    values[1] = temperatureRoma();
    values[2] = temperaturePalermo();

    printf("Temperatures\n");
    drawHistogram(titles, values, 3);

    return 0;
}

