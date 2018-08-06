#include <stdio.h>
int main()
{
   int a, b;
   printf("Please enter the 1st number : ");
   scanf("%d",&a);
   printf("\nPlease enter the 2nd number : ");
   scanf("%d",&b);

   a = a - b;
   b = a + b;
   a = b - a;

   printf("\nAfter swapping:\n");
   printf("a = %d \tb = %d", a, b);
   getch();
}
