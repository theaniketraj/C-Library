// Write a program to print all numbers between 100 and 200, which are divisible by 5 but not by 15.

#include<stdio.h>
int main(void)
{
    int i, j;
    for ( i = 100; i <= 200; i++ )
    {
        if ( i % 5 == 0 && i % 15 != 15 )
        printf("%d\n", i);
    }
}
