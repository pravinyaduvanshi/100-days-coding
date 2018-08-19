/* program for check how many no.in array are even or odd*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,e=0,o=0;
	clrscr();
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter array element=\t");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		e++;
		}
		else
		{
		o++;
		}
	}
	printf("even %d\n",e);
	printf("odd %d",o);
	getch();
}

