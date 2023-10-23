#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    float grade;
    printf("Please enter your name: \n");
    scanf("%s",&name);
    printf("Please enter your grade");
    scanf("%f",&grade);
    printf("Your name is %s, and your grade is %f",name, grade);
    return 0;
}
