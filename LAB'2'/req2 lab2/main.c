#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    int number;
    printf("Enter the number you need to check\n");
    scanf("%d", &number);

    if(number%2==0){
        printf("Number %d is even number", number);
    }
    else{
        printf("Number %d is odd number", number);
    }

    return 0;
}
