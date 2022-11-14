#include<stdio.h>
#include<conio.h>
union data
{
    int id; //4 bytes
    char gender; //1 bytes
    char country[10]; //10 bytes
};
void main()
{
    union data d;
    printf("Size: %d",sizeof(d));
    getch();
}
