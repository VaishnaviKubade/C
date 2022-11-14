#include<stdio.h>
#include<conio.h>

/*void main()
{
    int a,b,sum;
    a=2,b=4;
    sum=a+b;
    printf("Sum is: %d",sum);
}*/

/*void main()
{
    int marks[4],sum;
    marks[0]=85;
    marks[1]=95;
    marks[2]=94;
    sum=marks[0]+marks[1]+marks[2];
    printf("Sum of marks is: %d",sum);
}*/

void main()
{
    int n=5;
    int marks[n],i,j,sum=0;
    //reading marks from user
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of student:");
        scanf("%d",&marks[i]);
    }
    for(j=0;j<5;j++)
    {
        sum+=marks[j];
    }

    printf("Sum of marks is: %d",sum);
    getch();
}
