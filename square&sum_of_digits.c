// Write a program to find the square of the sum of the digits of any given positive number.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n, x, sum = 0, sum1;
    printf("Enter any integer\n");
    scanf("%d", &n);
    while ( n > 0 )
    {
        x = n % 10;
        sum += x;
        n /= 10;
    }
    sum1 = sum * sum;
    printf("The sum of the digits is %d", sum1);
    return 0;
}
