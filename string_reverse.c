// Write a program to reverse a string given as user input.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], revstr[50];
    int i = 0, j = 0;
    printf("Enter the string to be reversed : ");
    scanf("%s", &str);
    for ( i = strlen(str); i >= 0; i-- )
    {
        revstr[j] = str[i];
        j++;
    }
    revstr[j] = '\0';
    printf("\nInput String : %s", str);
    printf("\nOutput String : %s", revstr);
    return 0;
}
