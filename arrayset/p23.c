#include <stdio.h>
#include <stdlib.h>
void main(void){
    double temp[30][24], x, avg;
    for(int j = 0; j < 30; j++){
        for(int i = 0; i < 24; i++){
            x = (float)rand()/(float)(RAND_MAX/42.3);
            temp[j][i] = x;
        }
    }
    for(int j = 0; j < 30; j++){
        printf("Day %d\n", j+1);
        for(int i = 0; i < 24; i++){
            printf("%.2d:00: %.1f  ", i,temp[j][i]);
            avg += temp[j][i];
            if ((i + 1) % 6 == 0) {
                printf("\n");
             }
        }
        printf("Average temperature: %.1f", avg/24);
        avg = 0;
        printf("\n\n");
    }
}
