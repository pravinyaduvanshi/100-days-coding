#include<stdio.h>
void main()
{
int year;
printf("Enter an year : ");
scanf("%d",&year);
if(year%4==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}
getch();
}
