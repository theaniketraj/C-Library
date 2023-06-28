// Program for conversion of lowercase characters into their uppercase characters by using string functions:

#include<stdio.h>
void main()
{
    void lwr_to_upr (char*);
    char s[50];
    printf("\n Enter string to convert to uppercase: ");
    scanf("%s", &s);
    lwr_to_upr (s);
    printf("\n CONVERTED UPPERCASE STRING IS: %s", s);
    getch ();
}
void lwr_to_upr ( char *STR )
{
    while ( *STR )
    {
        if ( *STR >= 'a' && *STR <= 'z' )
        *STR = *STR - 32;
        STR++;
    }
}
