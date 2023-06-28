// Write a program to print summation of the following series
// 1 + 1/2^2 + 1/3^2 + 1/4^2 + ........ + 1/N^2

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, sign = -1;
    float s = 1.0, p;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for ( i = 2; i <= n; i++ )
    {
        p = pow( i, i );
        s = s + sign * 1/p;
        sign = sign * ( -1 );
    }
    printf("Sum is %f", s );
}
