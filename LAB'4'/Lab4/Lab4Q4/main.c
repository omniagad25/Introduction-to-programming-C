#include <stdio.h>
#include <stdlib.h>
#define right 77
#define end 79
#define left 75


int main()
{
    char ch;
    printf("Press any key\n");
    ch=getch();
    if(-32==ch){
        printf("Extended key");//
    }
    else{
        printf("Not extended key");
    }


    return 0;
}
