#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    int sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of numbers from 1 to 10 is: %d",sum);
    getch();
}
