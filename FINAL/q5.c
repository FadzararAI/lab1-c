#include <stdio.h>
#include <stdbool.h>

bool arraylen(int a[], int n){
    int x[2] = {0,0};
    x[1] = n;
    for(int i = 0; i<n;i++){
            x[0] += a[i];
    }
    if(x[0] > x[1]){
        return true;
    }
    else if(x[0] < x[1]){
        return false;
    }
    else{
        return false;
    }
}
int main(){
    int amount = 0;
    printf("Enter the amount of numbers you will input: ");
    scanf("%d", &amount);
    int numbers[amount];
    size_t n = sizeof(numbers) / sizeof(int);
    printf("Enter the elements of the array: ");
    for(int x = 0; x<amount; x++){
        scanf("%d", &numbers[x]);
    }
    if(arraylen(numbers, n)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}
