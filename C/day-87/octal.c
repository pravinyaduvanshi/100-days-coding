// decimal to octal

#include<stdio.h>
int main() {
	long int decimalNumber,remainder,quotient;
	int octalNumber[100],i=1,j;
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		octalNumber[i++]= quotient % 8;
		quotient = quotient / 8;
	}
	printf("Equivalent octal value of decimal number %d: ",decimalNumber);
	for (j = i -1 ;j> 0;j--)
	      printf("%d",octalNumber[j]);
	getch();
}
