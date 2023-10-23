#include <stdio.h>
#include <stdlib.h>



void operation (double n1, double n2, char op)
{

     switch(op)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        default:
            printf("Error! operator is not correct");
    }
}
int main()
{
    double n1 , n2, rs;
    char op;
    printf("Choose an operation: ");
    scanf("%c" , &op);
    printf("Please enter a number 1: ");
    scanf("%lf" , &n1);
    printf("Please enter a number 2: ");
    scanf("%lf" , &n2);

    operation(n1,n2,op);

    return 0;
}
