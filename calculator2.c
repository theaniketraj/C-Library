#include <stdio.h>
int main (void)
{
    // Prompt user for x
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;

    // Perform addition
    printf("%f\n", z);
    scanf("%.2f\n", z);
    return 0;
}