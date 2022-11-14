#include<stdio.h>
#include<conio.h>
void main()
{
    float n=5.6;
    float *p;
    p=&n;
    printf("Address of n: %u",&n);
    printf("\nAddress of n: %u",p);
    printf("\nValue of n OR Value at address of n: \t%0.1f \t%0.1f \t%0.1f",n,*p,*(&n));
    getch();
}
