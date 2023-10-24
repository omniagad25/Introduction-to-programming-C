#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    char str[SIZE];
    int c=0,x;
    printf("Please enter the string\n");
    scanf("%[^\n]s",&str);
    /*for(int i = 0; str[i] != '\0';i++){
        for(int j=i+1;j<SIZE/2;j++){
            if(str[i]==str[j] && str[i]!=' '){
                count++;
            }

        }
         printf("The frequency is %d\n",count);
        count=1;
    }*/
     while (str[c] != '\0') {
   /** Considering characters from 'a' to 'z' only and ignoring others. */

      if (str[c] >= 'a' && str[c] <= 'z') {
         x = str[c] - 'a';
         count[x]++;
      }

      c++;
   }

   for (c = 0; c < 26; c++)
         printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
    return 0;
}
