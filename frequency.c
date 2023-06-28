// Write a program that will accept a string from the user and print the frequency of each characters of the string entered.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char x[40];
    int i, j;
    static int count[256];
    printf("Enter the string: ");
    gets(x);
    for ( i = 0; i <= strlen(x); i++)
    {
        for ( j = 0; j < 256; j++ )
        {
            if ( x[i] == j )
            {
                count[j]++;
                break;
            }
        }
    }
    printf("\nThe frequency of the different characters are given below\n");
    for ( i = 0; i < 256; i++ )
    {
        if ( count[i] != 0 )
            printf(" \nThe frequency of the character %c is %d", i, count[i]);
    }
    return 0;
}
