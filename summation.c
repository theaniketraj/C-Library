// Write a program to find out the summation of following series.
// (1) + (1+2) + (1+2+3) + ....... + (1+2+3+4+.......+n)

#include<stdio.h>

int main()
{
    int i, j, n, s = 0, sum = 0;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++ )
    {
        sum += s;
        for ( j = 1; j <= i; j++ )
        s += j;
    }
    printf("%d", sum);
    return 0;
}
