#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
    char num[SIZE];
    int count=0,i=0;
    printf("Enter a decimal number\n");
    scanf("%s",&num);
    do{
        i++;
    }
    while(num[i]!='\0' && num[i]!='.');
    printf("The count is %d", i);

    return 0;
}
