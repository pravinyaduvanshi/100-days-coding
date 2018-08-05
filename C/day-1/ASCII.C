#include<stdio.h>
#include<conio.h>
void main()
{
	char string[20];
	int n,count=0;
	clrscr();
	printf ("how many characters");
	scanf("%d",n);
	printf("enter the string of %d characters\n",n);
	scanf("%s",string);
	while(count<n)
	{
		printf("%c =%d\n",string(count), string(count));
		++count;
	}
	getch();
}