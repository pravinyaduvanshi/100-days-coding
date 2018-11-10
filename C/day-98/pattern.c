/*
if raw = 5
       &
      &&&
@@@@@&&&&@@@@@
      &&&
       &
	 
if raw = 7
          &
	     &&&
        &&&&&
@@@@@@@&&&&&&@@@@@@@
        &&&&&
         &&&
          &


*/

#include<stdio.h>
#include<conio.h>
void main()
 {
  int num,i,j,k,m,l=1;
  printf("Enter the number of rows:");
  scanf("%d",&num);
  m=(num/2)+1;
  for(i=1;i<=m;i++)
   {
    if(i!=m)
    {
    for(int n=1;n<=num;n++)
        printf(" ");
    }
    for(j=i;j<=m-1;j++)
		printf(" ");
    if(i==m)
    {
      for(int x=1;x<=num;x++)
		printf("@");
    }
    if(i==m)
      {
        for(int n=1;n<=num-1;n++)
        printf("&");
       }
     else
     {
    for(k=1;k<=l;k++)
		printf("&");
      }
    if(i==m)
    {
      for(int x=1;x<=num;x++)
		printf("@");
    }
     l=l+2;
    printf("\n");
   }
  int y=num;
  for(i=1;i<=(num/2);i++)

   {
    for(int n=1;n<=num;n++)
        printf(" ");
    for(k=1;k<=i;k++)
    printf(" ");
    for(j=1;j<=(y-2);j++)
    printf("&");
    y=y-2;
    printf("\n");
  }
}
