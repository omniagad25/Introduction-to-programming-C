#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Please enter three integers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1<=num2 && num1<=num3){
        printf("%d is the smallest number",num1);
    }
    else if (num2<= num1 && num2<=num3){
        printf("%d is the smallest number",num2);
    }
    else{
        printf("%d is the smallest number",num3);
    }
    return 0;
}
