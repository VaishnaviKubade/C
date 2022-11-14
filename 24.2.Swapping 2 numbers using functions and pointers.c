#include<stdio.h>
#include<conio.h>
//This doesn't swap
//Because values of a and b are limited to main section
//Using CALL BY VALUE
/*void swap(int a,int b);
void main()
{
    int a=5,b=10,temp;
    printf("Before swap: a=%d, b=%d",a,b);
    swap(a,b);
    printf("\nBefore swap: a=%d, b=%d",a,b);
    getch();
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/


//Using CALL BY REFERENCE
void swap(int *p,int *q);
void main()
{
    int a=5,b=10,temp;
    printf("Before swap: a=%d, b=%d",a,b);
    swap(&a,&b);
    printf("\nBefore swap: a=%d, b=%d",a,b);
    getch();
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
