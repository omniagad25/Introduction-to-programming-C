#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <dir.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define HOME 71
#define END 79

int ROW =5, COL =8;
int if_extended(char c);
void go_exit();
void go_new();
void go_display();

void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
  void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void display_menu(int position);
int main()
{
    int position =0;
    char c=0;
    char flag='N';
    while(flag != 'Y' && flag != 'y'  ){
        system("cls");
        display_menu(position);
        c=getch();
        if(-32 == c ){
            c=getch();
            switch (c)
            {
                case UP:
                case LEFT:
                     position--;
                     if(position<0){
                        position=2;
                     }
                    break;
                case DOWN:
                case RIGHT:
                    position++;
                     if(position>2){
                        position=0;
                     }
                    break;
                case HOME:
                    position=0;
                    break;
                case END:
                    position=2;
                    break;


            }
        }
        else if(13 == c){
          gotoxy(COL,20);
          printf("Enter ");
            switch(position){
            case 0:
                system("cls");
                gotoxy(COL, 10 );
                printf("NEW ");
                getch();

            break;
            case 1:
                system("cls");
                gotoxy(COL, 10 );
                printf("Display ");
                getch();
            break;
            case 2:
                system("cls");
                gotoxy(COL, 10 );
                printf("Exit ");
                printf("if you Exit press y or Y \n");
                flag=getch();
            break;


            }
        }


    }
    }
int if_extended(char c){
        if(c==72){
            return 1;
        }
        else if(c==80){
            return 2;
        }
        else if(13==c) {
            return 0;
    }
}
void go_new(){
    gotoxy(COL,5);
    SetColor(4);
    printf("New");
    gotoxy(COL,7);
    SetColor(15);
    printf("display");
    gotoxy(COL,9);
    SetColor(15);
    printf("exit");
}
void go_display(){
    gotoxy(COL,5);
    SetColor(15);
    printf("New");
    gotoxy(COL,7);
    SetColor(4);
    printf("display");
    gotoxy(COL,9);
    SetColor(15);
    printf("exit");
}
void go_exit(){
gotoxy(COL,5);
    SetColor(15);
    printf("New");
    gotoxy(COL,7);
    SetColor(15);
    printf("display");
    gotoxy(COL,9);
    SetColor(4);
    printf("exit");
    gotoxy(COL,11);
    SetColor(15);

}

void display_menu(int position){
    if(position == 0){
         go_new();
    }
    else if(position == 1){
        go_display();
    }
    else if(position == 2){
        go_exit();
    }
    else{
        printf("Error");
    }
}
