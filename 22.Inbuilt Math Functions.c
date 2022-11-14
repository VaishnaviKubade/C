#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a=5,b=3,c=64;
    float d=2.567;
    printf("%d to the POWER %d is: %0.0f",a,b,pow(a,b));
    printf("\nSquare root of %d is: %0.2f",c,sqrt(c));
    printf("\nFloor value of %0.3f is: %0.2f",d,floor(d));
    printf("\nCeil value of %0.3f is: %0.2f",d,ceil(d));
    getch();
}
