#include <stdio.h>
#include <stdlib.h>

int powerTwo(int n);

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if (powerTwo(num) == 1)
      printf("%d is a power of 2\n", num);
   else
      printf("%d is not a power of 2\n", num);

    return 0;
}

int powerTwo(int n){
    if(n==0){
        return 0;
    }
    while(n!=1)
   {
      if(n%2!=0)
         return 0;
         n=n/2;
   }
   return 1;
}
