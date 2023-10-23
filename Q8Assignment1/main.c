#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,flag=0;
    printf("Please enter a number\n");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("%d is a perfect square",n);
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n==i*i){
                printf("%d is a perfect square",n);
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("%d is not a perfect square",n);
    }
    return 0;
}
