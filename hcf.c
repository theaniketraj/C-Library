// Write a recursive function that will calculate HCF of two numbers.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a, b, r, temp;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    if ( a == 0 && b == 0 )
    {
        printf("GCD = 0");
        getch();
    }
    if ( a != 0 && b == 0 )
    {
        printf("GCD = %d", a);
        getch;
    }
    if ( a == 0 && b != 0 )
    {
        printf("GCD = %d", b);
        getch;
    }
    if ( b > a )
    {
        temp = b;
        b = a;
        a = temp;
    }
    r = a%b;
    while ( r != 0 )
    {
        a = b;
        b = r;
        r = a%b;
    }
    printf("GCD = %d", b);
    getch;
}

