#include<stdio.h>
#include<conio.h>
/**************************************************************************
Author: Vaishnavi Kubade
Purpose: Read name from the user, print its length and reverse the string.
**************************************************************************/
void main()
{
    //reading name from the user
    char name[20];
    int i,length=0;
    printf("Enter your name:");
    scanf("%s",&name);
    printf("\nHello %s, hope you are doing great!",name);

    //finding length of the entered name using the logic of "\0"
    for(i=0;name[i]!='\0';i++)
        length+=1;
    printf("\nLength of the entered name is: %d",length);

    //reversing the entered name
    //length-1 because length-1 gives the index value since indexing starts from 0
    printf("\nName in reverse is: ");
    for(i=length-1;i>=0;i--)
    printf("%c",name[i]);
}
