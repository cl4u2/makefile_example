#include <stdio.h>
#include "charts.h"

void drawHistogram(char *titles[], int values[], int nvalues) {
	int i, j, v;
	for(i = 0; i < nvalues; i++) {
		printf("%10s: ", titles[i]);
		v = values[i];
		for(j = 0; j < v; j++) {
			printf("#");
		}
		printf("\n");
	}
}  

