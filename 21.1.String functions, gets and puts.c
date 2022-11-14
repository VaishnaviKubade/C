#include<stdio.h>
/*void main()
{
   char name[20];
   printf("Enter your name:");
   scanf("%s",&name);
   printf("Name: %s",name);
   //This prints on the first name i.e.it does not include the space and the characters after space
}*/

void main()
{
    char name[20];
    printf("Enter your name:");
    gets(name);
    printf("\nName: ");
    puts(name);
}
