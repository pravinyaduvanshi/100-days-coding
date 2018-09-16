//program for reverse given string

#include <stdio.h>

int main()
{
   char s[1000], r[1000];
   int i, n, count = 0;

   printf("Input a string\n");
   gets(s);

   while (s[count] != '\0')
      count++;

   n = count - 1;

   for (i=0; i< count; i++) {
      r[i] = s[n];
      n--;
   }

   r[i] = '\0';

   printf("%s\n", r);

   return 0;
}
