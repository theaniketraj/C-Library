#include<stdio.h>

int main()
{
    char i = 34;
    char *ptr = &i;
    printf("The value of ptr is %u\n",  ptr);
    ptr = ptr + 1;

    return 0;
}