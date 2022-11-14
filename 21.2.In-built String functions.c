#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char fname[20],lname[20];
    printf("Enter the first name:");
    scanf("%s",&fname);
    printf("%s",fname);
    printf("\nEnter the last name:");
    scanf("%s",&lname);
    printf("%s",lname);

    printf("\n\nLength of first name: %d",strlen(fname));
    printf("\nFirst name in Lower Case: %s",strlwr(fname));
    printf("\nFirst name in Upper Case: %s",strupr(fname));
    printf("\nFirst name in Reverse: %s",strrev(fname));
    strrev(fname);
    printf("\nConcatenating first name and last name: %s",strcat(fname,lname));
    printf("\nCompare: %d",strcmp(fname,lname));
    getch();
}
