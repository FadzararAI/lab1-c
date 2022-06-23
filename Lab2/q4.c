#include <stdio.h>

void main(){
    int a,b,num;
    printf("Enter a two-digit number: ");
    scanf("%2d",&num);
    a = num % 10;
    b = (num-a)/10;
    printf("\nThe reversal is: %d%d",a,b);
}
