// Write a program which accepts integer numbers and prints the sum of the digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num, x, sum = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while ( n > 0 )
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
    }
    printf("Sum of digits of number is = %d", sum);
    return 0;
}

