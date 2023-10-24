#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main()
{
    char str[SIZE];
   printf("Enter a string:\n");
   scanf("%[^\n]s",&str);
   for (int i = 0; str[i]!='\0'; i++) {
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("The string in Upper Case is %s", str);
   return 0;
}
