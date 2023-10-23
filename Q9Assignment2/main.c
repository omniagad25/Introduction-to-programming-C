#include <stdio.h>
#include <stdlib.h>

void SwapNum(int *num1,int *num2);

int main()
{
    int num1,num2;
    printf("Please enter the first number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);
    SwapNum(&num1,&num2);
    printf("The first number is %d and the second is %d",num1,num2);
    return 0;
}

void SwapNum(int *num1,int *num2){
    int temp;
    temp= *num1;
    *num1= *num2;
    *num2=temp;
}
