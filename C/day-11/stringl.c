#include<stdio.h>
#include<conio.h>

void main()
{
    char s[20];
    int i;
    printf("enter a string");
    gets(s);

    for (i=0;s[i]!=0;i++);
    printf("length is %d",i);
    getch();
}
