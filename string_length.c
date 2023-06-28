// Using pointer write a program to find out length of the given string without using strlen() function.

#include<stdio.h>
#include<conio.h>

int main()
{
    char a[20];
    int i = 0;
    printf("Enter the string: ");
    scanf("%s", a);
    while ( a[i] != '\0')
    {
        i++;
    }
    printf("string length is:%d", i);
    return 0;
}
