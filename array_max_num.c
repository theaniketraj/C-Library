// Write a program to read an array of integer to print the maximum/minimum number in that array.

#include<stdio.h>

int main()
{
    int i;
    int a[10] = { 10, 55, 9, 4, 234, 20, 30, 40, 22, 34 };
    int max = a[0];
    int min = a[0];
    for ( i = 0; i < 10; i++ )
    {
        if ( a[i] > max )
        {
            max = a[i];
        }
        else if ( a[i] < min )
        {
            min = a[i];
        }
    }
    printf("Maximum element in an array : %d\n", max);
    printf("Minimum element in an array : %d\n", min);
    return 0;
}   
