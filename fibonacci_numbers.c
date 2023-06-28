// Write a function that will generate and print the first n fibonacci numbers.

#include<stdio.h>

int main()
{
    int n, old = 0, curr = 1, new = 0;
    printf("enter the total number of terms up to which you want to print the fibonacci series ");
    scanf("%d", &n);
    printf("%d", old);
    printf("\n%d", curr);
    for ( int i = 1; i <= n; i++ )
    {
        new = old + curr;
        old = curr;
        curr = new;
        printf("\n%d", new);
    }
    return 0;
}
