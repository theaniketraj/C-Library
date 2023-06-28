/* Write a program to print the series as given along with the sum:

1 - 2 + 3 - 4 + 5 - ....... n.

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n");
    scanf("%d", n);

    for ( i = 1; i <= n; i++ )
    {
        if ( i % 2 != 0 )
            sum = sum + i;
        else
            sum = sum - i;
    }
    printf("The summation of the series is = %d", sum);
    return 0;
}
