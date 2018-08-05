//program for sum of N integer nummber
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("enter the value of n =\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	getch();
}