#include <stdio.h>
#include <stdlib.h>

int checkEvenOdd(int num);
int main()
{
    int num;
    printf("Please enter a valid number\n");
    scanf("%d",&num);
    if(checkEvenOdd(num)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}

int checkEvenOdd(int num)
{
    int remainder= num%2;
    if(remainder==0){
        return 0;
    }
    else{
        return 1;
    }
}
