#include <stdbool.h>
#include <stdio.h>

bool ispower3(int x){
    if (x == 0){ // just checking if input is not zero
        return false;
    }
    while (x != 1) {
        if (x % 3 != 0){ // If there's a remainder it means number is not divisible by 3 thus not power of 3
            return false;
        }
        x /= 3; // To reverse power is basically to divide it back
    }
    return true;
}
void main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if(ispower3(x)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}