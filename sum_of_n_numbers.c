// Write a program to print the sum of the following series of n terms.
// s = 1 + ( 1 + 2 ) + ( 1 + 2 + 3 ) + ( 1 + 2 + 3 + 4 ) + ......

#include<stdio.h>
int main(void)
{
    int i, j, n, s = 0, sum = 0;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        sum += s;
        for ( j = 1; j <= i; j++ )
        s += j;
    }
    printf("%d", sum);
}
