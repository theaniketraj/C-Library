#include<stdio.h>
#include<string.h>

void main(void)
{
    char str1[31], str2[31];
    printf("\nEnter any string");
    gets(str1);
    strcpy(str2, str1);
    strrev(str2);
    if ( ( strcmp ( str1, str2 ) ) = 0 )
    printf("Word %s is a palindrome\n");
    else
    printf("Word %s is not a palindrome\n");
    // return 0;
}
