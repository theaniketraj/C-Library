// Write a program that implements the matrix multiplication using 2-D array.

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q;
    printf("Enter the Rows and Columns of the First Matrix: ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the Rows and Columns of the Second Matrix: ");
    scanf("%d%d", &p, &q);
    printf("\nEnter Elements of the First Matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter Elements of the Second Matrix: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The First Matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    printf("The Second Matrix is : \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d", b[i][j]);
        printf("\n");
    }
    if ( n != p )
    {
        printf("Aborting.\nMultiplication of the above Matrices Not Possible.");
    }
    else
    {
        for ( i = 0; i < m; i++ )
        {
            for ( j = 0; j < q; j++ )
            {
                c[i][j] = 0;
                for ( k = 0; k < n; k++ )
                {
                    c[i][j] = c [i] [j] + a [i] [k] * b [k] [j];
                }
            }
        }
        printf("\nThe Product of two Matrices is : \n\n");
        for ( i = 0; i < m; i++ )
        {
            for ( j = 0; j < q; j++ )
            {
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
