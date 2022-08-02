#include <stdio.h>
int small(int arr[], int n){
    int min = arr[0];
    for(int i=0;i<n;++i){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
void main(){
    int size;
    printf("How many members you inputting: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter the %d numbers: ", size);
    for(int i=0;i<size;i++){
        scanf("%d", &numbers[i]);
    }
    printf("Smallest number is: %d",small(numbers, size));
}
