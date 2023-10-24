#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    char firstN[SIZE], secondN[SIZE];
    printf("Please enter your first name:\n");
    scanf("%s",&firstN);
    printf("Please enter your second name:\n");
    scanf("%s",&secondN);
    printf("The full name is %s %s", firstN,secondN);
    return 0;
}
