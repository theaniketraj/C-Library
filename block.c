#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("Size: ");
        if (n > 0)
        {
            break;
        }
    }
}

// For each row
for (int i = 0; i < n; i++)
{
    // For each column
    for (int j = 0; j < n; j++)
    {
        // Print a block
        printf("#");
    }

    // Move to next row
    printf("\n");
}
