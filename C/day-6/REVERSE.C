//program for reverse any  given number
#include<stdio.h>
#include<conio.h>
void main()
{
int no, rev=0, digit;
clrscr();
printf("enter a no.");
scanf("%d",&no);
printf("input number = %5d\n",no);
START :
	digit = no%10;
	rev = rev * 10 + digit;
	no/=10;
	if(no>0)
	{
		goto START;
	}
printf("reversed number= %5d\n",rev);
getch();
}