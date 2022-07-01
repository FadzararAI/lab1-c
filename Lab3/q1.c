#include <stdio.h>

int main()
{
    int x,i=0,x2;
    printf("Enter a number: ");
    scanf("%d", &x);
    x2=x;
    while(x!=0){
        x /= 10;
        ++i;
    }
    printf("There are %d digits of %d",i,x2);
}
