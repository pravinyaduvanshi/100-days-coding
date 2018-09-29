//Linear Search

#include<stdio.h>
void main ()
{
    int a[10];
    int item, i,flag,n;
    printf("enter how many element you want to insert :  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter %d element :  ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter Item which is to be searched\n");
    scanf("%d",&item);
    for (i=0;i<n;i++)
    {
        if(a[i] == item)
        {
            flag = i+1;
            break;
        }
        else
        flag = 0;
    }
    if(flag != 0)
    {
        printf("\nItem found at location %d\n",flag);
    }
    else
    {
        printf("\nItem not found\n");
    }
}
