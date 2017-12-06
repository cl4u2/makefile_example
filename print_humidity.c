#include <stdio.h>
#include "humidity.h"
#include "charts.h"

void main() {
	char *titles[] = {"Milano", "Roma", "Palermo"};
	int values[3];

	values[0] = getHumidityMilano();
	values[1] = getHumidityRoma();
	values[2] = getHumidityPalermo();

	printf("Humidity:\n");

	drawHistogram(titles, values, 3);
}


