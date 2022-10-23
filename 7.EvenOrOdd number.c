#include<stdio.h>
#include<conio.h>
void main()
{
    int num;

    printf("Enter the number:");
    scanf("%d",&num);

    //This is Conditional Operator OR Ternary Operator
    (num % 2 == 0)?printf("%d is an Even number",num):printf("%d is an Odd number",num);
    getch();
}
