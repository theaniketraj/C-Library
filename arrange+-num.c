// Write a program to arrange a group of numbers into positive & negative numbers.

#include<stdio.h>

int main()
{
    int a[100], p = 0, n = 0, z = 0, m, i;
    printf("enter the nth no: \n");
    scanf("%d", &m);
    for ( i = 1; i <= m; i++ )
    {
        printf("enter %d\n", i);
        scanf("%d", &a[i]);
    }
    for ( i =1; i <= m; i++ )
    {
        if ( a[i] == 0 )
        z++;
        else if ( a[i] > 0 )
        p++;
        else
        n++;
    }
    printf("positive = %d \n Negative = %d \n Zeroes = %d \n", p, n, z);
    return 0;
}
