#include <stdio.h>
#include <stdlib.h>

int multiple(int num1, int num2)
{
    return num1 % num2 == 0;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if(multiple(num1,num2)){
        printf("%d is a multiple of %d\n",num1,num2);
    }
    else{
        printf("%d is not a multiple of %d\n",num1,num2);
    }

    return 0;
}
