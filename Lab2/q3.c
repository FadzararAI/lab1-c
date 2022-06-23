#include <stdio.h>
#include <stdlib.h>

void main(){
    int a=0,arr[4][4];
    printf("Enter the numbers from 1 to 16 (in any order):\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nRows sum: ");
    // rows sum
    for(int i=0;i<=3;i++){
        for(int x=0;x<=3;x++){
            a += arr[i][x];
        }
        printf("%d ",a);a=0;
    }
    printf("\nColumn sum: ");
    // col sum
    a=0;
    for(int i=0;i<=3;i++){
        for(int x=0;x<=3;x++){
            a += arr[x][i];
        }
        printf("%d ",a);a=0;
    }
    printf("\nDiagonal sum: ");
    // Diagonal sum
    for(int i=0;i<=3;i++){
        a += arr[i][i];
    }
    printf("%d ",a);a=0;
    for(int i=3;i>=0;i--){
        a += arr[i][i];
    }
    printf("%d", a);
}
