#include <stdio.h>
void main()
{
    int arr[5][5];
    int rsum = 0,csum = 0;
    for(int i=0;i<5;i++){
        printf("Enter 5 numbers for row %d: ",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // Row sums
    for(int i=0;i<5;i++){
        printf("Row %d: ", i+1);
        for(int j=0;j<5;j++){
            rsum += arr[i][j];
        }
        printf("%d ",rsum);
        rsum = 0;
        printf("\n");
    }
    // Col sums
    for(int i=0;i<5;i++){
        printf("Col %d: ", i+1);
        for(int j=0;j<5;j++){
            csum += arr[j][i];
        }
        printf("%d ",csum);
        csum = 0;
        printf("\n");
    }
}
