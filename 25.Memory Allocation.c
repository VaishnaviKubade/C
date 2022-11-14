#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*void main()
{
    char name[60];
    strcpy(name,"Hi, hope you are doing great.Keep smiling and shining.");
    printf("\n%s",name);
    printf("\n%d",sizeof(name));
    printf("\n%d",strlen(name));
    getch();
}*/

void main()
{
    //char name[200];
    char name[60];
    char *description;
    strcpy(name,"C language");
    printf("Name: %s",name);

    //dynamic memory allocation
    description=malloc(200*sizeof(char));
    if(description==NULL)
        printf("\nMemory not available");
    else
    {
        strcpy(description,"\nHi, hope you are doing great.Keep smiling and shining.");
        printf(description);
    }

    //dyanamic memory reallocation
    description=realloc(description,400*sizeof(char));
    if(description==NULL)
        printf("\nMemory not available");
    else
    {
        strcpy(description,"\nC language course is about to get complete!");
        printf(description);
    }

    //dynamiv memory deallocation
    free(description);
    getch();
}
