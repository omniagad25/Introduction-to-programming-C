#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=fact;i<=n;i++){
        fact=n*i;
    }
    printf("The factorial of the number is %d",fact);
    return 0;
}
