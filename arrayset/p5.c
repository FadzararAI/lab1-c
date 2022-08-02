#include <stdio.h>

void main()
{
    char msg[100], character;
    int shift;
    printf("Enter message: ");
    gets(msg);
    printf("Enter character shift: ");
    scanf("%d", &shift);
    for(int i = 0; msg[i] != '\0'; i++){
        character = msg[i];
        if(character >= 'A' && character <= 'Z'){
            character = character + shift;
            if(character > 'Z'){
                character = character - 'Z' + 'A' - 1;
            }
            msg[i] = character;
        }
    }
    printf("Encryption result: %s", msg);
}
