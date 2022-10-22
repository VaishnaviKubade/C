#include<stdio.h>
#include<conio.h>
/*******************************
Author: Vaishnavi Kubade
Purpose: Use of Unary Operators
*******************************/
void main()
{
    int a,b,c,d,e,f;
    a=4;
    b=a++;
    c=a--;
    d=++a;
    e=--a;
    f=a;
    printf("a=%d,b=%d, c=%d, d=%d, e=%d, f=%d",a,b,c,d,e,f);
    //++a and --a makes that variable's value and value of a equal

    /*int i,j;
    i=9;
    j=--i;
    printf("%d,%d",i,j);*/
}
