#include <stdio.h>

int power(int x, int y){
    int num;
    num = x;
    for(int i=1;i<y;i++){
        x *= num;
    }
    return x;
}
int fact(int n){
    if (n <= 1){
    return 1;
    }
    else{
    return n * fact(n - 1);
    }
}
int main(){
    int x,n;
    printf("Prints out X^n with recursive\n");
    printf("Input number and power (x^n): ");
    scanf("%d^%d", &x, &n);
    x = power(x,n);
    printf("Recursive result: %d", fact(x));
}
