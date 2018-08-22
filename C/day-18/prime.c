//prime no. between two no.
#include<stdio.h>
void main()
{
    int l,u,x,i;
    printf("enter two no.");
    scanf("%d%d",&l,&u);
    printf(".................\n\n");
    for(x=l+1;x<u-1;x++)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)
            printf("%d\n",x);
    }
}
