// Write a program to print the sum of the following series.
// S = 1^2 + 2^2 + 3^2 + ........ n^2.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, j, s = 0;
    printf("Enter the value of 'n' ");
    scanf("%d", &n);
    for ( j = 1; j <= n; j++)
    {
        s = s + ( j * j );
    }
    printf("the required sum = %d\n", s);
    return 0;
}
