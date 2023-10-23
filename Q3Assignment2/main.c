#include <stdio.h>
#include <stdlib.h>


float number (float num)
{
    if (num > 0)
    {
        printf("Number %f is positive.",num);
    }
    else if (num < 0)
    {
        printf("Number %f is Negative.", num);
    }
    else
    {
        printf("Number %f is Neutral.", num);
    }
}
int main()
{
    float num;
    printf("Please enter a number: ");
    scanf("%f",&num);
    printf("%f",number(num));
    return 0;
}
