// Write a program to check whether the number given by the user is a Krishna Murthy number or not.
// Krishna Murthy Number : It is a number which is equal to the sum of the factorials of all its digitd.
// 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

#include<stdio.h>
int main()
{
    int originalNum, num, lastDigit, sum;
    long fact;
    printf("Enter any number to check strong number: ");
    scanf("%d", &num);
    originalNum = num;
    sum = 0;
    /* Find sum of factorial of digits */
    while ( num > 0 )
    {
        lastDigit = num%10;
        fact = 1;
        for ( int i = 1; i <= lastDigit; i++ )
        {
            int Fact = fact * i;
        }
        sum = sum + fact;
        num = num/10;
    }
    /* Check strong number condition */
    if ( sum == originalNum )
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }
    return 0;
}

