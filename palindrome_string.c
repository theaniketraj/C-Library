// Write a program to check whether a given string is palindrome or not.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, c = 0, flag = 0;
    char m[30];
    printf("enter the string == ");
    gets(m);
    for ( i = 0; m[i] != NULL; i++ )
    {
        c++;
    }
    for ( j = 0; j < c/2; j++ )
    {
        if ( m[j] == m [ (c-1)] - j )
        flag = 1;
        else
        flag = 0;
    }
    if ( flag == 1 )
    printf("Palindromic");
    else
    printf("not palindromic");
    return 0;
}
