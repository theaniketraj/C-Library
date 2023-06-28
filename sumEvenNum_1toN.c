// Write a function to print the sum of the even numbers from 1 to n.

#include<stdio.h>

int main()
{
    int func (int n)
    {
        int j = 1, S = 0;
        while ( j <= n )
        {
            if ( j %2 == 0 )
            S = S + j;
            ++j;
        }
    }
    return (S);
}
