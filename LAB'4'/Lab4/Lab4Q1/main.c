#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

float Avg(float sum, int row, int col);

int main()
{
    float sum=0;
    int row, col;
    printf("Kindly enter the number of rows\n");
    scanf("%d",&row);
    printf("Please add the number of columns\n");
    scanf("%d",&col);
    float Arr[row][col];
    printf("Please enter %d numbers in the matrix\n",row*col);
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%f",&Arr[i][j]);
                sum=sum+Arr[i][j];
            }
    }
    printf("The average is %f",Avg(sum, row,col));

    return 0;
}

float Avg(float sum,int row, int col){

    return sum/(row*col);
}
