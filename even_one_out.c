// Write a program which will accept an integer number and print it removing the even digits.

#include<stdio.h>

int main()
{
    long i = 0, j = 0, n, d, digit, sum = 0;
    printf("Enter the number\n");
    scanf("%ld", &n);
    while ( n > 0 )
    {
        i++;
        digit = n % 10;
        n /= 10;
        if ( i % 2 != 0 )
        {
            d = pow ( 10, j );
            sum = sum + ( digit * d );
            j++;
        }
    }
    printf("\n%d", sum);
    return 0;
}
