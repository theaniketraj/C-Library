// Write a program to interchange the largest and the smallest numbers in the array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[20], i, n, min, max, minl = 0, maxl = 0;
    printf("Enter array size\n");
    scanf("%d", &n);
    printf("Enter any %d elements\n", n);
    for ( i = 0; i < n; i++ )
    scanf("%d", &a[i]);
    min = a[0];
    max = a[0];
    for ( i = 0; i < n; i++ )
    {
        if ( a[i] < min )
        {
            min = a[i];
            minl = i;
        }
        if ( a[i] > max )
        {
            max = a[i];
            maxl = i;
        }
    }
    printf("Minimum is %d\nMaximum is %d\n", min, max);
    a[minl] = max;
    a[maxl] = min;
    for ( i = 0; i < n; i++ )
    printf("%d", a[i]);
    return 0;
}
