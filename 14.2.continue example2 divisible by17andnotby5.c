#include<stdio.h>
#include<conio.h>
/***********************************************************************************
Author: Vaishnavi Kubade
Purpose: To print numbers divisible by 17 from 1000 to 1500 and not divisible by 5
***********************************************************************************/
void main()
{
    int i;
    for(i=1000;i<=1500;i++)
    {
        if(i%5==0)
            continue;
        {
            if(i%17==0)
            printf("%d\n",i);
        }

    }
    getch();
}
