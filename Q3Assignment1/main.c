#include <stdio.h>
#include <stdlib.h>

int main()
{

    float fahrenheit,celsius;
    printf("Please enter the degree in celsius\n");
    scanf("%f",&celsius);
    fahrenheit= celsius*(9/5)+32;
    printf("%f in celsius is equal to %f in Fahrenheit",celsius,fahrenheit);
    return 0;
}
