#include <stdio.h>
#include <string.h>

void main() {
   char text[100];
   int i;
   printf("\nEnter a sentence: ");
   gets(text);
   for (i = 0; text[i]!='\0'; i++) {
      if(text[i] >= 'a' && text[i] <= 'z') {
         text[i] = text[i] - 32; // The gap is 32 between uppercase and lowercase
      }
   }
   printf("\nThe Sentence in uppercase: %s", text);
}
