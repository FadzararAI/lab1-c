#include <stdio.h>

void main(){
    int item,d,m,y;
    float price;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("Item:\tPrice:\tDate:\n");
    printf("%d\t$%.1f\t%d/%d/%d",item,price,m,d,y);
}
