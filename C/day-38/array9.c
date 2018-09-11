/*
    C program to sort array element

*/

    #include <stdio.h>
    void main()
    {
        int array[10];
        int i, j, n,temp;

        printf("Enter how many elements \n");
        scanf("%d", &n);
        printf("Enter the elements \n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Input array elements are \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", array[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
             }
        }

        printf("\nSorted list is \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", array[i]);
        }
    }
