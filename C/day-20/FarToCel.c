#include<stdio.h>
#include<conio.h>

void main()
{
	float cel, far;
	clrscr();
	printf("Enter temp. in Fahrenheit: ");
	scanf("%f",&far);
 
	cel = (far - 32) * 5/9;
 
	printf("Temp. in Celsius: %f",cel);

	getch();
}