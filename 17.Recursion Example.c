#include<stdio.h>
#include<conio.h>

int factorial(int n);

void main()
{
    int n;
    printf("Enter the number whose factorial is to be found:");
    scanf("%d",&n);
    printf("Factorial of %d is: %d",n,factorial(n));
    getch();
}

int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}

