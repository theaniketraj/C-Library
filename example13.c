#include<stdio.h>
void sum ( int i, int j, int k );
/* calling function */
int main()
{
    int a = 5;
    // actual arguments
    sum ( 3, 2 * a, a );
    return 0;
}
/* called function */
/* formal arguments */
void sum ( int i, int j, int k )
{
    int s;
    s = i + j + k;
    printf("sum is %d", s);
}
