/*program for find largest and smallest value in array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,n,lar,small;
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
		printf("enter the array elements");
	for(i=0;i<n;i++)
	{

		scanf("%d",&a[i]);
	}
	lar=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	printf("\nthe largest no is = %d",lar);
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("\nthe smallest no is = %d",small);
	getch();
}