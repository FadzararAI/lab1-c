#include <stdio.h>

int main(){
    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    int square[size][size];
    for (int x = 0; x < size; x++) {
        for (int j = 0; j < size; j++) {
            square[x][j] = 0;
        }
    }
    if(size % 2 == 1){
        square[0][(int)(size/2+.5)] = 1;
        int r = 0, c = (int)(size/2+.5);
        for(int i = 2; i < size * size+1; i++){
            r -= 1;
            c += 1;
            if(r < 0){
                r += size;
            }
            if(c > size-1){
                c -= size;
            }
            if(square[r][c] != 0){
                r += 2;
                c -= 1;
                if(r > size-1){
                r -= size;
                }
                if(c < 0){
                    c += size;
                }
            }
            // printf("| r: %d ", r);
            // printf("c: %d = %d", c, i);
            square[r][c] = i;
        }
    }else{
        printf("Even number, illegal!");
        return 0;
    }
    printf("\n");
    for(int i =0; i < size ;i++){
        for(int j=0;j< size;j++){
            printf("%5d",square[i][j]);
        }
        printf("\n");
    }
}
