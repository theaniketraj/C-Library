// Write a program which will take an integer as input and display the sum of its digits.

#include<stdio.h>

int main()
{
    int num = 0, sum = 0, k = 0;
    printf("enter the number\n");
    scanf("%d", num);
    while ( num != 0 )
    {
        k = num % 10;
        sum = sum + k;
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}
