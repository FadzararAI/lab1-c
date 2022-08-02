#include <stdio.h>

int main()
{
    int score;
    printf("Input your score: ");
    scanf("%d", &score);
    switch(score/5){
        case 20: case 19:
        printf("A"); break;
        case 18: case 17:
        printf("B"); break;
        case 16: case 15:
        printf("C"); break;
        case 14: case 12: case 13:
        printf("D"); break;
        case 11: case 10: case 9: case 8: case 7: case 6: case 5: case 4: case 3: case 2: case 1: case 0:
        printf("F"); break;
    }
}
