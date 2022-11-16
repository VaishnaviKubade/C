#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char data[200];
    fp=fopen("D:\\MyCPrograms\\File Handling files\\Hello1.txt","a");
    if(fp==NULL)
        printf("Unable to write in file.Check the path.");
    else
    {
        printf("Enter the sentence to write in the file:");
        gets(data);
        fprintf(fp,"\n%s",data);
        fclose(fp);
        printf("\nData saved in the file. Thank you!");
    }
    getch();
}
