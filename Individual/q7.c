#include <stdio.h>
#include <stdlib.h>

int main(){
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
	return 0;
}