#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num,power,result;
    printf("Please enter the number:\n");
    scanf("%f",&num);
    printf("Please enter the power number\n");
    scanf("%f",&power);
    for(int i=1;i<=power;i++){
        result=num*num;
    }
    printf("The result is %f", result);
    return 0;
}
