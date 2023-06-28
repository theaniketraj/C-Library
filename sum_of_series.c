// Write a program to add the following series:
// 1 + 2/2! + 3/3! + ........... + n/n!

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
    int i, n;
    float fact = 1.0, sum = 0.0;
    printf("Enter the number upto which you want to calculate the sum\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        fact *= i;
        sum += i / fact;
    }
    printf("The result is %f", sum);
    return 0;
}
