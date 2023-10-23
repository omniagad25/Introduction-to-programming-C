#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,flag=0;
    printf("Please enter the number\n");
    scanf("%d",&n);
    if(n==0 || n==1){
            flag=1;
        printf("%d is not a prime number",n);
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                    flag=1;
                printf("The number is not prime");
            }
            else if(flag!=1){
                flag=0;
            }
        }
    }
    if(flag==0){
        printf("The number is prime");
    }
    return 0;
}
