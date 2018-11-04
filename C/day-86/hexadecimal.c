// program to convert decimal to hexadecimal

#include<stdio.h>
int main() {
	long int n,q;
	int i=1,j,r;
	char hex[100];
	printf("Enter any decimal number: ");

	scanf("%ld",&n);
	q = n;
	while(q!=0) {
		r = q % 16;
		if( r < 10)
            r =r + 48; else
        r = r + 55;
		hex[i++]= r;
		q = q / 16;
	}
	printf("Equivalent hexadecimal value of decimal number %d: ",n);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hex[j]);
	getch();
}
