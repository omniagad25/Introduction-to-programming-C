#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reversed=0,remainder;
    printf("Please enter the number\n");
    scanf("%d",&num);
    while(num>0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    printf("The reversed number is %d",reversed);
    return 0;
}
