// Write a program to check whether a number is prime or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, j, t = 1;
    printf("Enter the number ");
    scanf("%d", &n);
    for ( j = 2; j <= ( n - 1 ); j++)
    {
        if ( n % j == 0 )
        {
            printf("The number is not prime");
            t = 0;
            break;
        }
    }
    if ( t == 1 )
    printf("The number is prime");
}
