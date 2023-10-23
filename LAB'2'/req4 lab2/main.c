#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    float grade;
    printf("Enter the student's degree\n");
    scanf("%f", &grade);
    if(grade<0 || grade >100){
        printf("Wrong grade, it should be between 0 and 100");
    }
    else if(grade>=85){
        printf("Excellent");
    }
    else if(grade>=75){
        printf("Very Good");
    }
    else if(grade>=65){
        printf("Good");
    }
    else if(grade>=50){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}
