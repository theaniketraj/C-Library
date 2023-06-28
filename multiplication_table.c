// Write a program to display multiplication table of a number upto another given number.
// This code multiplies all the numbers from 1 to 10 together.
// If you just want a specific number, replace the outer for loop with (for example) i = 5.

#include<stdio.h>

int main()
{
    int i, j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
    printf("\n");
    }
    return 0;
}

