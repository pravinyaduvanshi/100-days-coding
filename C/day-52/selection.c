// Selection  Sort

#include<stdio.h>
int indexOfMin(int[],int,int);

void main()
{
    int arr[100],i,j,temp,n,index;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        index=indexOfMin(arr, n, i);
        temp = arr[i];
        arr[i]=arr[index];
        arr[index] = temp;
    }


    printf("sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}

int indexOfMin(int a[], int n, int i)
{
    int small,pos,j;
    small = a[i];
    pos = i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<small)
        {
            small = a[j];
            pos=j;
        }
    }
    return pos;
}

