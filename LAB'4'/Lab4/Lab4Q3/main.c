#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    char Arr[SIZE];
    printf("Please enter the character\n");
        scanf(" %[^\n]s",&Arr);

        printf("The array is: %s\n",Arr);
    return 0;
}
