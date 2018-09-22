//program to compare two string, without using library function

#include<stdio.h>
void main()
{
char s[100],s2[100];
int i,flag=0;
printf("enter string");
gets(s);
printf("2 string");
gets(s2);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]==s2[i])
    {
        flag=1;
    }
    else
        flag=0;
}
if(flag)
    printf("match");
else
    printf("not match");

}
