#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,fact=1;
    int n1,fact1=1;
    printf("Enter the number whose factorial is to be found(n):");
    scanf("%d",&n);
    printf("Enter the number whose factorial is to be found(n1):");
    scanf("%d",&n1);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=n1;i++)
    {
        fact1=fact1*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    printf("\nFactorial of %d is: %d",n1,fact1);
    getch();
}
/*So this way we need to repeat the code several times for more factorial values. This increases the space complexity and also the time complexity of the code.*/

/*void main()
{
    int n,i=1,fact=1;
    printf("Enter the number whose factorial is to be found:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i+=1;
    }
    printf("Factorial of %d is: %d",n,fact);
    getch();
}*/
