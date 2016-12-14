#include "humidity.h"
#include "chart.h"

int main(int argc, char **argv) {
    char *titles[] = {"Milano", "Roma", "Palermo"};
    int values[3];

    values[0] = humidityMilano();
    values[1] = humidityRoma();
    values[2] = humidityPalermo();

    printf("Humidity\n");
    drawHistogram(titles, values, 3);

    return 0;
}

