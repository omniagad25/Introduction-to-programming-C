#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space,j=0;
   for (int i=1;i <=5;i++,j=0) {
      for (space=1; space <= 5-i;space++) {
         printf("  ");
      }
      while (j!=2*i-1) {
         printf("* ");
         j++;
      }
      printf("\n");
   }
    return 0;
}
