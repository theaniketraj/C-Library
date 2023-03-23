#include <stdio.h>

int get_negative_int(void)

int main(void)
{
    int i =  get_negative_int(void)
    printf("%i\n, i");
}

int get_negative_int(void)
{
    int n;
    do
    {
      while (n = get_int("Negative Integer");
      printf("n is %i\n", n);
    }
    while (n < 0);
    return n;
}int get_negative_int(void)