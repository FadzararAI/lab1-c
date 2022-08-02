#include <stdio.h>
#include <stdbool.h>

bool arraymore(int a[], int n){
    int x[2] = {0,0};
    for(int i = 0; i<n;i++){
        if(a[i] > 0){
            x[0] += 1;
        }
        if(a[i] <= 0){
            x[1] += 1;
        }
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
    printf("Enter the elements of the array: ");
    for(int x = 0; x<amount; x++){
        scanf("%d", &numbers[x]);
    }
    if(arraymore(numbers, amount)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}
