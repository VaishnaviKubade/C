#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[3]; //declaring an array
    marks[0]=99;
    marks[1]=100;
    marks[2]=98;
    //%u for returing an unsigned int value
    //address is always a positive int, hence use %u
    printf("Marks obtained marks[0]: %d and stored in: %u",marks[0],&marks[0]);
    printf("\nMarks obtained marks[1]: %d and stored in: %u",marks[1],&marks[1]);
    printf("\nMarks obtained marks[2]: %d and stored in: %u",marks[2],&marks[2]);
    getch();
}
