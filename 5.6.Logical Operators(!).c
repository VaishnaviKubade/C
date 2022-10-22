#include<stdio.h>
#include<conio.h>
void main()
{
    char apparel[5];
    float a;
    char jeans[5];
    printf("Enter the apparel:");
    scanf("%s",&apparel);
    printf("Enter the price:");
    scanf("%f",&a);
    //if statement is not getting executed :((
    if(apparel=="jeans" && a==4000)
    {
        printf("\nYou get a 40 percent discount!!!!");
    }
    else
    {
        printf("\nPay Rs.%f",a);
    }
}
