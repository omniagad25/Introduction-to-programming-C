#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();//current time

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    int size,row,col, value;
    printf("Please enter the size of the magic box needed");
    scanf("%d",&size);
    if(size%2==0)
    {
        printf("Please enter an odd number and not even one");
        scanf("%d",&size);
    }
    row=1;
    col=(size+1)/2;
    value=1;
    do
    {
        gotoxy(col*3,row);//y3adi 3la 3 columns 3shan tlat msafat
        printf("%3d", value);
        delay(1);
        if(value%size==0)  //divisible
        {
            row++;
        }
        else
        {
            row--;
            col--;
        }

        if(row==0) row=size;//3shan elrow ykon ta7t
        if(col==0) col=size;//mn na7t elymeen
        value++;
    }
    while(value<=size*size);
    //put number 1 in the middle column
    // is the number divisible by the size? if no-> hamshi bl gmb lfo2, if yes->hamshi bl gmb lta7t
    /*col=size*size,
    x=col, y=row*/
    return 0;
}
