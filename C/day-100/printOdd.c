// program for print 5 odd number from user input if any number we get even then we don't print any number

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],n,i=0;
    while(i<5)
    {
        printf("enter a number : ");
        scanf("%d",&n);
        if(n%2==0)
            break;
        else
        {
            a[i]=n;
            i++;
        }
    }
    if(i==5)
    {
        for(i=0;i<5;i++)
            printf("%d ",a[i]);
    }
    else
        printf("enter number is even so we can not move further");
    getch();
}
