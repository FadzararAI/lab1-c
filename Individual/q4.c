#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Questions 4 and 5
int main(void){
	int x, result;
	printf("First Equation: 3x^5 + 2x^4 + 5x^3 - x^2 + 7x-6\n");
	printf("Second Equation: ((((3x + 2)x – 5)x – 1)x + 7)x – 6\n");
	printf("Enter the number of x:\n");
	scanf("%d", &x);
	result = 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
	printf("\nEquation:\n3(%d)^5 + 2(%d)^4 - 5(%d)^3 - %d^2 + 7(%d)-6\n\n",x,x,x,x,x);
	printf("The result of the first equation is: %d\n", result);
	result = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("The result of the second equation is: %d", result);
	return 0;
}