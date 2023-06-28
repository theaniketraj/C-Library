/* DO..WHILE - Do While loops are useful for things that want to loop at least once. The structure is 
do
{
    
} while ( condition );

Example:                                                                                            */

#include<stdio.h>
int main()
{
    int x;
    x = 0;
    do
    {
        /* "Hello, world!" is printed at least one time even though the condition is false. */
        printf("%d\n", x);
    } while ( x != 0 );
}
