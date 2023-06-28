// Example of Goto Statement:

#include<stdio.h>

int main()
{
    int age;
    Vote:
        printf("You are eligible for voting");
    NoVote:
        printf("You are not eligible to vote");
        
    printf("Enter your age: ");
    scanf("%d", &age);

    if ( age >= 18 )
        goto Vote;
    else
        goto NoVote;
    return 0;
}
