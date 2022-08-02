#include <stdio.h>
#include <string.h>
char *tolowercase(char x[100]){
    for (int i = 0; x[i]!='\0'; i++) {
      if(x[i] >= 'A' && x[i] <= 'Z') {
         x[i] = x[i] + 32; // The gap is 32 between uppercase and lowercase
      }
   }
   return x;
}
void main() {
   char text[100];
   printf("\nEnter a sentence: ");
   gets(text);
   
   printf("\nThe Sentence in lowercase: %s", tolowercase(text));
}
