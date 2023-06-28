// Write a recursive function to find the factorial of a number and have that function called from main().

#include<stdio.h>
#include<stdlib.h>

int fact(int k)
{
    if ( k == 0 )
    return 1;
    else
    return k*fact(k-1);
}
void main()
{
    int n;
    printf("\n Enter a number: ");
    scanf("%d", &n);
    printf("\n Factorial value = %d", fact(n));
}
