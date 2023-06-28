// Write a program which accepts an inetger numbers and prints the multiplication of the digits.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{

    int n, i, f = 1, c = 0;
    int r[20];
    printf(" Enter the number : ");
    scanf("%d", &n);
    while (n > 1)
    {
        r[c] = n % 10;
        n = n / 10;
        c++;
    }
    for (i = 0; i < c; i++)
    {
        f = f * r[i];
    }
    printf(" Required Multiplied Result = %d", f);
    getch();
}
