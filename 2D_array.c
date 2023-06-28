// Write a program which will define a 2D array and take input from the keyboard for all its elements.

#include<stdio.h>

int main()
{
    int Nums[3][5];
    int i, j;
    for ( i = 0; i < 3; i++ )         // march down the rows.
    {
        for ( j = 0; j < 5; j++ )     // march across the columns.
        {
            Nums[i][j] = 0;           // set array elements to zero.
        }
    }
    return 0;
}
