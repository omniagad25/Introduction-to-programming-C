#include <stdio.h>
#include <stdlib.h>
#define PI 3.142

int main()
{
    float radius, area, circum;
    printf("Please enter the radius of the circle\n");
    scanf("%f", &radius);
    area= PI*radius*radius;
    circum= 2*PI*radius;
    printf("The area of the circle is %f, and the circumference of the circle is %f",area,circum);
    return 0;
}
