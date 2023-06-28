// Write a program to find out the biggest among three numbers using one extra variable.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, t;
    printf("Enter the values of a, b and c : \n");
    scanf("%d%d%d", &a, &b, &c);
    if ( a > b )
    {
        if ( a > c )
        {
            t = a;
            printf("The largest value is %d", t);
        }
        else
        {
            t = c;
            printf("The largest value is %d", t);
        }
    }    
    else
    {
        if ( b > c )
        {
            t = b;
            printf("The largest value is %d", t);
        }
        else
        {
            t = c;
            printf("The largest value is %d", t);
        }
    }
    return 0;
}
