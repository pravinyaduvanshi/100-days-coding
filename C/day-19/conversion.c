//Decimal to Binary Conversion
#include<stdio.h>

void main()
{
int no,rem[20],i=0,j;
clrscr();
printf("Enter any number: ");
scanf("%d",&no);
while(no>0)
{
rem[i]=no%2;
i++;
no=no/2;
}
printf("Binary number is: ");
for(j=i-1;j>=0;j--)
{
printf(" %d",rem[j]);
}
getch();
}