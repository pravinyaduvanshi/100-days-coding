//program to copy an string to another string, without using library function

#include<stdio.h>
void strcopy(char[],char[],int);
void main()
{
    int i,j;
    char s[100],s2[100];
    printf("enter string");
    gets(s);
    for(i=0;s[i]!=0;i++);

    strcopy(s,s2,i);

}

void strcopy(char s[],char s2[], int i)
{
    int j;
     for(j=0;j<i;j++)
    {
        s2[i]=s[i];
    }
    s2[i]='\0';

    printf("after copy string");
    printf("\n%s",s);


}

