#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5;
    int *p;
    printf("Value: %d",a);
    printf("\nAddress: %u",&a);
    p=&a;
    printf("\nValue at address of a: %d",*p);
    getch();
    //a,*p,*(&a) ---->gives value ---->5
    //&a,p       ---->gives address ---->6422036
}
