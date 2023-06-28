// Write a program to take n numbers in an array and then print the p number among them.

#include<stdio.h>

int main()
{
    int arr[10], i, j, flag;
    for ( i = 0; i < 10; i++ )
    scanf("%d", &arr[i]);
    for ( i = 0; i < 10; i++ )
    {
        flag = 1;
        for ( j =2; j <= ( arr[i]/2 ); j++ )
        {
            if ( arr[i] % j == 0 )
            {
                flag = 0;
                break;
            }
        }
    }
    for ( i = 0; i < 10; i++ )
    {
        if ( flag = 1 )
        printf("%d", arr[i]);
    }
    return 0;
}
