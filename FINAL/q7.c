#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x == 0){ // just checking if input is not zero
        printf("FALSE");
        return 0;
    }
    while (x != 1) {
        if (x % 3 != 0){ // If there's a remainder it means number is not divisible by 3 thus not power of 3
            printf("FALSE");
            return 0;
        }
        x /= 3; // To reverse power is basically to divide it back
    }
    printf("TRUE");
    return 1;
}
