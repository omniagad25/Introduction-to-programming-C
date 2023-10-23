#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float number1, number2, number3;
    printf("Enter the first number:");
    scanf("%f", &number1);
    printf("Enter the second number:");
    scanf("%f", &number2);
    printf("Enter the third number:");
    scanf("%f", &number3);

    if(number1>=number2){
            if(number1>=number3){
        printf("The largest number is %f", number1);
            }
            else{
                printf("The largest number is %f", number3);
            }
    }
    else{
        if(number2>=number3){
            printf("The largest number is %f", number2);
        }
        else{
            printf("The largest number is %f", number3);
        }
    }

    return 0;
}
