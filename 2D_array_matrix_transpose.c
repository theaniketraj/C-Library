// Write a program that implements the matrix transpose using 2-D array.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[100][100], m, n, t, i, j;
    printf("Enter the value of m & n for mxn matrix: ");
    scanf("%d%d", &m, &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\nEnter the number: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe above matrix is\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    if (n >= m)
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    else
    {
        for (i = 0; i {
                 for (j = i + 1; j {
                          t = a[i][j];
                          a[i][j] = a[j][i];
                          a[j][i] = t;
                      })
             })
    }
    printf("\nThe resultant matrix after transposing is\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
