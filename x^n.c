// Write a recursive function called power() to calculate x rise to the power n.

#include<stdio.h>

/*
  power recursive
  return x^y
*/

int power ( int x, int y )
{
    if ( y == 0 ) return 1;
    if ( y == 1 ) return x;
    return ( x * power ( x, y-1 ) );
}

/*
  power not recursive
  return x^y
*/

int power2 ( int x, int y )
{
    if ( y == 0 ) return 1;
    if ( y == 1 ) return x;

    int result, i;
    for ( i = 0; (result = 1); (i<=y); i++ )
    {
        result = result * x;
    }
    return ( result );
}

int main()
{
    int x, y;
    do
    {
        printf("Give integer X from 1 to 20 : ");
        scanf("%d", &x);
    }
    while ( x > 20 || x < 1 );
    do
    {
        printf("Give integer Y from 0 to 5 : ");
        scanf("%d", &y);
    } 
    while ( x > 20 || x < 1 );
    printf("%d raised to %d gives %d \n", x, y, power ( x, y ));
    printf("%d raised to %d gives %d ", x, y, power2( x, y ) );
}
