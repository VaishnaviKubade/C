#include<stdio.h>
#include<conio.h>
/*****************
Author: Vaishnavi Kubade
Purpose: Use of %u Format Specifier for reading and printing Distance
*****************/
void main()
{
    unsigned int distance;
    printf("Enter the distance between the two planets:");
    scanf("%u",&distance);
    printf("You have entered the distance as:%u",distance);
    getch();
}
