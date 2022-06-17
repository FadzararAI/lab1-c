#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Questions 2 & 3

void main(){
	const float PI = 3.14159;

	int x, radius;
	float result;

	printf("Enter the radius of the sphere:\n");
	scanf("%d",&x);

	radius = pow(x, 3);
	result = 1.333*(PI*radius);

	printf("The volume of the sphere is: %.5f", result);

}