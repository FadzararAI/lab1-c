#include <stdio.h>
#include <math.h>
int calc_func(int x){
    int result;
    result = 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
    return result;
}
int main(){
    int num;
    // 3x5 + 2x4 – 5x3 – x2 + 7x – 6
    printf("Equation: 3x^5 + 2x^4 – 5x^3 - x^2 + 7x – 6\n");
    printf("Enter the number of x: ");
    scanf("%d", &num);
    printf("The result of the equation is: %d\n", calc_func(num));
}
