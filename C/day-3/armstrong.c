#include <stdio.h>
void main()
{
   int n, sum = 0, t, remainder;
   printf("Enter a number to find whether it is an armstrong or not\n");
   scanf("%d",&n);
   t = n;
   while( t != 0 )
   {
      remainder = t%10;
      sum = sum + remainder*remainder*remainder;
      t = t/10;
   }
   if ( n == sum ){
      printf("%d is an armstrong number\n", n);
      }
   else{
      printf("%d is not an armstrong number\n", n);
      }
   getch();
}
