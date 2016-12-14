#include "chart.h"

void drawHistogram(char *titles[], int values[], int len) {
    int i, j;

    printf("\n");

    for(i = 0; i < len; i++) {
        printf("%10s ", titles[i]);
        for(j = 0; j < values[i]; j++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}


