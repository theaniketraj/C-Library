// Write a program to print natural numbers from 1 to n.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, j = 1;
    printf("Enter the value of 'n' ");
    scanf("%d", &n);
    while ( j <= n )
    printf("%d\n", ++j );
    return 0;
}
