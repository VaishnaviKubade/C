#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
     switch(num)
     {
         case 1:printf("ONE");
         break;
         case 2:printf("TWO");
         break;
         case 3:printf("THREE");
         break;
         case 4:printf("FOUR");
         break;
         default:printf("INVALID");
         break;
     }
    getch();
}

/*{
    //Using if....else if....else if....else if....else....
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num==1)
        printf("ONE");
    else if(num==2)
        printf("TWO");
    else if(num==3)
        printf("THREE");
    else if(num==4)
        printf("FOUR");
    else
        printf("INVALID");
    getch();
}*/
