#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,c=0;
clrscr();
printf("enter array size");
scanf("%d",&n);
printf("enter the element of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("prime no. are \n");
for(i=0;i<n;i++)
{
for(j=2;j<=a[i];j++)
{
if(a[i]%j==0)
{
c++;
}
}
if(c==1)
{
printf("%d\t",a[i]);
}
c=0;
}
getch();
}