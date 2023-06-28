// Example of Casting ( Explicit Type Conversion )

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
    int x = 7;
    int y = 4;
    float result1;
    float result2;
    result1 = x / y; /* without cast */
    result2 = (float)x / y; /* with cast */
    printf("Erroneous Output : %f", result1);
    printf("\nActual Output : %f", result2);
    getch();
    return EXIT_SUCCESS;
}
