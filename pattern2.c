/* Write a program to print: 
   1 3 5 7 9
   3 5 7 9 1
   5 7 9 1 3 
   7 9 1 3 5
   9 1 3 5 7
*/

#include<stdio.h>

int main()
{
    int i, j, n, d;
    for ( i =-1; i <= 10; i = i + 2 )
    {
        n = 1;
        for ( j = 1; j <= 5; j++ )
        {
            d = n % 10;
            printf("\t%d", d);
            n = n + 2;
        }
        printf("\n");
    }
    return 0;
}
