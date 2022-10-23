#include<stdio.h>
#include<conio.h>
/***************************
Author: Vaishnavi Kubade
Purpose: To check if a number entered by the user is Even or Odd,
using if....else.... condition
***************************/
void main()
{
    //Variable Declaration
    int num;

    //Read values from the user
    printf("Enter the number to be checked as Even or Odd:");
    scanf("%d",&num);

    //Logic
    if(num==0)
        printf("\nNumber is Zero.");
    else if(num%2==0)
        printf("\n%d is an Even number.",num);
    else
        printf("\n%d is an Odd number.",num);
    getch();
}
