#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Kindly enter the number of rows\n");
    scanf("%d",&row);
    printf("Please add the number of columns\n");
    scanf("%d",&col);
    float Arr1[row][col], Arr2[row][col],Arr3[row][col];
    printf("Please enter %d numbers in the matrix of the first array\n",row*col);
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%f",&Arr1[i][j]);

            }
    }
    printf("Please enter %d numbers in the matrix of the second array\n",row*col);
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%f",&Arr2[i][j]);
                Arr3[i][j]=Arr1[i][j]+Arr2[i][j];
            }
    }
    printf("The sum of the matrix is:");
    for(int i=0;i<row;i++){
        printf("\n");
            for(int j=0;j<col;j++){
                printf("%.2f ", Arr3[i][j]);
            }
    }
    return 0;
}
