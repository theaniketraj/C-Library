/* Write a program to print the following pattern

        1
       1 0
      1 0 1
     1 0 1 0 
    
*/

#include<stdio.h>

int main()
{
    int i, j, n, d;
    for ( i = 1; i <= 4; i = i + 2 )
    {
        for ( j = 1; j <= i; j++ )
        {
            if ( j % 2 == 0 )
            printf("\t%d", 0);
            else
            printf("\t%d", 1);
        }
        printf("\n");
    }
    return 0;
}
