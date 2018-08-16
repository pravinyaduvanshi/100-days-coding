//program to count digits in a number
#include<stdio.h>
void main()
{

    int count=0,x;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0){
        x=x/10;
        count++;
    }
    printf("total digits=%d",count);
    getch();
}
