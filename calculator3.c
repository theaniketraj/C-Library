#include <stdio.h>
int main (void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Divide x by y
    int z = x / y;

    // Perform addition
    printf("%f\n", z);
    scanf("%.2f\n", z);
    return 0;
}