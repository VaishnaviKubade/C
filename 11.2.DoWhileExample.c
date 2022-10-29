#include<stdio.h>
#include<conio.h>
/*********************************************************************************************************
Author: Vaishnavi Kubade
Purpose: To add two numbers and ask to continue or not to add another set of numbers, using do while loop
*********************************************************************************************************/

void main()
{
    int a,b,sum;
    char y_n;
    do
    {
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        sum=a+b;
        printf("Sum of %d and %d is: %d",a,b,sum);
        printf("\nWould you like to find the sum of another pair of numbers? (y/n):");
        scanf(" %c",&y_n);
    }
    while(y_n=='y');
    getch();
}
