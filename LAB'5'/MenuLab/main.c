#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
#ifndef Standard
#define Standard
#include <stdlib.h>

typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;

#endif

struct student{
    u8 name[50];
    u8 gender;
    u8 age;
    s32 id;
};

void display_struct_Student(struct student s);
void scan_struct_Students(struct student s[],int size);

void print_struct_Students(struct student s[],int size );
void scan_struct_Students(struct student s[],int size );
struct student students[100];
void go_exit();
void go_new();
void go_display();
void display_menu(int position);

int count=0;
int ROW =5, COL =8;
int if_extended(char c);


int main()
{
    char x[5];
    printf("%u %u %u %u",x,&x,x+1,(&x)+1);
    int position =0;
    char c=0;
    char flag='N';
    while(flag != 'Y' && flag != 'y'  ){
        system("cls"); // clear screen
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
                char k=0;
               while(27!=k){//escape
                 scan_struct_Students(students, 1);
                 k=getch();
                 if(-32==k){
                   k=getch();
                 }
                 count++;
               }
                getch();

            break;
            case 1:
                system("cls");
                //gotoxy(COL, 10 );
               // printf("Display ");
               print_struct_Students(students,count);
                getch();// ssss
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

void scan_struct_Students(struct student s[],int size ){
    for(int i=0; i<size; i++){
        printf("Enter name [%d]",count+1);
        fflush(stdin);
        fgets(s[i+count].name,50,stdin);
        printf("Enter age [%d]",count+1);
        scanf("%d",&s[i+count].age);
        fflush(stdin);
        printf("Enter ID [%d]",count+1);
        scanf("%d",&s[i+count].id);
        fflush(stdin);
        printf("Enter Gender [%d]",count+1);
        scanf(" %c",&s[i+count].gender);
        fflush(stdin);
    }

}

void print_struct_Students(struct student s[],int size ){
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++){
          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
            printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}

void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
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
