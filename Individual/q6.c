#include <stdio.h>
#include <stdlib.h>

int main(){
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
	return 0;
}