#include "temperature.h"
#include "humidity.h"
#include "chart.h"

int main(int argc, char **argv) {
    char *titles[] = {"Milano", "Roma", "Palermo"};
    int tvalues[3];
    int hvalues[3];

    tvalues[0] = temperatureMilano();
    tvalues[1] = temperatureRoma();
    tvalues[2] = temperaturePalermo();

    hvalues[0] = humidityMilano();
    hvalues[1] = humidityRoma();
    hvalues[2] = humidityPalermo();

    printf("Temperatures\n");
    drawHistogram(titles, tvalues, 3);

    printf("Humidity\n");
    drawHistogram(titles, hvalues, 3);

    return 0;
}

