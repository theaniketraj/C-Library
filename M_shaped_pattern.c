/* Write a program to print 

A   B   C   D   E   F   E   D   C   B   A
A   B   C   D   E       E   D   C   B   A
A   B   C                       C   B   A
A   B                               B   A 
A                                       A

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k, sp;
    sp = 0;
    for ( i = 7; i >= 1; i-- )
    {
        printf("\n");
        for ( j = 65; j <= 65 + ( i - 1 ); j++ )
        {
            printf("%c", j );
        }
        for ( j = j - 2; j >= 65; j-- )
        {
            printf("%c", j );
        }
    }
}
