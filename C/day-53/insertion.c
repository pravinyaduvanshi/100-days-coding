// insertion sort

#include<stdio.h>
void main()
{
    int arr[100],i,j,k,temp,n;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        for(j=i-1;j>=0&&temp<=arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }


    printf("sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}
