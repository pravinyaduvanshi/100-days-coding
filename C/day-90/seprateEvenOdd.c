
// Program to Put Even & Odd Elements of an Array in 2 Separate Arrays

    #include <stdio.h>
    void main()
    {

        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;

        printf("Enter the size of array AR n");
        scanf("%d", &n);

        printf("Enter the elements of the array n");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
            fflush(stdin);
        }

        for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                EAR[j] = ARR[i];
                j++;
            }
            else
            {
                OAR[k] = ARR[i];
                k++;
            }
        }

        printf("The elements of OAR are n");
        for (i = 0; i < k; i++)
        {
            printf("%ldn", OAR[i]);
        }

        printf("The elements of EAR are n");
        for (i = 0; i < j; i++)
        {
            printf("%ldn", EAR[i]);
        }

    }
