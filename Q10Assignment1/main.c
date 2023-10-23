#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    int number1, number2;
    printf("Please choose the operation you want to do\n");
    scanf(" %c",&operation);
    printf("Please enter the first number: ");
    scanf("%d", &number1);
    printf("Please enter the second number: ");
    scanf("%d", &number2);
    switch(operation){
    case '+':
        printf("%d + %d = %d", number1, number2, number1+number2);
        break;
    case'-':
        printf("%d - %d = %d", number1, number2, number1-number2);
        break;
    case'*':
        printf("%d * %d = %d", number1, number2, number1*number2);
        break;
    case'/':
        if(number2==0){
            printf("Math Error");
        }
        else{
        printf("%d / %d = %d", number1, number2, number1/number2);
        }
        break;
    default:
        printf("You should choose + or - or * or /");
    }
    return 0;
}
