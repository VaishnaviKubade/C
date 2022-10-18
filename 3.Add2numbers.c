#include<stdio.h>
#include<conio.h>

/****************
Author: Vaishnavi Kubade
Purpose: Reading two numbers from the user and printing their sum and average
****************/

void main()
{
    //Declaring variables with its data types
    int fn,sn,sum;
    float avg;

    //Reading two numbers from user
    printf("Enter first number:");
    scanf("%i",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    //Logic
    sum=fn+sn;
    avg=sum/2.0;
    printf("Sum is:%d",sum);
    printf("\nAverage is:%f",avg);
    getch();
}
