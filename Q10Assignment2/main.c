#include <stdio.h>
#include <stdlib.h>
int holes[] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };

int Hole(int num);

int main()
{
    int num;
    printf("Please enter a number from 0 to 9\n");
    scanf("%d",&num);
    printf("Number of holes = %d", Hole(num));

    return 0;
}

int Hole(int num){
    int holenum=0,r;
    while(num>0){
        r=num%10;
        holenum=holes[r]+holenum;
        num=num/10;
    }
    return holenum;
}
