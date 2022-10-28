#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter the number whose Table you would like to print:");
    scanf("%d",&n);
    printf("Table of %d is:\n",n);

    for(i=1;i<=12;i++)
        printf("%d x %d = %d\n",n,i,n*i);
    getch();
}
