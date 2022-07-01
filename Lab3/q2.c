#include <stdio.h>

void main(){
    int numbers[4];
    int max,min;
    printf("Enter four integers: ");
    for(int i=0;i<4;i++){
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];
    for(int i=0;i<4;++i){
        if(numbers[i]>max){
            max = numbers[i];
        }
        if(numbers[i]<min){
            min = numbers[i];
        }
    }
    printf("Largest number of four: %d\n",max);
    printf("Smallest number of four: %d",min);
}
