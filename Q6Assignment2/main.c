#include <stdio.h>
#include <stdlib.h>


void UpperCase( char c)
{
    if(c >= 'a' && c <= 'z')
    {
        printf("%c", toupper(c));
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("Character is already Capital.");
    }
    else
    {
        printf("Not a character");
    }
}
int main()
{
    char c;

    printf("Enter any character: ");
    scanf("%c" , &c);

    UpperCase(c);
    return 0;
}
