/* Write a program to read marks of 10 students in the range of 0-100. Then make 10 groups: 0-10, 10-20, 20-30 etc. 
Count the number of values that falls in the group and display the result.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a[15], b[15], marks, marks1, i, j, c;
    for ( i = 1; i <= 10; i++ )
    {
        printf("Enter the marks of the %d th student", i);
        scanf("%d", &a[i]);
        b[i] = 0;
    }

    for ( i = 1; i <= 10; i++ )
    {
        marks = 10 * ( i - 1 );
        marks1 = 10 * i;
        c = 0;
        j = 1;
        while ( j != 11 )
        marks1 = 10 * i;
        c = 0;
        j = 1;
        while ( j != 11 )
        {
            if ( a[j] >= marks && a[j] < marks1 )
            {
                c++;
                b[i] = c;
            }
            j++;
        }
    }
    for ( i = 1; i <= 10; i++ )
    {
        printf("\n Student number in %d group is %d", i, b[i]);
    }
    return 0;
}
