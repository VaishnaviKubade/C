#include<stdio.h>   //wrong
#include<conio.h>

int factorial(int n); //function declaration
void printdata(int n);
void main()
{
    int n,a;
    printf("Enter the number whose factorial is to be found:");
    scanf("%d",&n);
    printdata(n);
    getch();

}


int factorial(int n) //function definition
{
    int n,i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}

void printdata(int n)
{
    int n;
    printf("Factorial of %d is: %d",n,factorial(n));
}

