#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{
    char Arr[SIZE];
    for(int i=0; i<SIZE; i++){
        printf("Please enter the element number %d ", i+1);
        scanf(" %c", &Arr[i]);
    }
    for(int i=0; i<SIZE; i++){
        printf("%c ",Arr[i]);
    }
    return 0;
}
