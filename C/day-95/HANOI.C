// Program to solve Tower-of-Hanoi problem using recursion

#include<stdio.h>
#include<conio.h>
void tower(int,char[],char[],char[]);
void main()
{
int n,i;
clrscr();
printf("enter no. of disk");
scanf("%d",&n);
if(n<1)
{
printf("incorect value");
exit();
}
else
{
printf("the following moves are required to move disk");
tower(n,"BEG","AUX","END");
}
getch();
}
void tower(int num, char A[],char B[],char C[])
{
if(num==1)
{
printf("%s->%s\t",A,C);
return;
}
else
{
tower(num-1,A,C,B);
printf("%s->%s\t",A,C);
tower(num-1,B,A,C);
return;
}
}

