#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

int main()
{
    char Arr[SIZE];
    int count=0;
    printf("Please enter a string\n");
    scanf("%[^\n]s",&Arr);
    for(int i=0;i<SIZE && Arr[i] != '\0';i++){
        count++;
    }
    printf("The number of characters is: %d",count);

    return 0;
}
