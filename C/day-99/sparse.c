// Program to check whether matrix is a sparse matrix

#include<stdio.h>

int main()
{

    int n, m, c, d, matrix[10][10];
    int counter = 0;
    printf("\nEnter the number of rows and columns of the matrix");
    scanf("%d%d",&m,&n);

    printf("\nEnter the %d elements of the matrix", m*n);
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            scanf("%d", &matrix[c][d]);
            if(matrix[c][d] == 0)
            counter++;
        }
    }

    printf("\nThe entered matrix is:\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", matrix[c][d]);
        }
        printf("\n");
    }

    if(counter > (m*n)/2)
        printf("\nThe entered matrix is a sparse matrix");
    else
        printf("\nThe entered matrix is not a sparse matrix");

    return 0;
}
