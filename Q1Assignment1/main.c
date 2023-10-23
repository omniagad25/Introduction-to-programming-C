#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2,output;
    printf("Enter two integer numbers:\n");
    scanf("%d ",&number1);
    scanf("%d",&number2);
    output=((number1+number2)*3) - 10;
    printf("((%d + %d) * 3) – 10= %d",number1,number2,output);
    return 0;
}
