#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 5

int main()
{
    int Arr[SIZE];
    for(int i=0; i<SIZE; i++){
        printf("Please enter the element number %d ", i+1);
        scanf("%d", &Arr[i]);
    }
    int max=Arr[0], min=Arr[1];
    for(int i=0; i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(Arr[i]>Arr[j]){
                max=Arr[i];
            }
            else if (Arr[i]<min){
                min=Arr[i];
            }
        }
    }
    printf("The maximum number is %d and the minimum number is %d",max,min);
    return 0;
}
