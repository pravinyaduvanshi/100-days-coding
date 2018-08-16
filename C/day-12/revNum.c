//program to reverse a number
#include<stdio.h>
void main()
{

    int x,r,y=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("reverse = %d",y);
    getch();
}
