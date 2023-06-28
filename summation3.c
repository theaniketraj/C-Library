// Write a program to print the series as given along with the sum:
// 1 - 2 + 3 - 4 + 5 - ..... n

#include<stdio.h>
#include<conio.h>

int main()
{
    int num, j, i, sign, sum = 0;
    printf("\nEnter the number range: ");
    scanf("%d", &num);
    for ( j = 1; j <= num; j++ )
    {
        for ( i = 1, sign = 1; i < j; i++ )
        {
            sign = sign * - 1;
        }
        printf("%d", sign * j );
        if ( sign * j < 0 )
        {
            printf("%c", '+' );
        }
        sum = sum + sign * i;
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}
