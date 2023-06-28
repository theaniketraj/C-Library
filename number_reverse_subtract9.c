// Write a program to reverse an integer number without using strrev() and strlen(), 
// subtract 9 from the reversed number and print the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, d, m, n, ans;
    printf("Enter the no : ");
    scanf("%d", &n);
    m = n;
    do
    {
        d = m % 10;
        m = m/10;
        r = ( r * 10 ) + d;
    } 
    while ( m != 0 );
    printf("%d is the reverse \n", r );
    ans = r - 9;
    printf("\n After subtracting 9 we get %d", ans);
    return 0;
}
