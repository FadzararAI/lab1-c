#include <stdio.h>

void main(){
    int d1,m1,y1;
    int d2,m2,y2;
    
    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    printf("\nEnter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if(y2>y1){
        printf("\n%d/%d/%d is earlier than %d/%d/%d",d1,m1,y1,d2,m2,y2);
    }
    else if(y1>y2){
        printf("\n%d/%d/%d is earlier than %d/%d/%d",d2,m2,y2,d1,m1,y1);
    }
}
