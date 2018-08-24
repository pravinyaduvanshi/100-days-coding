#include<stdio.h>
#include<conio.h>

void main()
{
 float cel, far;
 clrscr();
 
 printf("Enter temp. in Celsius: ");
 scanf("%f",&cel);
 far = cel * 9/5 + 32;
 printf("Temp. in Fahrenheit: %f",far);
 
 getch();
}