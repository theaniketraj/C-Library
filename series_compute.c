/* Write a program to compute following series:
G = 1 + x^3/3! + x^5/5! + x^7/7! + ..... upto n terms.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x, s = 0, fs;
    int fact(int x);
    int n, i, t = 1;
    printf("Enter the values of x & n ");
    scanf("%f%d", &x, &n);
    for ( i = 1; i <= n; i++ )
    {
        s = s + ( pow(x,t) ) / ( (float) fact(t) );
        t = t + 2;
    }
    s = fs - ( x - 1 );
    printf("\nSum of series = %.2f", fs);
}
int fact (int x)
{
    int i, f = 1;
    for ( i = 1; i <= x; i++ )
    f = f * i;
    return (f);
}
