// Write a program that converts a given decimal number to its binary equivalent.

#include<stdio.h>

int main()
{
    int n;
    printf("\n Enter any number: ");
    scanf("%d", &n); dec2bin(n);
}
dec2bin(int n)
{
    if ( n == 0 )
    return ; else
    {
        dec2bin ( n/2 );
        printf("%d", n%10);
    }
}
