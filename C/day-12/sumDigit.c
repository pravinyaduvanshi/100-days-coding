//program to calculate sum of digit of a number
#include<stdio.h>
void main()
{

    int x,r,s=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        r=x%10;
        s=s+r;
        x=x/10;
    }
    printf("sum of digits=%d",s);
    getch();
}
