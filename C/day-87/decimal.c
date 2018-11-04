// binary to decimal

#include <stdio.h>
#include <conio.h>
void main()
{
	unsigned long num;
	int digit,i,pos=0,pow=1,dec=0;
	clrscr();
	printf("enter a binary number: ");
	scanf("%lu",&num);
	printf("\ndecimal equivalent of %lu is ",num);
	while(num!=0)
	{
		pow=1;
		digit=num%10;
		num=num/10;
		for(i=1;i<=pos;i++)
			pow=pow*2;
		pos++;
		dec=dec+(pow*digit);
	}
	printf("%d",dec);
	getch();
}
