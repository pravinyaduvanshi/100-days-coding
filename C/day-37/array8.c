
/*
C Program to accept N integer number and store them in an array AR.
 The odd elements in the AR are copied into OAR and other elements are copied into EAR.
 Display the contents of OAR and EAR.
*/

    #include <stdio.h>
    void main()
    {

        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;

        printf("Enter the size of array AR n");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("enter %d elements of array",i+1);
            scanf("%ld", &ARR[i]);
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

        printf("\n\n The elements of OAR are=  ");
        for (i = 0; i < k; i++)
        {
            printf("%ld \t", OAR[i]);
        }

        printf("\n\n\n The elements of EAR are=  ");
        for (i = 0; i < j; i++)
        {
            printf("%ld \t", EAR[i]);
        }

    }
