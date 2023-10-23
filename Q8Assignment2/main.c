#include <stdio.h>
#include <stdlib.h>

int prime(int num){
    int flag=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }

    return flag;
}

int main()
{
    int num1,num2,temp;
    printf("Please enter two integer numbers\n");
    scanf("%d %d",&num1,&num2);
    //3shan n-check elsmaller number
    if(num1>num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }
    printf("The prime numbers between them are ");
    for(int i=num1+1;i<num2;i++){
    if(prime(i)){
        printf("%d ",i);
    }
    }
    return 0;
}
