#include <stdio.h>
#include <stdlib.h>


char alphabet (char alpha)
{
    if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }
}

int main()
{

    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    ch = alphabet(ch);

    printf("%c", ch);

    return 0;
}
