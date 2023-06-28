// Write a program to reverse a string using pointer concept but don't use strlen() function or "string.h".

#include<stdio.h>
#include<conio.h>
int main()
{
    char *s;
    int len, i;
    printf("\nEnter a String: ");
    gets(s);
    len = strlen(s);
    printf("\nThe Reverse of the String is: ");
    for ( i = len; i >= 0; i--)
    printf("%c", *(s+i));
    return 0;
}
