#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Please enter two numbers to compare between them\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("The two numbers are not equal, and %d has higher value than %d",num1,num2);
    }
    else if(num2>num1){
        printf("The two numbers are not equal, and %d has higher value than %d",num2,num1);
    }
    else{
        printf("The two numbers are equal");
    }
    return 0;
}
