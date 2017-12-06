#include <stdio.h>
#include "temperature.h"
#include "charts.h"

void main() {
	char *titles[] = {"Milano", "Roma", "Palermo"};
	int values[3];

	values[0] = getTemperatureMilano();
	values[1] = getTemperatureRoma();
	values[2] = getTemperaturePalermo();

	printf("Temperatures:\n");
	// printf("MI: %d, RM: %d, PA: %d\n", getTemperatureMilano(), getTemperatureRoma(), getTemperaturePalermo());

	drawHistogram(titles, values, 3);
}

