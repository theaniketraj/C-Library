#include <stdio.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = regular * .85;
    printf("Sale Price: %.2f\n, sale");
}

float discount(float price)
{
    return price * .85;
}