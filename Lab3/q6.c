#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("\nEnter amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax due is: $");

    if(income < 750.00f){
        printf("%.2f", income * .01);
    }
    else if(income < 2250.00f){
        printf("%.2f", 7.50f + ((income - 750.00f) * .02));
    }
    else if(income < 3750.00f){
        printf("%.2f", 37.50f + ((income - 2250.00f) * .03));
    }
    else if(income < 5250.00f){
        printf("%.2f", 82.50f + ((income - 3750.00f) * .04));
    }
    else if(income < 7000.00f){
        printf("%.2f", 142.50f + ((income - 5250.00f) * .05));
    }
    else{
        printf("%.2f", 230.00f + ((income - 7000.00f) * .06));
    }

    printf("\n\n");

    return 0;
}
