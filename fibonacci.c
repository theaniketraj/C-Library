// Write a program to print the Fibonacci sequence of n numbers.

#include<stdio.h>
int fib(int);
int main()
{
    int m, i;
    printf("Enter the no. of terms\n");
    scanf("%d", &m);
    for ( i = 0; i < m; i++ )
    {
        printf("%d", fib(i));
    }
}
int fib( int n )
{
    if ( n == 0 || n == 1 )
    return (n);
    else
    return (fib (n-1) + fib ( n - 2 ) );
}
