#include<stdio.h>
void main()
{
    int a, b, sum;
    printf("Enter the value of a & b: ");
    scanf("%d%d", &a, &b);
    sum = add(&a, &b);
    printf("\nThe sum is: %d", sum);
}
int add(int *p, int *q)
{
    return(*p+*q);
}
