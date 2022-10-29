#include<stdio.h>
#include<conio.h>
/*******************************************************
Author: Vaishnavi Kubade
Purpose: Print first number divisible by 117 after 1000
*******************************************************/
void main()
{
    int i;
    for(i=1000;i<=2000;i++)
    {
       if(i%117==0)
       {
           printf("%d is the first number divisible by 117 after 1000\n",i);
           break;
       }
    }
    getch();
}
