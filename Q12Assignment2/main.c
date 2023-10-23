#include <stdio.h>
#include <stdlib.h>

int heaterTime(int num);

int main()
{
    int num;
    printf("Please enter the temperature\n");
    scanf("%d",&num);
    printf("The time is takes is %d\n", heaterTime(num));
    return 0;
}

int heaterTime(int num){
    int time;
    if(num>=0 && num <=30){
        time=7;
    }
    else if(num>30 && num<=60){
        time=5;
    }
    else if(num>60 && num<=90){
            time=3;
    }
    else if (num>90 && num<100){
        time=1;
    }
    else{
        return 0;
    }
    return time;
}
