#include<stdio.h>
#include<conio.h>
void main()
{
    char alpha;
    printf("Enter an alphabet to check if it is a vowel or a consonent:");
    scanf("%c",&alpha);
    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("VOWEL");
        break;
        default:printf("CONSONENT");
        break;
    }
    getch();
}
