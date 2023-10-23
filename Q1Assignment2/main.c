#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    return (num*num*num);

}

int main()
{
    double num;
    double c;
    printf("Please enter a number\n");
    scanf("%lf",&num);
    c=cube(num);
    printf("The cube of number %lf is %lf",num,c);
}
