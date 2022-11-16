#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:\\MyCPrograms\\File Handling Files\\Hello.txt","r");
    if(fp==NULL)
        printf("Unable to read data from the file");
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
        }
    getch();
}
