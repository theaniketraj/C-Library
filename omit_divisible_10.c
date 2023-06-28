// Write a program to print integers from 1 to n omitting those integers which are divisible by 10.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n, j = 1;
    printf("Enter the value of of 'n' : ");
    scanf("%d", &n);
    while ( j <= n )
    {
        if ( j % 10 != 0 )
        printf("%d\n", j);
        ++j;
    }
    return 0;
}
