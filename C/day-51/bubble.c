// Bubble Sort

#include<stdio.h>
void main()
{
    int arr[100],i,j,temp,n;
    int flag=0;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(!flag)
            break;
    }

    printf("sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}
