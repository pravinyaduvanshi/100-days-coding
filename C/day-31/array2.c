//display largest element of an array
#include <stdio.h>

void main()
{
    int i, n;
    float arr[50];

    printf("Enter total number of elements(1 to 50): ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
       printf("\nEnter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    for(i = 1; i < n; i++)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);

    getch();
}
