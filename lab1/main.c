#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstInt=10,secondInt=3;
    float theFloat =5.5;
    char ascii='A';

    printf("(2) The character is %c and The integer number is %d and the float number is %f\n",ascii,firstInt,theFloat);
    printf("(3) The Ascii number for letter A is %d\n", ascii);
    printf("(4)10 + 3 = %d\n",firstInt+secondInt);
    printf("(5)Hexa number of 10 is %x\n", firstInt);
    printf(
           "(6) Adding: 10 + 3 = %d\nSubtracting: 10 - 3 = %d\nMultiplying: 10 * 3 = %d\nDividing: 10 / 3 = %f\n"
           ,firstInt+secondInt, firstInt-secondInt, firstInt*secondInt, (float)firstInt/secondInt
           );
    printf("(7) Quotient: 10 / 3 = %d\nRemainder of it is: %d\n", firstInt/secondInt, firstInt%secondInt );
    //Largest number among three numbers
    if(firstInt>=secondInt){
            if(firstInt>=theFloat){
        printf("The largest number is %d", firstInt);
            }
            else{
                printf("The largest number is %f", theFloat);
            }
    }
    else{
        if(secondInt>=theFloat){
            printf("The largest number is %f", secondInt);
        }
        else{
            printf("The largest number is %f", theFloat);
        }
    }
    return 0;
}
