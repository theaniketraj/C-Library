// Write a program to test whether a given string is a palindrome.

#include<stdio.h>
#include<string.h>
#define size 26

int main()
{
    char strsrc[size];
    char strtmp[size];
    printf("\n Enter String:= ");
    gets(strsrc);
    strcpy(strtmp, strupr(strsrc));
    strrev(strtmp);
    if ( strcmp (strsrc, strtmp) == 0)
    printf("\n Entered string "%s" is palindrome", strsrc);
    else
    printf("\n Entered string "%s" is not palindrome", strsrc);
    // getch();
    return 0;
}
