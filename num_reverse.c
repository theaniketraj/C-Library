#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, d, m, n;
    printf("Enter a value : ");
    scanf("%d", n);
    m = n;
    do
    {
        d = m % 10;
        m = m / 10;
        r = r * 10 + d;
    } 
    while ( m != 0 );
    printf("%d is the reverse", r);
    return 0;
}
