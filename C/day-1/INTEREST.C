#include<stdio.h>
#include<conio.h>
void main()
{
	float amt,bal,irate,dbamt;
	int year=0;
	clrscr();
	printf("enter the amount , rate of interest");
	scanf("%f%f",&amt,&irate);
	irate/=100.0;
	dbamt=2*amt;
	bal=amt;
	printf("..............\n");
	printf("year balance\n");
	printf("..............\n");
	while(bal<=dbamt)
	{
		bal*=1 +irate;
		year++;
		printf("%d %8.2f\n",year , bal);
	}
	printf("...............\n");
	getch();
}