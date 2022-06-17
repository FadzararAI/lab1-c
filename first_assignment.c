#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// All-in-one
void q1(){
	char x='*';
	printf("%10c\n",x);
	printf("%9c\n",x);
	printf("%8c\n",x);
	printf("%c%6c\n",x,x);
	printf("%2c%4c\n",x,x);
	printf("%4c\n",x);
}
int q2_3(){
	const float PI = 3.14159;

	int x, radius;
	float result;

	printf("Enter the radius of the sphere:\n");
	scanf("%d",&x);

	radius = pow(x, 3);
	result = 1.33333*(PI*radius);

	printf("The volume of the sphere is: %.5f", result);
}
int q4_5(){
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
}
int q6(){
	int x, res, notes[] = {20000,10000,5000,1000};
	printf("Enter a Rupiah amount (in integer):\n");
	scanf("%d", &x);
	res = x/notes[0];
	printf("\n20,000 notes: %d\n", res);
	x = x - (res*notes[0]);
	res = x/notes[1];
	printf("10,000 notes: %d\n", res);
	x = x - (res*notes[1]);
	res = x/notes[2];
	printf("5,000 notes: %d\n", res);
	x = x - (res*notes[2]);
	res = x/notes[3];
	printf("1,000 notes: %d\n", res);
}
int q7(){
	float balance, interest, payment, month_rate;
	int months;
	printf("Enter amount of loan:\n");
	scanf("%f", &balance);

	printf("\nEnter interest rate:\n");
	scanf("%f", &interest);

	printf("\nEnter monthly payment:\n");
	scanf("%f", &payment);

	printf("Enter how many months do you want to see:\n");
	scanf("%d", &months);

	month_rate = (interest / 100.00)/12;
	for(int n=1;n<=months;n++){
		balance = (balance - payment) + (balance * month_rate);
		printf("\nBalance remaining after %d month of payment: $%.2f", n, balance);
	}
}
void main(){
	int opt;
	while(1){
		printf("\n\n#####################################\n");
		printf("# Questions: 7			    #\n");
		printf("# Book reference:		    #\n");
		printf("# K. N. King. C Programming;	    #\n");
		printf("# a Modern Approach ~Second Edition #\n");
		printf("# Programmer: Fadzar Ainurizky	    #\n");
		printf("#####################################\n\n");
		printf("[1] Question number 1\n");
		printf("[2] Question number 2 & 3\n");
		printf("[3] Question number 4 & 5\n");
		printf("[4] Question number 6\n");
		printf("[5] Question number 7\n");
		printf("[6] Exit from program\n");
		printf("Choose the options of which questions:\n");
		scanf("%d", &opt);
		printf("\n\n");
		if(opt == 1){
			printf("The answer:\n");
			q1();
		}else if(opt == 2){
			q2_3();
		}else if(opt == 3){
			q4_5();
		}else if(opt == 4){
			q6();
		}else if(opt == 5){
			q7();
		}else{
			break;
		}
	}
}
