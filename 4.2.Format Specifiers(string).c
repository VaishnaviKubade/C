#include<stdio.h>
#include<conio.h>
/***********************
Author: Vaishnavi Kubade
Purpose: To read and print a name using format specifier %s (String):Array of characters
***********************/
void main()
{
    printf("Enter your name:");
    char name[20];
    scanf("%s",&name);
    printf("Hi %s, welcome to C-Programming.",name);
    getch();
}
