// A quick demo of nested if-else

#include<stdio.h>

int main()
{
    int i;
    printf(" Enter either 1 or 2 ");
    scanf("%d", &i);
    if ( i == 1 )
    printf(" You would go to heaven ! ");
    else
    {
        if ( i == 2 )
        printf(" Hell was created with you in mind ");
        else
        printf(" How about mother earth ! ");
    }
    return 0;
}
