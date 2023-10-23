#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    float number;
    printf("Enter the number you need to check:");
    scanf("%f",&number);

     if(number==0){
        printf("The number is zero");
    }
    else if(number>0){
        printf("Number %f is positive",number);
    }
    else{
        printf("Number %f is negative", number);
    }

    return 0;

}
