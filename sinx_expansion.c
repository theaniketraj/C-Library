/* Write a program to print the following series:
sin(x) = x - x^3/3! + x^5/5! + x^7/7! + ........... + x^n/n! */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double sin(double x)
    {
        double numerator = x;
        double denominator = 1.0;
        double sign = 1.0;
        double sin = 0;

        // terms below define the number of terms you want
        int terms = 10;
        for ( int i = 1; i <= 10; i++ )
        {
            sin += numerator / denominator * sign;
            numerator *= x * x;
            denominator *= i * 2 * ( i * 2 + 1 );
            sign *= -1;
        }
        return sin;
    }
    getch();
}
