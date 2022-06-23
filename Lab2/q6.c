#include <stdio.h>

void main(){
    int a,arr[5];
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&a);
    printf("\nIn octal, your number is: ");
    if(a>=0 && a<=32767){
        for(int i=0;i<=5;i++){
        arr[i] = a % 8;
        a /= 8;
        }
        for(int x=4;x>=0;x--){
        printf("%d",arr[x]);
        }
    }
    else{
        printf("Numbers outside the range!");
    }
}
