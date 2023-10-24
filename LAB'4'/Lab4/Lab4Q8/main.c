#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main()
{
    char Arr[SIZE],cpy[SIZE];
    printf("Please enter a string\n");
    scanf("%[^\n]s",&Arr);
    for(int i=0;i<SIZE && Arr[i] != '\0';i++){
        cpy[i]=Arr[i];
    }
    printf("The copied array is: %s",cpy);
    return 0;
}
