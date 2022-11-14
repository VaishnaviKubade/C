#include<stdio.h>
#include<conio.h>

struct employee
{
    int id; //4 bytes
    char name[20]; //20 bytes
    int age; //4 bytes
};

void main()
{
    struct employee emp;
    printf("Enter id:");
    scanf("%d",&emp.id);
    printf("Enter name:");
    scanf("%s",&emp.name);
    printf("Enter age:");
    scanf("%d",&emp.age);

    printf("ID: %d, Name: %s, Age: %d",emp.id,emp.name,emp.age);

    printf("Size of Structure: %d",sizeof(struct employee)); //or(emp)
}

//if we use union instead of struct, we do not get the desired output
//it does not support all the data types like char
//and returns size of the greatest variable as its size
