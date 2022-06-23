#include <stdio.h>

void main(){
    int d,m,y;
    printf("Enter a date: (mm/dd/yy):\n");
    scanf("%d/%d/%d", &m,&d,&y);
    if(m<10){
        printf("You entered: %d0%d%d",y,m,d);
    }else{
        printf("You entered: %d%d%d",y,m,d);
    }
}
